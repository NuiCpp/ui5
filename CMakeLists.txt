cmake_minimum_required(VERSION 3.16)

project(ui5 VERSION 0.0.1 LANGUAGES CXX)

option(NUI_UI5_BUILD_EXAMPLE "Build ui5 example" OFF)

add_library(ui5 INTERFACE)
target_include_directories(ui5 INTERFACE "${CMAKE_CURRENT_LIST_DIR}/include")

if (${NUI_UI5_BUILD_EXAMPLE})
    add_subdirectory(ui5-example-app)
endif()