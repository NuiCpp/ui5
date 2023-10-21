#pragma once

#include <nui/frontend/dom/element.hpp>

// clang-format off

#ifdef NUI_INLINE
// @inline(js, ui5-side-navigation)
import "@ui5/webcomponents-fiori/dist/SideNavigation.js";
import "@ui5/webcomponents-fiori/dist/SideNavigationItem.js";
import "@ui5/webcomponents-fiori/dist/SideNavigationSubItem.js";
// @endinline
#endif

// clang-format on

namespace ui5
{
    NUI_MAKE_HTML_ELEMENT_RENAME(side_navigation, "ui5-side-navigation")
    NUI_MAKE_HTML_ELEMENT_RENAME(side_navigation_item, "ui5-side-navigation-item")
    NUI_MAKE_HTML_ELEMENT_RENAME(side_navigation_sub_item, "ui5-side-navigation-sub-item")
}
