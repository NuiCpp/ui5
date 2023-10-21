target_sources(ui5-example-app PRIVATE main.cpp main_page.cpp)

target_include_directories(ui5-example-app PRIVATE ${CMAKE_CURRENT_LIST_DIR}/../../include)
target_include_directories(ui5-example-app PRIVATE ${CMAKE_CURRENT_LIST_DIR}/../../../../include)

# Link frontend of nui inside of emscripten
target_link_libraries(
    ui5-example-app
    PRIVATE
        nui-frontend
)

nui_prepare_emscripten_target(
    TARGET
        ui5-example-app
    PARCEL_ARGS
        # --no-optimize
    PREJS
        ${PREJS_FILE}
    EMSCRIPTEN_LINK_OPTIONS
        -sEXPORTED_FUNCTIONS=_frontendMain
        -O2
        -sALLOW_MEMORY_GROWTH=1
        # -g
        # or other options, see emscripten docs.
    EMSCRIPTEN_COMPILE_OPTIONS
        -O3
        # -g
)