#pragma once

#include <nui/frontend/dom/element.hpp>

// clang-format off

#ifdef NUI_INLINE
// @inline(js, ui5-color-palette)
js_import "@ui5/webcomponents/dist/ColorPalette.js";
// @endinline
#endif

// clang-format on

namespace ui5
{
    NUI_MAKE_HTML_ELEMENT_RENAME(color_palette, "ui5-color-palette")
    NUI_MAKE_HTML_ELEMENT_RENAME(color_palette_item, "ui5-color-palette-item")
}
