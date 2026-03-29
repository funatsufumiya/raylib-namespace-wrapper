cmake_minimum_required(VERSION 3.14)

# Auto-detect vcpkg toolchain in project root and set it before project() if present
if(NOT DEFINED CMAKE_TOOLCHAIN_FILE)
    set(_vcpkg_toolchain "${CMAKE_SOURCE_DIR}/vcpkg/scripts/buildsystems/vcpkg.cmake")
    if(EXISTS "${_vcpkg_toolchain}")
        message(STATUS "Auto-detected vcpkg toolchain: ${_vcpkg_toolchain}")
        set(CMAKE_TOOLCHAIN_FILE "${_vcpkg_toolchain}" CACHE STRING "Vcpkg toolchain file" FORCE)
    endif()
endif()

project(raylibwrapper
    VERSION 1.0.0
    DESCRIPTION "Template for C++ library built with CMake"
    LANGUAGES CXX)

#----------------------------------------------------------------------------------------------------------------------
# general settings and options
#----------------------------------------------------------------------------------------------------------------------

include(cmake/utils.cmake)
include(GNUInstallDirs)

string(COMPARE EQUAL "${CMAKE_SOURCE_DIR}" "${CMAKE_CURRENT_SOURCE_DIR}" is_top_level)

# raylibwrapper_SHARED_LIBS option (undefined by default) can be used to force shared/static build
option(raylibwrapper_INSTALL "Generate target for installing raylibwrapper" ${is_top_level})
set_if_undefined(raylibwrapper_INSTALL_CMAKEDIR "${CMAKE_INSTALL_LIBDIR}/cmake/raylibwrapper" CACHE STRING
    "Install path for raylibwrapper package-related CMake files")

# Option to build both static and shared (DLL) variants
option(raylibwrapper_BUILD_SHARED_AND_STATIC "Build both static and shared (DLL) libraries" ON)
if(DEFINED raylibwrapper_SHARED_LIBS)
    set(BUILD_SHARED_LIBS ${raylibwrapper_SHARED_LIBS})
endif()

if(NOT DEFINED CMAKE_BUILD_TYPE AND NOT DEFINED CMAKE_CONFIGURATION_TYPES)
    set(CMAKE_BUILD_TYPE Release CACHE STRING "Build type" FORCE)
    set_property(CACHE CMAKE_BUILD_TYPE PROPERTY STRINGS "Debug" "Release" "MinSizeRel" "RelWithDebInfo")
endif()

set_if_undefined(CMAKE_CXX_VISIBILITY_PRESET hidden)
set_if_undefined(CMAKE_VISIBILITY_INLINES_HIDDEN ON)

if(raylibwrapper_BUILD_SHARED_AND_STATIC)
    # create separate static and shared targets
    add_library(raylibwrapper_static STATIC)
    add_library(raylibwrapper_shared SHARED)

    add_library(raylibwrapper::raylibwrapper_static ALIAS raylibwrapper_static)
    add_library(raylibwrapper::raylibwrapper_shared ALIAS raylibwrapper_shared)
    # keep a convenience alias pointing to the shared build by default
    add_library(raylibwrapper::raylibwrapper ALIAS raylibwrapper_shared)
else()
    add_library(raylibwrapper) # initialized below
    add_library(raylibwrapper::raylibwrapper ALIAS raylibwrapper)
endif()

#----------------------------------------------------------------------------------------------------------------------
# raylibwrapper dependencies
#----------------------------------------------------------------------------------------------------------------------

# Search for your dependencies here
## Ensure a usable `raylib` target or library is available
if(NOT TARGET raylib)
    # If RAYLIB_ROOT points to raylib source tree, add it as subdirectory to build raylib here
    if(DEFINED RAYLIB_ROOT AND EXISTS "${RAYLIB_ROOT}/CMakeLists.txt" AND EXISTS "${RAYLIB_ROOT}/src")
        message(STATUS "Adding raylib subdirectory from ${RAYLIB_ROOT}")
        add_subdirectory(${RAYLIB_ROOT} ${CMAKE_BINARY_DIR}/external/raylib_build)
    endif()

    # If still no target, try to locate installed raylib by searching likely locations
    if(NOT TARGET raylib)
        if(DEFINED RAYLIB_ROOT)
            set(_raylib_hints ${RAYLIB_ROOT})
        else()
            set(_raylib_hints $ENV{RAYLIB_ROOT})
        endif()

        find_path(RAYLIB_INCLUDE_DIR raylib.h HINTS ${_raylib_hints} PATH_SUFFIXES include src)
        find_library(RAYLIB_LIBRARY NAMES raylib raylib_static HINTS ${_raylib_hints} PATH_SUFFIXES lib lib64 build/Release build/Debug)

        if(RAYLIB_LIBRARY)
            add_library(raylib UNKNOWN IMPORTED)
            set_target_properties(raylib PROPERTIES
                IMPORTED_LOCATION "${RAYLIB_LIBRARY}"
                INTERFACE_INCLUDE_DIRECTORIES "${RAYLIB_INCLUDE_DIR}")
        else()
            message(FATAL_ERROR "raylib library not found. Set RAYLIB_ROOT (CMake variable) pointing to raylib source or installed tree, or provide a raylib target.")
        endif()
    endif()
