#pragma once

#include <nui/frontend/dom/element.hpp>

// clang-format off

#ifdef NUI_INLINE
// @inline(js, ui5-illustrated-message)
js_import "@ui5/webcomponents-fiori/dist/IllustratedMessage.js";
// @endinline
#endif

// clang-format on

namespace ui5
{
    NUI_MAKE_HTML_ELEMENT_RENAME(illustrated_message, "ui5-illustrated-message")
}
