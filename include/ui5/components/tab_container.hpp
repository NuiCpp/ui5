#pragma once

#include <nui/frontend/dom/element.hpp>

// clang-format off

#ifdef NUI_INLINE
// @inline(js, ui5-tab-container)
import "@ui5/webcomponents/dist/TabContainer.js";
import "@ui5/webcomponents/dist/Tab.js";
import "@ui5/webcomponents/dist/TabSeparator.js";
// @endinline
#endif

// clang-format on

namespace ui5
{
    NUI_MAKE_HTML_ELEMENT_RENAME(tabcontainer, "ui5-tabcontainer")
    NUI_MAKE_HTML_ELEMENT_RENAME(tab, "ui5-tab")
    NUI_MAKE_HTML_ELEMENT_RENAME(tab_separator, "ui5-tab-separator")
}
