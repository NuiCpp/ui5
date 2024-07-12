#include <frontend/main_page.hpp>

#include <nui/frontend/api/console.hpp>
#include <nui/frontend/attributes.hpp>
#include <nui/frontend/elements.hpp>

// #include <ui5/assets/icons.hpp>

#ifdef NUI_INLINE
// @inline(js, ui5-example-app-icons)
js_import "@ui5/webcomponents-icons/dist/employee.js";
js_import "@ui5/webcomponents-icons/dist/upload.js";
js_import "@ui5/webcomponents-icons/dist/pending.js";
js_import "@ui5/webcomponents-icons/dist/copy.js";
js_import "@ui5/webcomponents-icons/dist/paste.js";
js_import "@ui5/webcomponents-icons/dist/group.js";
// @endinline
#endif

#include <ui5/components/avatar.hpp>
#include <ui5/components/avatar_group.hpp>
#include <ui5/components/badge.hpp>
#include <ui5/components/breadcrumbs.hpp>
#include <ui5/components/busy_indicator.hpp>
#include <ui5/components/button.hpp>
#include <ui5/components/card.hpp>
#include <ui5/components/icon.hpp>
#include <ui5/components/calendar.hpp>
#include <ui5/components/carousel.hpp>
#include <ui5/components/check_box.hpp>
#include <ui5/components/color_palette.hpp>
#include <ui5/components/color_palette_popover.hpp>
#include <ui5/components/color_picker.hpp>
#include <ui5/components/combo_box.hpp>
#include <ui5/components/date_picker.hpp>
#include <ui5/components/date_range_picker.hpp>
#include <ui5/components/date_time_picker.hpp>
#include <ui5/components/dialog.hpp>
#include <ui5/components/file_uploader.hpp>
#include <ui5/components/input.hpp>
#include <ui5/components/label.hpp>
#include <ui5/components/link.hpp>
#include <ui5/components/list.hpp>
#include <ui5/components/menu.hpp>
#include <ui5/components/message_strip.hpp>
#include <ui5/components/multi_combo_box.hpp>
#include <ui5/components/multi_input.hpp>
#include <ui5/components/panel.hpp>
#include <ui5/components/title.hpp>
#include <ui5/components/popover.hpp>
#include <ui5/components/progress_indicator.hpp>
#include <ui5/components/radio_button.hpp>
#include <ui5/components/range_slider.hpp>
#include <ui5/components/rating_indicator.hpp>
#include <ui5/components/responsive_popover.hpp>
#include <ui5/components/segmented_button.hpp>
#include <ui5/components/select.hpp>
#include <ui5/components/slider.hpp>
#include <ui5/components/split_button.hpp>
#include <ui5/components/step_input.hpp>
#include <ui5/components/switch.hpp>
#include <ui5/components/tab_container.hpp>
#include <ui5/components/table.hpp>
#include <ui5/components/text_area.hpp>
#include <ui5/components/time_picker.hpp>
#include <ui5/components/toast.hpp>
#include <ui5/components/toggle_button.hpp>
#include <ui5/components/toolbar.hpp>
#include <ui5/components/toolbar_button.hpp>
#include <ui5/components/toolbar_select.hpp>
#include <ui5/components/toolbar_select_option.hpp>
#include <ui5/components/toolbar_separator.hpp>
#include <ui5/components/toolbar_spacer.hpp>
#include <ui5/components/tree.hpp>

struct MainPage::Implementation
{
    std::weak_ptr<Nui::Dom::BasicElement> palette;
    std::weak_ptr<Nui::Dom::BasicElement> paletteButton;
    std::weak_ptr<Nui::Dom::BasicElement> dialog;
    std::weak_ptr<Nui::Dom::BasicElement> menu;
    std::weak_ptr<Nui::Dom::BasicElement> menuButton;
    std::weak_ptr<Nui::Dom::BasicElement> popover;
    std::weak_ptr<Nui::Dom::BasicElement> popoverButton;
    std::weak_ptr<Nui::Dom::BasicElement> responsivePopover;
    std::weak_ptr<Nui::Dom::BasicElement> responsivePopoverButton;
    std::weak_ptr<Nui::Dom::BasicElement> toast;
};

Nui::ElementRenderer decoWrap(std::string const& caption, Nui::ElementRenderer renderer);

