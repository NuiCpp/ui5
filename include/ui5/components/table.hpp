#pragma once

#include <nui/frontend/dom/element.hpp>

// clang-format off

#ifdef NUI_INLINE
// @inline(js, ui5-table)
js_import "@ui5/webcomponents/dist/Table.js";
js_import "@ui5/webcomponents/dist/TableRow.js";
js_import "@ui5/webcomponents/dist/TableCell.js";
js_import "@ui5/webcomponents/dist/TableHeaderRow.js";
js_import "@ui5/webcomponents/dist/TableHeaderCell.js";
js_import "@ui5/webcomponents/dist/TableGrowing.js";
js_import "@ui5/webcomponents/dist/TableHeaderCellActionAI.js";
js_import "@ui5/webcomponents/dist/TableRowAction.js";
js_import "@ui5/webcomponents/dist/TableRowActionNavigation.js";
js_import "@ui5/webcomponents/dist/TableSelectionMulti.js";
js_import "@ui5/webcomponents/dist/TableSelectionSingle.js";
js_import "@ui5/webcomponents/dist/TableVirtualizer.js";
// @endinline
#endif

// clang-format on

namespace ui5
{
    NUI_MAKE_HTML_ELEMENT_RENAME(table, "ui5-table")
    NUI_MAKE_HTML_ELEMENT_RENAME(table_row, "ui5-table-row")
    NUI_MAKE_HTML_ELEMENT_RENAME(table_cell, "ui5-table-cell")
    NUI_MAKE_HTML_ELEMENT_RENAME(table_header_row, "ui5-table-header-row")
    NUI_MAKE_HTML_ELEMENT_RENAME(table_header_cell, "ui5-table-header-cell")
    NUI_MAKE_HTML_ELEMENT_RENAME(table_growing, "ui5-table-growing")
    NUI_MAKE_HTML_ELEMENT_RENAME(table_header_cell_action_ai, "ui5-table-header-cell-action-ai")
    NUI_MAKE_HTML_ELEMENT_RENAME(table_row_action, "ui5-table-row-action")
    NUI_MAKE_HTML_ELEMENT_RENAME(table_row_action_navigation, "ui5-table-row-action-navigation")
    NUI_MAKE_HTML_ELEMENT_RENAME(table_selection_multi, "ui5-table-selection-multi")
    NUI_MAKE_HTML_ELEMENT_RENAME(table_selection_single, "ui5-table-selection-single")
    NUI_MAKE_HTML_ELEMENT_RENAME(table_virtualizer, "ui5-table-virtualizer")
}
