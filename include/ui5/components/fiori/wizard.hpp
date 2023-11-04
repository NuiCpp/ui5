#pragma once

#include <nui/frontend/dom/element.hpp>

// clang-format off

#ifdef NUI_INLINE
// @inline(js, ui5-wizard)
js_import "@ui5/webcomponents-fiori/dist/Wizard.js";
// @endinline
#endif

// clang-format on

namespace ui5
{
    NUI_MAKE_HTML_ELEMENT_RENAME(wizard, "ui5-wizard")
    NUI_MAKE_HTML_ELEMENT_RENAME(wizard_step, "ui5-wizard-step")
}
