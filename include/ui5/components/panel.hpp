#pragma once
// clang-format off

#ifdef NUI_INLINE
// @inline(js, ui5-panel)
import "@ui5/webcomponents/dist/Panel.js";
// @endinline
#endif

// clang-format on

namespace ui5
{
    NUI_MAKE_HTML_ELEMENT_RENAME(panel, "ui5-panel")
}
