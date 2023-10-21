#pragma once
// clang-format off

#ifdef NUI_INLINE
// @inline(js, ui5-table)
import "@ui5/webcomponents/dist/Table.js";
import "@ui5/webcomponents/dist/TableColumn.js";
import "@ui5/webcomponents/dist/TableRow.js";
import "@ui5/webcomponents/dist/TableCell.js";
// @endinline
#endif

// clang-format on

namespace ui5
{
    NUI_MAKE_HTML_ELEMENT_RENAME(table, "ui5-table")
    NUI_MAKE_HTML_ELEMENT_RENAME(table_column, "ui5-table-column")
    NUI_MAKE_HTML_ELEMENT_RENAME(table_row, "ui5-table-row")
    NUI_MAKE_HTML_ELEMENT_RENAME(table_cell, "ui5-table-cell")
    NUI_MAKE_HTML_ELEMENT_RENAME(table_group_row, "ui5-table-group-row")
}