endif()

if(raylibwrapper_BUILD_SHARED_AND_STATIC)
    # Ensure a usable `glfw` target exists.
    # On MSVC + vcpkg static triplet the import lib may be named `glfw3.lib`.
    # Use a small MSVC-only workaround: if no `glfw` target exists, try to
    # locate common import-library names and create an IMPORTED target
    # pointing to that file. On non-MSVC platforms, prefer the normal
    # `find_package` behavior so CMake-imported targets are used.
    if(NOT TARGET glfw)
        if(MSVC)
            find_library(GLFW_LIB_FOUND
                NAMES glfw3 glfw3.lib glfw3dll glfw glfw.lib
                PATHS
                    ${CMAKE_BINARY_DIR}
                    ${CMAKE_SOURCE_DIR}
                    ${CMAKE_CURRENT_SOURCE_DIR}
                PATH_SUFFIXES lib lib64 "lib/${CMAKE_BUILD_TYPE}" NO_DEFAULT_PATH)
            if(GLFW_LIB_FOUND)
                add_library(glfw UNKNOWN IMPORTED)
                set_target_properties(glfw PROPERTIES IMPORTED_LOCATION "${GLFW_LIB_FOUND}")
                # try to locate headers so include dirs are available
                find_path(GLFW_INCLUDE_DIR NAMES GLFW/glfw3.h HINTS ${CMAKE_SOURCE_DIR} PATHS ${CMAKE_SOURCE_DIR} ${CMAKE_CURRENT_SOURCE_DIR} ${CMAKE_BINARY_DIR} PATH_SUFFIXES include)
                if(GLFW_INCLUDE_DIR)
                    set_target_properties(glfw PROPERTIES INTERFACE_INCLUDE_DIRECTORIES "${GLFW_INCLUDE_DIR}")
                endif()
            else()
                # fall back to package config if the import lib wasn't found
                find_package(glfw3 CONFIG REQUIRED)
            endif()
        else()
            # non-MSVC: rely on package-provided imported targets
            find_package(glfw3 CONFIG REQUIRED)
        endif()
    endif()

    target_link_libraries(raylibwrapper_shared PRIVATE raylib glfw)
    target_link_libraries(raylibwrapper_static PRIVATE raylib glfw)
else()
    target_link_libraries(raylibwrapper PRIVATE raylib glfw)
endif()

# On MSVC, ensure shared DLLs export all symbols so dynamic linking (JIT/FFI)
# can find the `rlw_*` functions even if export macros aren't applied everywhere.
if(MSVC)
    if(TARGET raylibwrapper_shared)
        set_target_properties(raylibwrapper_shared PROPERTIES WINDOWS_EXPORT_ALL_SYMBOLS ON)
        target_link_libraries(raylibwrapper_shared PUBLIC legacy_stdio_definitions)
    endif()
    # Also handle single-target (non-shared_and_static) layout where target is `raylibwrapper`.
    if(TARGET raylibwrapper)
        set_target_properties(raylibwrapper PROPERTIES WINDOWS_EXPORT_ALL_SYMBOLS ON)
        target_link_libraries(raylibwrapper PUBLIC legacy_stdio_definitions)
    endif()
endif()

#----------------------------------------------------------------------------------------------------------------------
# raylibwrapper sources
#----------------------------------------------------------------------------------------------------------------------

# Export header generation and sources
include(GenerateExportHeader)
set(sources
    include/RaylibWrapper/export.h
    include/RaylibWrapper/RaylibWrapper.hpp
    src/RaylibWrapper.cpp
    src/c_api.cpp)
