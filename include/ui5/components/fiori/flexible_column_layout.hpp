#pragma once

#include <nui/frontend/dom/element.hpp>

// clang-format off

#ifdef NUI_INLINE
// @inline(js, ui5-flexible-column-layout)
js_import "@ui5/webcomponents-fiori/dist/FlexibleColumnLayout.js";
// @endinline
#endif

// clang-format on

namespace ui5
{
    NUI_MAKE_HTML_ELEMENT_RENAME(flexible_column_layout, "ui5-flexible-column-layout")
}
