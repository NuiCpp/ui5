#pragma once

#include <nui/frontend/dom/element.hpp>

// clang-format off

#ifdef NUI_INLINE
// @inline(js, ui5-tree)
js_import "@ui5/webcomponents/dist/Tree.js";
js_import "@ui5/webcomponents/dist/TreeItem.js";
// @endinline
#endif

// clang-format on

namespace ui5
{
    NUI_MAKE_HTML_ELEMENT_RENAME(tree, "ui5-tree")
    NUI_MAKE_HTML_ELEMENT_RENAME(tree_item, "ui5-tree-item")
}
