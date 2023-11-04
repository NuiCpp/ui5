#pragma once

#include <nui/frontend/dom/element.hpp>

// clang-format off

#ifdef NUI_INLINE
// @inline(js, ui5-toggle-button)
js_import "@ui5/webcomponents/dist/ToggleButton.js";
// @endinline
#endif

// clang-format on

namespace ui5
{
    NUI_MAKE_HTML_ELEMENT_RENAME(toggle_button, "ui5-toggle-button")
}
