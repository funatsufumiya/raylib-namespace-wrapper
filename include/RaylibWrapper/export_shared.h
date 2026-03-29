/* Generated export header for shared library builds */
#pragma once

#ifndef RAYLIBWRAPPER_SHARED_EXPORT_H
#define RAYLIBWRAPPER_SHARED_EXPORT_H

#if defined(_WIN32) || defined(__CYGWIN__)
/* CMake's generate_export_header defines a symbol like <target>_EXPORTS
	(e.g. raylibwrapper_shared_EXPORTS). Accept common variants so the
	manual header works whether the target is named `raylibwrapper` or
	`raylibwrapper_shared`. */
#  if defined(raylibwrapper_shared_EXPORTS) || defined(raylibwrapper_EXPORTS) || defined(raylibwrapper_EXPORT)
/* building the DLL */
#    define RAYLIBWRAPPER_SHARED_EXPORT __declspec(dllexport)
#  else
/* using the DLL */
#    define RAYLIBWRAPPER_SHARED_EXPORT __declspec(dllimport)
#  endif
#  define RAYLIBWRAPPER_SHARED_NO_EXPORT
#else
#  if __GNUC__ >= 4
#    define RAYLIBWRAPPER_SHARED_EXPORT __attribute__((visibility("default")))
#    define RAYLIBWRAPPER_SHARED_NO_EXPORT __attribute__((visibility("hidden")))
#  else
#    define RAYLIBWRAPPER_SHARED_EXPORT
#    define RAYLIBWRAPPER_SHARED_NO_EXPORT
#  endif
#endif

#ifndef RAYLIBWRAPPER_SHARED_DEPRECATED
#  if defined(_MSC_VER)
#    define RAYLIBWRAPPER_SHARED_DEPRECATED __declspec(deprecated)
#  else
#    define RAYLIBWRAPPER_SHARED_DEPRECATED __attribute__((deprecated))
#  endif
#endif

#ifndef RAYLIBWRAPPER_SHARED_DEPRECATED_EXPORT
#  define RAYLIBWRAPPER_SHARED_DEPRECATED_EXPORT RAYLIBWRAPPER_SHARED_EXPORT RAYLIBWRAPPER_SHARED_DEPRECATED
#endif

#ifndef RAYLIBWRAPPER_SHARED_DEPRECATED_NO_EXPORT
#  define RAYLIBWRAPPER_SHARED_DEPRECATED_NO_EXPORT RAYLIBWRAPPER_SHARED_NO_EXPORT RAYLIBWRAPPER_SHARED_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef RAYLIBWRAPPER_SHARED_NO_DEPRECATED
#    define RAYLIBWRAPPER_SHARED_NO_DEPRECATED
#  endif
#endif

#endif /* RAYLIBWRAPPER_SHARED_EXPORT_H */
