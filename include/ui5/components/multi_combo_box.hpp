#pragma once

#include <nui/frontend/dom/element.hpp>

// clang-format off

#ifdef NUI_INLINE
// @inline(js, ui5-multi-combo-box)
js_import "@ui5/webcomponents/dist/MultiComboBox.js";
js_import "@ui5/webcomponents/dist/MultiComboBoxItem.js";
js_import "@ui5/webcomponents/dist/MultiComboBoxGroupItem.js";
// @endinline
#endif

// clang-format on

namespace ui5
{
    NUI_MAKE_HTML_ELEMENT_RENAME(multi_combobox, "ui5-multi-combobox")
    NUI_MAKE_HTML_ELEMENT_RENAME(mcb_item, "ui5-mcb-item")
    NUI_MAKE_HTML_ELEMENT_RENAME(mcb_group_item, "ui5-mcb-group-item")
}
