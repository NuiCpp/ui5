#pragma once

#include <nui/frontend/dom/element.hpp>

// clang-format off

#ifdef NUI_INLINE
// @inline(js, ui5-barcode-scanner-dialog)
js_import "@ui5/webcomponents-fiori/dist/BarcodeScannerDialog.js";
// @endinline
#endif

// clang-format on

namespace ui5
{
    NUI_MAKE_HTML_ELEMENT_RENAME(barcode_scanner_dialog, "ui5-barcode-scanner-dialog")
}
