#pragma once

#include <nui/frontend/dom/element.hpp>

// clang-format off

#ifdef NUI_INLINE
// @inline(js, ui5-toolbar-button)
js_import "@ui5/webcomponents/dist/ToolbarButton.js";
// @endinline
#endif

// clang-format on

namespace ui5
{
    NUI_MAKE_HTML_ELEMENT_RENAME(toolbar_button, "ui5-toolbar-button")
}
