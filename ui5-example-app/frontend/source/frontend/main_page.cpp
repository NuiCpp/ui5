#include <frontend/main_page.hpp>

#include <nui/frontend/elements.hpp>

#include <ui5/components.hpp>
#include <ui5/fiori_components.hpp>

Nui::ElementRenderer decoWrap(Nui::ElementRenderer renderer)
{
    using namespace Nui;
    using namespace Nui::Elements;
    using namespace Nui::Attributes;

    // clang-format off
    return div{
        style = "border: 1px solid black; padding: 1rem; min-height: 80px"
    }(
        renderer()
    );
    // clang-format on
}

Nui::ElementRenderer MainPage::render()
{
    using namespace Nui;
    using namespace Nui::Elements;
    using Nui::Elements::div; // because of the global div.

    // clang-format off
    return body{}(
        decoWrap(ui5::button{}("Click Me"))
    );
    // clang-format on
}