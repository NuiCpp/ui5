cmake_minimum_required(VERSION 3.16)

project(ui5-example-app VERSION 0.1.0)

# Nui Dependency
add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/dependencies/Nui)
#include (${CMAKE_CURRENT_LIST_DIR}/_cmake/dependencies/nui.cmake)
include (${CMAKE_CURRENT_LIST_DIR}/_cmake/common_options.cmake)

# Add executable (sources are added later, depending on frontend/backend)
add_executable(ui5-example-app)
set_common_options(ui5-example-app)

set(PREJS_FILE ${CMAKE_CURRENT_LIST_DIR}/frontend/source/frontend/js/module.js)

set(UI5_EXAMPLE_SCOPED_SOURCE_DIR ${CMAKE_CURRENT_LIST_DIR})
if (EMSCRIPTEN)
    add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/frontend/source/frontend)
else()
	add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/backend/source/backend)

    # If msys2, copy dynamic libraries to executable directory, visual studio does this automatically.
    # And there is no need on linux.
    if (DEFINED ENV{MSYSTEM})
        add_custom_command(TARGET ui5-example-app POST_BUILD
            COMMAND bash -c "ldd $<TARGET_FILE:ui5-example-app>" | "grep" "clang" | awk "NF == 4 { system(\"${CMAKE_COMMAND} -E copy \" \$3 \" $<TARGET_FILE_DIR:ui5-example-app>\") }"
            VERBATIM
        )
    endif()
endif()