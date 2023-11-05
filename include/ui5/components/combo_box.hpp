#pragma once

#include <nui/frontend/dom/element.hpp>

// clang-format off

#ifdef NUI_INLINE
// @inline(js, ui5-combo-box)
js_import "@ui5/webcomponents/dist/ComboBox.js";
// @endinline
#endif

// clang-format on

namespace ui5
{
    NUI_MAKE_HTML_ELEMENT_RENAME(combobox, "ui5-combobox")
    NUI_MAKE_HTML_ELEMENT_RENAME(cb_item, "ui5-cb-item")
}
