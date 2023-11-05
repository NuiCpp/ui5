#pragma once

#include <nui/frontend/dom/element.hpp>

// clang-format off

#ifdef NUI_INLINE
// @inline(js, ui5-toolbar)
js_import "@ui5/webcomponents/dist/Toolbar.js";
js_import "@ui5/webcomponents/dist/ToolbarButton.js";
js_import "@ui5/webcomponents/dist/ToolbarSelect.js";
js_import "@ui5/webcomponents/dist/ToolbarSeparator.js";
js_import "@ui5/webcomponents/dist/ToolbarSpacer.js";
// @endinline
#endif

// clang-format on

namespace ui5
{
    NUI_MAKE_HTML_ELEMENT_RENAME(toolbar, "ui5-toolbar")
    NUI_MAKE_HTML_ELEMENT_RENAME(toolbar_button, "ui5-toolbar-button")
    NUI_MAKE_HTML_ELEMENT_RENAME(toolbar_select, "ui5-toolbar-select")
    NUI_MAKE_HTML_ELEMENT_RENAME(toolbar_select_option, "ui5-toolbar-select-option")
    NUI_MAKE_HTML_ELEMENT_RENAME(toolbar_separator, "ui5-toolbar-separator")
    NUI_MAKE_HTML_ELEMENT_RENAME(toolbar_spacer, "ui5-toolbar-spacer")
}
