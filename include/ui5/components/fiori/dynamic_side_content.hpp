#pragma once

#include <nui/frontend/dom/element.hpp>

// clang-format off

#ifdef NUI_INLINE
// @inline(js, ui5-dynamic-side-content)
import "@ui5/webcomponents-fiori/dist/DynamicSideContent.js";
// @endinline
#endif

// clang-format on

namespace ui5
{
    NUI_MAKE_HTML_ELEMENT_RENAME(dynamic_side_content, "ui5-dynamic-side-content")
}
