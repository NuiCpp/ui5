#pragma once

#include <nui/frontend/dom/element.hpp>

// clang-format off

#ifdef NUI_INLINE
// @inline(js, ui5-progress-indicator)
js_import "@ui5/webcomponents/dist/ProgressIndicator.js";
// @endinline
#endif

// clang-format on

namespace ui5
{
    NUI_MAKE_HTML_ELEMENT_RENAME(progress_indicator, "ui5-progress-indicator")
}
