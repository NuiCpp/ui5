#pragma once

#include <nui/frontend/dom/element.hpp>

// clang-format off

#ifdef NUI_INLINE
// @inline(js, ui5-color-palette-popover)
js_import "@ui5/webcomponents/dist/ColorPalettePopover.js";
// @endinline
#endif

// clang-format on

namespace ui5
{
    NUI_MAKE_HTML_ELEMENT_RENAME(color_palette_popover, "ui5-color-palette-popover")
}
