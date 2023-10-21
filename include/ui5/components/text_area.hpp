#pragma once
// clang-format off

#ifdef NUI_INLINE
// @inline(js, ui5-text-area)
import "@ui5/webcomponents/dist/TextArea.js";
// @endinline
#endif

// clang-format on

namespace ui5
{
    NUI_MAKE_HTML_ELEMENT_RENAME(textarea, "ui5-textarea")
}
