#pragma once
// clang-format off

#ifdef NUI_INLINE
// @inline(js, ui5-select)
import "@ui5/webcomponents/dist/Select.js";
// @endinline
#endif

// clang-format on

namespace ui5
{
    NUI_MAKE_HTML_ELEMENT_RENAME(select, "ui5-select")
    NUI_MAKE_HTML_ELEMENT_RENAME(option, "ui5-option")
    NUI_MAKE_HTML_ELEMENT_RENAME(select_menu, "ui5-select-menu")
    NUI_MAKE_HTML_ELEMENT_RENAME(select_menu_option, "ui5-select-menu-option")
}
