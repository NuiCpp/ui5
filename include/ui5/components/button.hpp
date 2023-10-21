#pragma once
// clang-format off

#ifdef NUI_INLINE
// @inline(js, ui5-button)
import "@ui5/webcomponents/dist/Button.js";
// @endinline
#endif

// clang-format on

namespace ui5
{
    NUI_MAKE_HTML_ELEMENT_RENAME(button, "ui5-button")
}
