#pragma once

#include <nui/frontend/dom/element.hpp>

// clang-format off

#ifdef NUI_INLINE
// @inline(js, ui5-media-gallery)
import "@ui5/webcomponents-fiori/dist/MediaGallery.js";
import "@ui5/webcomponents-fiori/dist/MediaGalleryItem.js";
// @endinline
#endif

// clang-format on

namespace ui5
{
    NUI_MAKE_HTML_ELEMENT_RENAME(media_gallery, "ui5-media-gallery")
    NUI_MAKE_HTML_ELEMENT_RENAME(media_gallery_item, "ui5-media-gallery-item")
}
