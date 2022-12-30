cmake_minimum_required(VERSION 3.0)

project(pawnchalk)

list(APPEND CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/lib/cmake-modules")

set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/build)
set(RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/artifacts/plugins)
set(LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/artifacts/plugins)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if(UNIX)
    set(CMAKE_CXX_FLAGS "-m32 -fvisibility=hidden -lstdc++fs")
    set(CMAKE_C_FLAGS "-m32 -fvisibility=hidden")
    set_property(GLOBAL PROPERTY FIND_LIBRARY_USE_LIB64_PATHS OFF)
endif()

add_subdirectory(src)