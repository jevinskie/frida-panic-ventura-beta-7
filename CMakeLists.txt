cmake_minimum_required(VERSION 3.22)

project(frida-panic C)

cmake_policy(SET CMP0135 NEW)
include(FetchContent)
FetchContent_Declare(
    frida-gum-prebuilt
    FETCHCONTENT_TRY_FIND_PACKAGE_MODE NEVER
    URL https://github.com/frida/frida/releases/download/15.2.2/frida-gum-devkit-15.2.2-macos-arm64.tar.xz
)
FetchContent_MakeAvailable(frida-gum-prebuilt)
FetchContent_GetProperties(frida-gum-prebuilt SOURCE_DIR FRIDA_GUM_SRC_DIR)

add_library(frida-gum STATIC IMPORTED GLOBAL)
set_target_properties(frida-gum PROPERTIES IMPORTED_LOCATION ${FRIDA_GUM_SRC_DIR}/libfrida-gum.a)
target_include_directories(frida-gum INTERFACE ${FRIDA_GUM_SRC_DIR})

add_executable(frida-panic frida-panic.c)
target_link_libraries(frida-panic frida-gum "-framework IOKit")
