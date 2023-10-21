#pragma once
// clang-format off

#ifdef NUI_INLINE
// @inline(js, ui5-page)
import "@ui5/webcomponents-fiori/dist/Page.js";
// @endinline
#endif

// clang-format on

namespace ui5
{
    NUI_MAKE_HTML_ELEMENT_RENAME(page, "ui5-page")
}
