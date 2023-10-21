#pragma once
// clang-format off

#ifdef NUI_INLINE
// @inline(js, ui5-product-switch)
import "@ui5/webcomponents-fiori/dist/ProductSwitch.js";
import "@ui5/webcomponents-fiori/dist/ProductSwitchItem.js";
// @endinline
#endif

// clang-format on

namespace ui5
{
    NUI_MAKE_HTML_ELEMENT_RENAME(product_switch, "ui5-product-switch")
    NUI_MAKE_HTML_ELEMENT_RENAME(product_switch_item, "ui5-product-switch-item")
}
