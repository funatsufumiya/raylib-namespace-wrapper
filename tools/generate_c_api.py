#!/usr/bin/env python3
"""
Simple generator: parse the rlw namespace in RaylibWrapper.hpp and emit C-linkage
wrappers (header + source) with `rlw_` prefixes. Not perfect, but handles most
function declarations that end with a semicolon.

Usage: python tools/generate_c_api.py
"""
import re
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
hdr_in = ROOT / 'include' / 'RaylibWrapper' / 'RaylibWrapper.hpp'
out_h = ROOT / 'include' / 'RaylibWrapper' / 'c_api_generated.h'
out_cpp = ROOT / 'src' / 'c_api_generated.cpp'

def extract_rlw_namespace(text):
    m = re.search(r"namespace\s+rlw\s*\{", text)
    if not m:
        raise SystemExit('namespace rlw not found')
    start = m.end()
    depth = 1
    i = start
    while i < len(text) and depth > 0:
        if text[i] == '{':
            depth += 1
        elif text[i] == '}':
            depth -= 1
        i += 1
    return text[start:i-1]

def find_functions(ns_text):
    funcs = []
    # crude regex: return_type name ( params );  skip typedefs/structs
    pat = re.compile(r'^\s*([^;{\n]+?)\s+([A-Za-z_]\w*)\s*\(([^;{)]*)\)\s*;.*$', re.M)
    for m in pat.finditer(ns_text):
        ret = m.group(1).strip()
        name = m.group(2).strip()
        params = m.group(3).strip()
        funcs.append((ret, name, params))
    return funcs

def param_names(params):
    if not params or params.strip() == 'void':
        return []
    parts = [p.strip() for p in params.split(',')]
    names = []
    for p in parts:
        # split by space, last token is name (heuristic)
        toks = p.rsplit(' ', 1)
        if len(toks) == 1:
            names.append(toks[0])
        else:
            names.append(toks[1])
    return names

def make_c_decl(ret, name, params):
    return f'RAYLIBWRAPPER_API {ret} rlw_{name}({params});'

def make_c_impl(ret, name, params):
    pnames = param_names(params)
    call_args = ', '.join(pnames)
    decl = f'{ret} rlw_{name}({params})'
    body = ''
    if ret.strip() == 'void':
        body = f'    rlw::{name}({call_args});\n'
    else:
        body = f'    return rlw::{name}({call_args});\n'
    return decl + ' {\n' + body + '}'

def main():
    txt = hdr_in.read_text(encoding='utf-8')
    ns = extract_rlw_namespace(txt)
    funcs = find_functions(ns)
    # Disambiguate overloaded function names: if multiple functions share the
    # same name, append a numeric suffix (_1, _2, ...) to the C wrapper name.
    from collections import defaultdict
    name_counts = defaultdict(int)
    for _ret, name, _params in funcs:
        name_counts[name] += 1
    name_index = defaultdict(int)
    # emit header
    hdr_lines = []
    hdr_lines.append('#pragma once')
    hdr_lines.append('#include <RaylibWrapper/export.h>')
    hdr_lines.append('#include <RaylibWrapper/RaylibWrapper.hpp>')
    hdr_lines.append('#ifdef __cplusplus')
    hdr_lines.append('extern "C" {')
    hdr_lines.append('#endif')
    hdr_lines.append('')
    for ret, name, params in funcs:
        if name_counts[name] == 1:
            c_name = name
        else:
            name_index[name] += 1
            c_name = f"{name}_{name_index[name]}"
        hdr_lines.append(f'RAYLIBWRAPPER_API {ret} rlw_{c_name}({params});')
    hdr_lines.append('')
    hdr_lines.append('#ifdef __cplusplus')
    hdr_lines.append('} // extern "C"')
    hdr_lines.append('#endif')
    out_h.write_text('\n'.join(hdr_lines), encoding='utf-8')

    # emit cpp
    cpp_lines = []
    cpp_lines.append('#include <RaylibWrapper/c_api_generated.h>')
    cpp_lines.append('#include <RaylibWrapper/RaylibWrapper.hpp>')
    cpp_lines.append('extern "C" {')
    # Emit implementations using the original rlw::name calls but unique
    # rlw_<c_name> wrapper names.
    name_index.clear()
    for ret, name, params in funcs:
        if name_counts[name] == 1:
            c_name = name
        else:
            name_index[name] += 1
            c_name = f"{name}_{name_index[name]}"
        # create impl that calls rlw::original_name
        pnames = param_names(params)
        call_args = ', '.join(pnames)
        decl = f'{ret} rlw_{c_name}({params})'
        if ret.strip() == 'void':
            body = f'    rlw::{name}({call_args});\n'
        else:
            body = f'    return rlw::{name}({call_args});\n'
        cpp_lines.append(decl + ' {\n' + body + '}')
    cpp_lines.append('} // extern "C"')
    out_cpp.write_text('\n\n'.join(cpp_lines), encoding='utf-8')

    print(f'Generated {len(funcs)} wrappers -> {out_h}, {out_cpp}')

if __name__ == '__main__':
    main()
