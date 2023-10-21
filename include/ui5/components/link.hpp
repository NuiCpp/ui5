#pragma once
// clang-format off

#ifdef NUI_INLINE
// @inline(js, ui5-link)
import "@ui5/webcomponents/dist/Link.js";
// @endinline
#endif

// clang-format on

namespace ui5
{
    NUI_MAKE_HTML_ELEMENT_RENAME(link, "ui5-link")
}
