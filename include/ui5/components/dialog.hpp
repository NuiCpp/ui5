#pragma once
// clang-format off

#ifdef NUI_INLINE
// @inline(js, ui5-dialog)
import "@ui5/webcomponents/dist/Dialog.js";
// @endinline
#endif

// clang-format on

namespace ui5
{
    NUI_MAKE_HTML_ELEMENT_RENAME(dialog, "ui5-dialog")
}
