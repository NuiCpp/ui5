#include <frontend/main_page.hpp>

#include <nui/frontend/api/console.hpp>
#include <nui/frontend/elements.hpp>
#include <nui/frontend/attributes.hpp>

// #include <ui5/assets/icons.hpp>

#ifdef NUI_INLINE
// @inline(js, ui5-example-app-icons)
import "@ui5/webcomponents-icons/dist/employee.js";
import "@ui5/webcomponents-icons/dist/pending.js";
import "@ui5/webcomponents-icons/dist/group.js";
// @endinline
#endif

#include <ui5/components/button.hpp>
#include <ui5/components/avatar.hpp>
#include <ui5/components/avatar_group.hpp>
#include <ui5/components/badge.hpp>
#include <ui5/components/icon.hpp>
#include <ui5/components/breadcrumbs.hpp>
#include <ui5/components/busy_indicator.hpp>
#include <ui5/components/card.hpp>
#include <ui5/components/list.hpp>

Nui::ElementRenderer decoWrap(std::string const& caption, Nui::ElementRenderer renderer)
{
    using namespace Nui;
    using namespace Nui::Elements;
    using namespace Nui::Attributes;
    using Nui::Elements::div;
    using Nui::Attributes::style;

    // clang-format off
    return div{
        style =
            "border-bottom: 1px solid black;"
            "margin-bottom: 10px;"
            "padding-bottom: 10px;"
            "display: flex;"
            "flex-direction: column;"
            "align-items: flex-start;"
    }(
        div{
            style = "font-size: 20px; font-weight: bold;"
        }(caption),
        std::move(renderer)
    );
    // clang-format on
}

Nui::ElementRenderer MainPage::render()
{
    using namespace Nui;
    using namespace Nui::Elements;
    using namespace Nui::Attributes;
    using Nui::Elements::div; // because of the global div.

    using namespace Nui::Attributes::Literals;
    using Nui::Attributes::Literals::_event;

    // clang-format off
    return body{}(
        decoWrap("ui5-button", ui5::button{}("Click Me")),
        decoWrap("ui5-avatar", ui5::avatar{
            "initials"_prop = "TE",
            "interactive"_prop = true
        }()),
        decoWrap("ui5-avatar-group", ui5::avatar_group{}(
            ui5::avatar{
                "initials"_prop = "AB",
                "icon"_prop = "employee"
            }(),
            ui5::avatar{
                "initials"_prop = "CD"
            }(),
            ui5::avatar{
                "initials"_prop = "EF"
            }()
        )),
        decoWrap("ui5-badge", ui5::badge{
            "color_scheme"_prop = "1"
        }(
            ui5::icon{
                "name"_prop = "pending",
                "slot"_prop = "icon"
            }(),
            text{"Pending"}()
        )),
        decoWrap("ui5-breadcrumbs", ui5::breadcrumbs{}(
            ui5::breadcrumbs_item{}("Home"),
            ui5::breadcrumbs_item{}("Products"),
            ui5::breadcrumbs_item{}("Household"),
            ui5::breadcrumbs_item{}("Kitchen"),
            ui5::breadcrumbs_item{}("Product Details")
        )),
        decoWrap("ui5-busy-indicator", ui5::busy_indicator{
            "size"_prop = "Medium",
            "active"_prop = true
        }()),
        decoWrap("ui5-card", ui5::card{}(
            ui5::card_header{
                "slot"_prop = "header",
                "titleText"_prop = "This header is interactive",
                "subtitleText"_prop = "Click, press Enter or Space",
                "status"_prop = "3 of 6",
                "interactive"_prop = true,
                // reference.onMaterialize([](auto&& element) {
                //     element.template call<void>("addEventListener", Nui::val{"click"}, Nui::bind([](Nui::val&&) {
                //         Nui::Console::log("Card header clicked");
                //     }, std::placeholders::_1));
                // })
                "click"_event = [](auto&&) {
                    Nui::Console::log("Card header clicked");
                }
            }(
                ui5::icon{
                    "name"_prop = "group",
                    "slot"_prop = "avatar"
                }()
            ),
            ui5::list{
                "separators"_prop = "None",
                "style"_prop = "margin-block-end: 0.75rem;"
            }(
                ui5::li{
                    "image"_prop = "../assets/images/avatars/man_avatar_2.png",
                    "description"_prop = "Software Architect"
                }("Richard Wilson"),
                ui5::li{
                    "image"_prop = "../assets/images/avatars/woman_avatar_3.png",
                    "description"_prop = "Visual Designer"
                }("Elena Petrova"),
                ui5::li{
                    "image"_prop = "../assets/images/avatars/man_avatar_3.png",
                    "description"_prop = "Quality Specialist"
                }("John Miller")
            )
        ))
    );
    // clang-format on
}