#pragma once

#include <nui/frontend/dom/element.hpp>

// clang-format off

#ifdef NUI_INLINE
// @inline(js, ui5-avatar)
js_import "@ui5/webcomponents/dist/Avatar.js";
// @endinline
#endif

// clang-format on

namespace ui5
{
    NUI_MAKE_HTML_ELEMENT_RENAME(avatar, "ui5-avatar")
}