source_group(TREE "${CMAKE_CURRENT_SOURCE_DIR}" FILES ${sources})

if(raylibwrapper_BUILD_SHARED_AND_STATIC)
    # attach sources to both targets
    target_sources(raylibwrapper_shared PRIVATE ${sources})
    target_sources(raylibwrapper_static PRIVATE ${sources})

    # generate separate export headers for shared/static
    generate_export_header(raylibwrapper_shared EXPORT_FILE_NAME include/RaylibWrapper/export_shared.h)
    generate_export_header(raylibwrapper_static EXPORT_FILE_NAME include/RaylibWrapper/export_static.h)

    # static build should define the static macro
    target_compile_definitions(raylibwrapper_static PUBLIC RAYLIBWRAPPER_STATIC_DEFINE)

    target_include_directories(raylibwrapper_shared
        PUBLIC
            "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>"
            "$<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}/include>")

    target_include_directories(raylibwrapper_static
        PUBLIC
            "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>"
            "$<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}/include>")

    set_target_properties(raylibwrapper_shared PROPERTIES
        SOVERSION ${PROJECT_VERSION_MAJOR}
        VERSION ${PROJECT_VERSION})

    set_target_properties(raylibwrapper_static PROPERTIES
        SOVERSION ${PROJECT_VERSION_MAJOR}
        VERSION ${PROJECT_VERSION})
else()
    set(export_file_name "export_shared.h")

    if(NOT BUILD_SHARED_LIBS)
        set(export_file_name "export_static.h")
    endif()

    generate_export_header(raylibwrapper EXPORT_FILE_NAME include/RaylibWrapper/${export_file_name})

    target_sources(raylibwrapper PRIVATE ${sources})
    target_compile_definitions(raylibwrapper PUBLIC "$<$<NOT:$<BOOL:${BUILD_SHARED_LIBS}>>:RAYLIBWRAPPER_STATIC_DEFINE>")

    target_include_directories(raylibwrapper
        PUBLIC
            "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>"
            "$<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}/include>")

    set_target_properties(raylibwrapper PROPERTIES
        SOVERSION ${PROJECT_VERSION_MAJOR}
        VERSION ${PROJECT_VERSION})
endif()

include(CMakePackageConfigHelpers)

