#pragma once

#include <nui/frontend/dom/element.hpp>

// clang-format off

#ifdef NUI_INLINE
// @inline(js, ui5-multi-combo-box)
js_import "@ui5/webcomponents/dist/MultiComboBox.js";
// @endinline
#endif

// clang-format on

namespace ui5
{
    NUI_MAKE_HTML_ELEMENT_RENAME(multi_combobox, "ui5-multi-combobox")
}
