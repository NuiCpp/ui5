target_sources(ui5-example-app PRIVATE main.cpp)

target_include_directories(ui5-example-app PRIVATE ${CMAKE_CURRENT_LIST_DIR}/../../backend/include)

# Link backend of nui outside of emscripten
target_link_libraries(ui5-example-app PRIVATE nui-backend)

nui_set_target_output_directories(ui5-example-app)

set_target_properties(ui5-example-app
    PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin/examples/ui5-example-app"
)

# Creates a target that is compiled through emscripten. This target becomes the frontend part.
nui_add_emscripten_target(
    TARGET
        ui5-example-app
    PREJS
        ${PREJS_FILE}
    SOURCE_DIR
        ${UI5_EXAMPLE_SCOPED_SOURCE_DIR}
    CMAKE_OPTIONS
        # I recommend to work with a release build by default because debug builds get big fast.
        -DCMAKE_BUILD_TYPE=Release
)