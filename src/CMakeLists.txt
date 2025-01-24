include(AMXConfig)
include(AddSAMPPlugin)

set(SAMP_SDK_ROOT "${PROJECT_SOURCE_DIR}/lib/samp-plugin-sdk")
find_package(SAMPSDK REQUIRED)

include_directories(
    ${SAMPSDK_INCLUDE_DIR}
    ${PROJECT_SOURCE_DIR}/lib/fmt/include
)

file(GLOB_RECURSE SOURCES 
    *.cpp
    *.hpp
    *.c
    *.h
)

add_samp_plugin(${PROJECT_NAME}
    ${SAMPSDK_DIR}/amx/getch.c
    ${SAMPSDK_DIR}/amxplugin.cpp
    ${SAMPSDK_DIR}/amxplugin2.cpp
    ${SOURCES}
    plugin.def
)

if (UNIX)
    set_target_properties(${PROJECT_NAME} PROPERTIES PREFIX "")
endif ()

target_link_libraries(${PROJECT_NAME}
    fmt
)