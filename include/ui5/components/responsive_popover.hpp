#pragma once

#include <nui/frontend/dom/element.hpp>

// clang-format off

#ifdef NUI_INLINE
// @inline(js, ui5-responsive-popover)
js_import "@ui5/webcomponents/dist/ResponsivePopover.js";
// @endinline
#endif

// clang-format on

namespace ui5
{
    NUI_MAKE_HTML_ELEMENT_RENAME(responsive_popover, "ui5-responsive-popover")
}