if(raylibwrapper_INSTALL AND NOT CMAKE_SKIP_INSTALL_RULES)
    configure_package_config_file(cmake/raylibwrapper-config.cmake.in raylibwrapper-config.cmake
        INSTALL_DESTINATION "${raylibwrapper_INSTALL_CMAKEDIR}")

    write_basic_package_version_file(raylibwrapper-config-version.cmake
        COMPATIBILITY SameMajorVersion)

    # Determine which targets to install/export. If raylib is built as part of the same tree (non-IMPORTED),
    # include it in the export so the generated export file references are valid.
    set(_install_targets)
    if(raylibwrapper_BUILD_SHARED_AND_STATIC)
        list(APPEND _install_targets raylibwrapper_shared raylibwrapper_static)
    else()
        list(APPEND _install_targets raylibwrapper)
    endif()

    if(TARGET raylib)
        get_target_property(_raylib_imported raylib IMPORTED)
        if(NOT _raylib_imported)
            list(APPEND _install_targets raylib)
        endif()
    endif()

    # Automatically include any non-IMPORTED target dependencies (e.g. glfw) in the export
    set(_extra_targets)
    foreach(_t IN LISTS _install_targets)
        # try INTERFACE_LINK_LIBRARIES then LINK_LIBRARIES
        get_target_property(_linklibs ${_t} INTERFACE_LINK_LIBRARIES)
        if(NOT _linklibs)
            get_target_property(_linklibs ${_t} LINK_LIBRARIES)
        endif()
        if(_linklibs)
            string(REPLACE ";" " " _linklibs_str "${_linklibs}")
            foreach(_lnk ${_linklibs_str})
                if(TARGET ${_lnk})
                    get_target_property(_lnk_imported ${_lnk} IMPORTED)
                    if(NOT _lnk_imported)
                        list(FIND _install_targets ${_lnk} _found)
                        if(_found EQUAL -1)
                            list(FIND _extra_targets ${_lnk} _found2)
                            if(_found2 EQUAL -1)
                                list(APPEND _extra_targets ${_lnk})
                            endif()
                        endif()
                    endif()
                endif()
            endforeach()
        endif()
    endforeach()

    if(_extra_targets)
        list(APPEND _install_targets ${_extra_targets})
    endif()

    install(TARGETS ${_install_targets} EXPORT raylibwrapper_export
        RUNTIME COMPONENT raylibwrapper
        LIBRARY COMPONENT raylibwrapper NAMELINK_COMPONENT raylibwrapper-dev
        ARCHIVE COMPONENT raylibwrapper-dev
        INCLUDES DESTINATION "${CMAKE_INSTALL_INCLUDEDIR}")
    install(DIRECTORY include/
        TYPE INCLUDE
        COMPONENT raylibwrapper-dev)
    if(raylibwrapper_BUILD_SHARED_AND_STATIC)
        install(FILES "${CMAKE_CURRENT_BINARY_DIR}/include/raylibwrapper/export_shared.h"
            COMPONENT raylibwrapper-dev
            DESTINATION "${CMAKE_INSTALL_INCLUDEDIR}/raylibwrapper")
        install(FILES "${CMAKE_CURRENT_BINARY_DIR}/include/raylibwrapper/export_static.h"
            COMPONENT raylibwrapper-dev
            DESTINATION "${CMAKE_INSTALL_INCLUDEDIR}/raylibwrapper")
    else()
        install(FILES "${CMAKE_CURRENT_BINARY_DIR}/include/raylibwrapper/${export_file_name}"
            COMPONENT raylibwrapper-dev
            DESTINATION "${CMAKE_INSTALL_INCLUDEDIR}/raylibwrapper")
    endif()

    if(raylibwrapper_BUILD_SHARED_AND_STATIC)
        set(targets_file "raylibwrapper-shared-static-targets.cmake")
    else()
        set(targets_file "raylibwrapper-shared-targets.cmake")

        if(NOT BUILD_SHARED_LIBS)
            set(targets_file "raylibwrapper-static-targets.cmake")
        endif()
    endif()

    install(EXPORT raylibwrapper_export
        COMPONENT raylibwrapper-dev
        FILE "${targets_file}"
        DESTINATION "${raylibwrapper_INSTALL_CMAKEDIR}"
        NAMESPACE raylibwrapper::)

    install(FILES
        "${CMAKE_CURRENT_BINARY_DIR}/raylibwrapper-config.cmake"
        "${CMAKE_CURRENT_BINARY_DIR}/raylibwrapper-config-version.cmake"
        COMPONENT raylibwrapper-dev
        DESTINATION "${raylibwrapper_INSTALL_CMAKEDIR}")

    if(MSVC)
        if(raylibwrapper_BUILD_SHARED_AND_STATIC)
            # shared PDB (installed to bindir)
            set(pdb_shared "$<TARGET_PDB_FILE:raylibwrapper_shared>")
            install(FILES "${pdb_shared}"
                COMPONENT raylibwrapper-dev
                CONFIGURATIONS Debug RelWithDebInfo
                DESTINATION "${CMAKE_INSTALL_BINDIR}"
                OPTIONAL)

            # static PDB (determine manually since TARGET_PDB_FILE may not work)
            set(pdb_static "$<TARGET_FILE_DIR:raylibwrapper_static>/$<TARGET_FILE_PREFIX:raylibwrapper_static>$<TARGET_FILE_BASE_NAME:raylibwrapper_static>.pdb")
            install(FILES "${pdb_static}"
                COMPONENT raylibwrapper-dev
                CONFIGURATIONS Debug RelWithDebInfo
                DESTINATION "${CMAKE_INSTALL_LIBDIR}"
                OPTIONAL)
        else()
            set(pdb_file "")
            set(pdb_file_destination "")

            if(BUILD_SHARED_LIBS)
                set(pdb_file "$<TARGET_PDB_FILE:raylibwrapper>")
                set(pdb_file_destination "${CMAKE_INSTALL_BINDIR}")
            else()
                # TARGET_PDB_FILE does not work for pdb file generated for static library build, determining it manually
                set(pdb_file "$<TARGET_FILE_DIR:raylibwrapper>/$<TARGET_FILE_PREFIX:raylibwrapper>$<TARGET_FILE_BASE_NAME:raylibwrapper>.pdb")
                set(pdb_file_destination "${CMAKE_INSTALL_LIBDIR}")
            endif()

            install(FILES "${pdb_file}"
                COMPONENT raylibwrapper-dev
                CONFIGURATIONS Debug RelWithDebInfo
                DESTINATION "${pdb_file_destination}"
                OPTIONAL)
        endif()
    endif()
endif()

