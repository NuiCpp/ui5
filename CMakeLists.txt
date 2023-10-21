cmake_minimum_required(VERSION 3.16)

project(nui-ui5-components VERSION 0.0.1 LANGUAGES CXX)

add_library(nui-ui5-components INTERFACE)
target_include_directories(nui-ui5-components INTERFACE "${CMAKE_CURRENT_LIST_DIR}/include")