#pragma once

#include <nui/frontend/dom/element.hpp>

// clang-format off

#ifdef NUI_INLINE
// @inline(js, ui5-upload-collection)
js_import "@ui5/webcomponents-fiori/dist/UploadCollection.js";
js_import "@ui5/webcomponents-fiori/dist/UploadCollectionItem.js";
// @endinline
#endif

// clang-format on

namespace ui5
{
    NUI_MAKE_HTML_ELEMENT_RENAME(upload_collection, "ui5-upload-collection")
    NUI_MAKE_HTML_ELEMENT_RENAME(upload_collection_item, "ui5-upload-collection-item")
}
