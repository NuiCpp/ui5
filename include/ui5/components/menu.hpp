#pragma once

#include <nui/frontend/dom/element.hpp>

// clang-format off

#ifdef NUI_INLINE
// @inline(js, ui5-menu)
import "@ui5/webcomponents/dist/Menu.js";
// @endinline
#endif

// clang-format on

namespace ui5
{
    NUI_MAKE_HTML_ELEMENT_RENAME(menu, "ui5-menu")
    NUI_MAKE_HTML_ELEMENT_RENAME(menu_item, "ui5-menu-item")
}
