#pragma once
// clang-format off

#ifdef NUI_INLINE
// @inline(js, ui5-toast)
import "@ui5/webcomponents/dist/Toast.js";
// @endinline
#endif

// clang-format on

namespace ui5
{
    NUI_MAKE_HTML_ELEMENT_RENAME(toast, "ui5-toast")
}
