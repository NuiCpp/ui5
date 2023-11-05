# SAPUI5 Components
SAP UI5 components for nui.

![Example Image](https://user-images.githubusercontent.com/6238896/280534443-090023ca-8831-4423-83bf-e9d16c4a9b53.png)

Wrapper around https://sap.github.io/ui5-webcomponents/

Example:
```cpp
#include <nui/frontend/api/console.hpp> // Console::log

#include <ui5/components/button.hpp> // ui5::button

auto foo()
{
    return ui5::button{
        "design"_prop = "Attention",
        "click"_event = [](auto&& event) {
            Nui::Console::log("Button clicked!");
        }
    }("Hello World");
}
```

## How to use
1. Clone the repository into your project OR as a submodule OR using FetchContent
    In your CMakeLists.txt:
    ```CMakeLists.txt
    include(FetchContent)

    FetchContent_Declare(
        ui5
        GIT_REPOSITORY https://github.com/NuiCpp/ui5.git
        GIT_TAG        main
    )

    FetchContent_MakeAvailable(ui5)
    ```
    or
    ```CMakeLists.txt
    add_subdirectory(ui5)
    ```
2. Link to the ui5 target in your frontend target: (in the template it is in frontend/source/frontend/CMakeLists.txt)
    ```CMakeLists.txt
    target_link_libraries(${PROJECT_NAME} PRIVATE nui-frontend ui5)
    ```
3. Add ui5-webcomponents to your package.json:
    ```sh
    npx add-dependencies @ui5/webcomponents @ui5/webcomponents-fiori @ui5/webcomponents-icons
    ```
4. Include components as you need them in your source:
    ```cpp
    #include <ui5/components/button.hpp>
    #include <ui5/components/busy_indicator.hpp>

    // ...
    Nui::ElementRenderer foo() {
        // <ui5-button></ui5-button>
        return ui5::button{}("Hello World");
    }

    Nui::ElementRenderer bar() {
        // <ui5-busy-indicator></ui5-busy-indicator>
        return ui5::busy_indicator{}();
    }
    ```

## Components are missing?
If you find a component that is missing, please open an issue.
In the meantime you can import it like so:

missing_component.hpp:
```cpp
#pragma once
// clang-format off

#ifdef NUI_INLINE
// @inline(js, ui5-missing-component)
// js_import to avoid collision with c++ modules
js_import "@ui5/webcomponents/dist/MissingComponent.js";
// @endinline
#endif

// clang-format on

namespace ui5
{
    NUI_MAKE_HTML_ELEMENT_RENAME(missing_component, "ui5-missing-component")
}
```
