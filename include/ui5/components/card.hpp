#pragma once

#include <nui/frontend/dom/element.hpp>

// clang-format off

#ifdef NUI_INLINE
// @inline(js, ui5-card)
js_import "@ui5/webcomponents/dist/Card.js";
js_import "@ui5/webcomponents/dist/CardHeader.js";
// @endinline
#endif

// clang-format on

namespace ui5
{
    NUI_MAKE_HTML_ELEMENT_RENAME(card, "ui5-card")
    NUI_MAKE_HTML_ELEMENT_RENAME(card_header, "ui5-card-header")
}
