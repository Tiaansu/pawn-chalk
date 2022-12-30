include(AMXConfig)
include(AddSAMPPlugin)

set(SAMP_SDK_ROOT "${PROJECT_SOURCE_DIR}/lib/samp-plugin-sdk")
find_package(SAMPSDK REQUIRED)

set(PAWNCHALK_CONFIG_INCLUDE_DIR "${CMAKE_CURRENT_BINARY_DIR}/config_headers")

set(PAWNCHALK_VERSION "1.0.0")

include_directories(
    ${SAMPSDK_INCLUDE_DIR}
    ${PAWNCHALK_CONFIG_INCLUDE_DIR}
)

configure_file(
    "../chalk.inc.in"
    "${CMAKE_BINARY_DIR}/artifact/pawno/include/chalk.inc"
    @ONLY
)

configure_file(
    "version.hpp.in"
    "${PAWNCHALK_CONFIG_INCLUDE_DIR}/version.hpp"
    @ONLY
)

add_samp_plugin(pawnchalk
    ${SAMPSDK_DIR}/amx/getch.c
    ${SAMPSDK_DIR}/amxplugin.cpp
    ${SAMPSDK_DIR}/amxplugin2.cpp
    Chalk.hpp
    common.hpp
    main.cpp
    sdk.hpp
    natives.cpp
    natives.hpp
    plugin.def
)
if(MSVC)
    set_target_properties(pawnchalk PROPERTIES
        RUNTIME_OUTPUT_DIRECTORY $<1:${CMAKE_BINARY_DIR}/artifact/plugins>
    )
    set_target_properties(pawnchalk PROPERTIES
        LIBRARY_OUTPUT_DIRECTORY $<1:${CMAKE_BINARY_DIR}/artifact/plugins>
    )
elseif(UNIX)
    message("binary dir: " ${CMAKE_BINARY_DIR})
    set_target_properties(pawnchalk
        PROPERTIES
            RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/artifact/plugins
            LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/artifact/plugins
            ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/artifact/plugins
    )
endif()
target_link_libraries(pawnchalk)