MainPage::MainPage()
    : impl_{std::make_unique<Implementation>()}
{}
MainPage::~MainPage() = default;
MainPage::MainPage(MainPage&&) = default;
MainPage& MainPage::operator=(MainPage&&) = default;

Nui::ElementRenderer MainPage::render()
{
    using namespace Nui;
    using namespace Nui::Elements;
    using namespace Nui::Attributes;
    using Nui::Elements::div; // because of the global div.
    using Nui::Elements::span;

    using namespace Nui::Attributes::Literals;

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
                    "image"_prop = "nui://app.example/ava_1.jpg",
                    "description"_prop = "Software Architect"
                }("Richard Example"),
                ui5::li{
                    "image"_prop = "nui://app.example/ava_2.jpg",
                    "description"_prop = "Visual Designer"
                }("George Nonexist"),
                ui5::li{
                    "image"_prop = "nui://app.example/ava_3.jpg",
                    "description"_prop = "Quality Specialist"
                }("Hanna Nobody")
            )
        )),
        decoWrap("ui5-calendar", ui5::calendar{}()),
        decoWrap("ui5-carousel", ui5::carousel{
            "cyclic"_prop = true
        }(
            img{src = "nui://app.example/ava_1.jpg"}(),
            img{src = "nui://app.example/ava_2.jpg"}(),
            img{src = "nui://app.example/ava_3.jpg"}()
        )),
        decoWrap("ui5-checkbox", ui5::checkbox{
            "text"_prop = "Checkbox",
            "checked"_prop = true,
            "change"_event = [](auto&&) {
                Nui::Console::log("Checkbox changed");
            }
        }()),
        decoWrap("ui5-color-palette", ui5::color_palette{}(
            ui5::color_palette_item{"value"_prop = "darkblue"}(),
            ui5::color_palette_item{"value"_prop = "blue"}(),
            ui5::color_palette_item{"value"_prop = "lightblue"}(),
            ui5::color_palette_item{"value"_prop = "green"}(),
            ui5::color_palette_item{"value"_prop = "yellow"}(),
            ui5::color_palette_item{"value"_prop = "orange"}(),
            ui5::color_palette_item{"value"_prop = "red"}(),
            ui5::color_palette_item{"value"_prop = "pink"}(),
            ui5::color_palette_item{"value"_prop = "purple"}(),
            ui5::color_palette_item{"value"_prop = "#ff6699"}()
        )),
        decoWrap("ui5-color-palette-popover", div{}(
            ui5::button{
                reference = impl_->paletteButton,
                "click"_event = [this](auto&&) {
                    auto btn = impl_->paletteButton.lock();
                    auto palette = impl_->palette.lock();
                    if (btn && palette) {
                        palette->val().call<void>("showAt", btn->val());
                    }
                }
            }("Open Color Palette"),
            ui5::color_palette_popover{
                reference = impl_->palette,
            }(
                ui5::color_palette_item{"value"_prop = "darkblue"}(),
                ui5::color_palette_item{"value"_prop = "blue"}(),
                ui5::color_palette_item{"value"_prop = "lightblue"}(),
                ui5::color_palette_item{"value"_prop = "green"}(),
                ui5::color_palette_item{"value"_prop = "yellow"}(),
                ui5::color_palette_item{"value"_prop = "orange"}(),
                ui5::color_palette_item{"value"_prop = "red"}(),
                ui5::color_palette_item{"value"_prop = "pink"}(),
                ui5::color_palette_item{"value"_prop = "purple"}(),
                ui5::color_palette_item{"value"_prop = "#ff6699"}()
            )
        )),
        decoWrap("ui5-color-picker", ui5::color_picker{
            "color"_prop = "rgba(220, 208, 255, 1)",
        }()),
        decoWrap("ui5-combo-box", ui5::combobox{
            "placeholder"_prop = "Select a Fruit",
        }(
            ui5::cb_item{
                "text"_prop = "Apple",
            }(),
            ui5::cb_item{
                "text"_prop = "Banana",
            }(),
            ui5::cb_item{
                "text"_prop = "Pineapple",
            }()
        )),
        decoWrap("ui5-date-picker", ui5::date_picker{
            "format_pattern"_prop = "yyyy-MM-dd",
            "value"_prop = "2020-01-01",
            "change"_event = [](auto&& event) {
                Nui::Console::log("Date changed", event["detail"]["value"].template as<std::string>());
            }
        }()),
        decoWrap("ui5-date-range-picker", ui5::daterange_picker{
            "format_pattern"_prop = "yyyy-MM-dd",
            "value"_prop = "2020-01-01 - 2020-01-31",
            "change"_event = [](auto&& event) {
                Nui::Console::log("Date range changed", event["detail"]["value"].template as<std::string>());
            }
        }()),
        decoWrap("ui5-date-time-picker", ui5::datetime_picker{
            "change"_event = [](auto&& event) {
                Nui::Console::log("Date time changed", event["detail"]["value"].template as<std::string>());
            }
        }()),
        decoWrap("ui5-dialog", div{}(
            ui5::button{
                "click"_event = [this](auto&&) {
                    auto dialog = impl_->dialog.lock();
                    if (dialog) {
                        dialog->val().set("open", true);
                    }
                }
            }("Open Dialog"),
            ui5::dialog{
                reference = impl_->dialog,
                "header_text"_prop = "Dialog Header",
                "stretch"_prop = true,
                "after_close"_event = [](auto&&) {
                    Nui::Console::log("Dialog closed");
                }
            }(
                ui5::button{
                    "slot"_prop = "footer",
                    "design"_prop = "Emphasized",
                    "click"_event = [this](auto&&) {
                        auto dialog = impl_->dialog.lock();
                        if (dialog) {
                            dialog->val().set("open", false);
                        }
                    }
                }("OK")
            )
        )),
        decoWrap("ui5-file-uploader", ui5::file_uploader{
            "change"_event = [](auto&& event) {
                Nui::Console::log("File changed", event["detail"]["files"]);
            }
        }(
            ui5::button{
                "icon"_prop = "upload",
            }("Upload Single File")
        )),
        decoWrap("ui5-input", ui5::input{
            "placeholder"_prop = "Enter your name",
            "change"_event = [](auto&& event) {
                Nui::Console::log("Input changed", event);
            }
        }()),
        decoWrap("ui5-label", div{}(
            ui5::label{"for"_prop = "myInput"}("Label"),
            ui5::input{"id"_prop = "myInput"}()
        )),
        decoWrap("ui5-link", ui5::link{
            "href"_prop = "https://sap.github.io/ui5-webcomponents/playground",
            "target"_prop = "_blank"
        }("Link")),
        decoWrap("ui5-list", ui5::list{}(
            ui5::li{}("Item 1"),
            ui5::li{}("Item 2"),
            ui5::li{}("Item 3")
        )),
        decoWrap("ui5-menu", div{}(
            ui5::button{
                "icon"_prop = "employee",
                reference = impl_->menuButton,
                "click"_event = [this](auto&&) {
                    auto menu = impl_->menu.lock();
                    auto btn = impl_->menuButton.lock();
                    if (menu && btn) {
                        menu->val().call<void>("showAt", btn->val());
                    }
                }
            }("Open Menu"),
            ui5::menu{
                reference = impl_->menu,
            }(
                ui5::menu_item{
                    "icon"_prop = "employee",
                    "text"_prop = "Employee"
                }(),
                ui5::menu_item{
                    "icon"_prop = "group",
                    "text"_prop = "Group"
                }(),
                ui5::menu_item{
                    "icon"_prop = "upload",
                    "text"_prop = "Upload"
                }()
            )
        )),
        decoWrap("ui5-message-strip", ui5::message_strip{
            "type"_prop = "Information",
            "no_close_button"_prop = true
        }(
            "Message Strip"
        )),
        decoWrap("ui5-multi-combo-box", ui5::multi_combobox{
            "placeholder"_prop = "Select a Fruit",
        }(
            ui5::mcb_item{
                "text"_prop = "Apple",
            }(),
            ui5::mcb_item{
                "text"_prop = "Banana",
            }(),
            ui5::mcb_item{
                "text"_prop = "Pineapple",
            }()
        )),
        decoWrap("ui5-multi-input", ui5::multi_input{
            "value"_prop = "Bla",
        }()),
        decoWrap("ui5-panel", ui5::panel{
            "header_text"_prop = "Panel Header",
        }(
            ui5::title {
                "level"_prop = "H1"
            }("Panel Header"),
            p{}("Panel Content")
        )),
        decoWrap("ui5-popover", div{}(
            ui5::button{
                reference = impl_->popoverButton,
                "click"_event = [this](auto&&) {
                    auto popover = impl_->popover.lock();
                    auto btn = impl_->popoverButton.lock();
                    if (popover && btn) {
                        popover->val().call<void>("showAt", btn->val());
                    }
                }
            }("Open Popover"),
            ui5::popover{
                reference = impl_->popover,
                "header_text"_prop = "Popover Header",
                "placement_type"_prop = "Bottom",
                "after_close"_event = [](auto&&) {
                    Nui::Console::log("Popover closed");
                }
            }(
                div{}("Popover Content"),
                ui5::button{
                    "design"_prop = "Emphasized",
                    "click"_event = [this](auto&&) {
                        auto popover = impl_->popover.lock();
                        if (popover) {
                            popover->val().call<void>("close");
                        }
                    }
                }("OK")
            )
        )),
        decoWrap("ui5-progress-indicator", ui5::progress_indicator{
            "value"_prop = 50,
            "display_value"_prop = "50%"
        }()),
        decoWrap("ui5-radio-button", div{}(
            ui5::radio_button{
                "text"_prop = "Radio Button 1",
                "name"_prop = "groupA"
            }(),
            ui5::radio_button{
                "text"_prop = "Radio Button 2",
                "name"_prop = "groupA"
            }()
        )),
        decoWrap("ui5-range-slider", ui5::range_slider{
            "min"_prop = 0,
            "max"_prop = 100,
            "start_value"_prop = 0,
            "end_value"_prop = 20,
            "step"_prop = 5,
            "label_interval"_prop = 0,
        }()),
        decoWrap("ui5-rating-indicator", ui5::rating_indicator{
            "value"_prop = 3.5,
        }()),
        decoWrap("ui5-responsive-popover", div{}(
            ui5::button{
                reference = impl_->responsivePopoverButton,
                "click"_event = [this](auto&&) {
                    auto popover = impl_->responsivePopover.lock();
                    auto btn = impl_->responsivePopoverButton.lock();
                    if (popover && btn) {
                        popover->val().call<void>("showAt", btn->val());
                    }
                }
            }("Open Responsive Popover"),
            ui5::responsive_popover{
                reference = impl_->responsivePopover,
                "header_text"_prop = "Responsive Popover Header",
                "placement_type"_prop = "Bottom",
                "after_close"_event = [](auto&&) {
                    Nui::Console::log("Responsive Popover closed");
                }
            }(
                div{}("Responsive Popover Content"),
                ui5::button{
                    "design"_prop = "Emphasized",
                    "click"_event = [this](auto&&) {
                        auto popover = impl_->responsivePopover.lock();
                        if (popover) {
                            popover->val().call<void>("close");
                        }
                    }
                }("OK")
            )
        )),
        decoWrap("ui5-segmented-button", ui5::segmented_button{}(
            ui5::segmented_button_item{}("Item 1"),
            ui5::segmented_button_item{}("Item 2"),
            ui5::segmented_button_item{}("Item 3")
        )),
        decoWrap("ui5-select", ui5::select{}(
            ui5::option{
                "icon"_prop = "employee"
            }("Item 1"),
            ui5::option{
                "icon"_prop = "group"
            }("Item 2"),
            ui5::option{
                "icon"_prop = "upload"
            }("Item 3")
        )),
        decoWrap("ui5-slider", ui5::slider{
            "min"_prop = 0,
            "max"_prop = 100,
            "value"_prop = 50,
            "step"_prop = 5,
            "label_interval"_prop = 0,
        }()),
        decoWrap("ui5-split-button", ui5::split_button{}(
            "Default"
        )),
        decoWrap("ui5-step-input", ui5::step_input{
            "value"_prop = 5,
        }()),
        decoWrap("ui5-switch", ui5::switch_{}()),
        decoWrap("ui5-tabcontainer", ui5::tabcontainer{}(
            ui5::tab{"icon"_prop = "employee"}(ui5::label{}("Tab 1")),
            ui5::tab{"icon"_prop = "employee"}(ui5::label{}("Tab 2")),
            ui5::tab{"icon"_prop = "employee"}(ui5::label{}("Tab 3"))
        )),
        decoWrap("ui5-table", ui5::table{}(
            ui5::table_row{}(
                ui5::table_cell{}(span{}("Notebook Basic 15")),
                ui5::table_cell{}(span{}("Very Best Screens")),
                ui5::table_cell{}(span{}("30 x 19 x 3cm")),
                ui5::table_cell{}(span{style = "color: #2b7c2b"}(b{style = "padding-right: 0.125rem"}("4.2"), text{"KG"}())),
                ui5::table_cell{}(span{}(b{style = "padding-right: 0.125rem"}("956"), text{"EUR"}()))
            ),
            ui5::table_column{
                "slot"_prop = "columns"
            }("Product"),
            ui5::table_column{
                "slot"_prop = "columns",
                "min_width"_prop = "400"
            }("Supplier"),
            ui5::table_column{
                "slot"_prop = "columns",
                "min_width"_prop = "400"
            }("Dimensions"),
            ui5::table_column{
                "slot"_prop = "columns",
                "min_width"_prop = "400"
            }("Weight"),
            ui5::table_column{}("Price")
        )),
        decoWrap("ui5-text-area", ui5::textarea{
            "placeholder"_prop = "Enter your comment here",
        }()),
        decoWrap("ui5-time-picker", ui5::time_picker{}()),
        decoWrap("ui5-toast", div{}(
            ui5::button{
                "click"_event = [this](auto&&) {
                    auto toast = impl_->toast.lock();
                    if (toast) {
                        toast->val().call<void>("show");
                    }
                }
            }("Open Toast"),
            ui5::toast{
                reference = impl_->toast,
                "placement_type"_prop = "Vertical",
                "duration"_prop = 3000,
            }("Toast Content")
        )),
        decoWrap("ui5-toggle-button", ui5::toggle_button{}(
            "Default"
        )),
        decoWrap("ui5-toolbar", ui5::toolbar{}(
            ui5::toolbar_button{"text"_prop = "Button 1"}(),
            ui5::toolbar_separator{}(),
            ui5::toolbar_select{}(
                ui5::toolbar_select_option{}("Option 1"),
                ui5::toolbar_select_option{}("Option 2")
            ),
            ui5::toolbar_spacer{}()
        )),
        decoWrap("ui5-tree", ui5::tree{}(
            ui5::tree_item{
                "expanded"_prop = true,
                "text"_prop = "Tree 1",
                "icon"_prop = "paste",
                "selected"_prop = true
            }(
                ui5::tree_item{
                    "expanded"_prop = true,
                    "text"_prop = "Tree 1.1",
                    "selected"_prop = true
                }(
                    ui5::tree_item{
                        "text"_prop = "Tree 1.1.1"
                    }(),
                    ui5::tree_item{
                        "text"_prop = "Tree 1.1.2"
                    }()
                )
            ),
            ui5::tree_item{
                "text"_prop = "Tree 2",
                "icon"_prop = "copy"
            }(
                ui5::tree_item{
                    "text"_prop = "Tree 2.1"
                }(
                    ui5::tree_item{
                        "text"_prop = "Tree 2.1.1"
                    }(),
                    ui5::tree_item{
                        "text"_prop = "Tree 2.1.2"
                    }(
                        ui5::tree_item{
                            "text"_prop = "Tree 2.1.2.1"
                        }(),
                        ui5::tree_item{
                            "text"_prop = "Tree 2.1.2.2"
                        }(),
                        ui5::tree_item{
                            "text"_prop = "Tree 2.1.2.3"
                        }(),
                        ui5::tree_item{
                            "text"_prop = "Tree 2.1.2.5"
                        }()
                    )
                ),
                ui5::tree_item{
                    "text"_prop = "Tree 2.2"
                }()
            ),
            ui5::tree_item{
                "expanded"_prop = true,
                "text"_prop = "Tree 3 (no icon)"
            }()
        ))
    );
    // clang-format on
}

Nui::ElementRenderer decoWrap(std::string const& caption, Nui::ElementRenderer renderer)
{
    using namespace Nui;
    using namespace Nui::Elements;
    using namespace Nui::Attributes;
    using Nui::Attributes::style;
    using Nui::Elements::div;

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