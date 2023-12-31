#pragma once

#include <nui/frontend/dom/element.hpp>

// clang-format off

#ifdef NUI_INLINE
// @inline(js, ui5-rating-indicator)
js_import "@ui5/webcomponents/dist/RatingIndicator.js";
// @endinline
#endif

// clang-format on

namespace ui5
{
    NUI_MAKE_HTML_ELEMENT_RENAME(rating_indicator, "ui5-rating-indicator")
}
