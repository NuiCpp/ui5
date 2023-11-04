#pragma once

#include <nui/frontend/dom/element.hpp>

// clang-format off

#ifdef NUI_INLINE
// @inline(js, ui5-date-time-picker)
js_import "@ui5/webcomponents/dist/DateTimePicker.js";
// @endinline
#endif

// clang-format on

namespace ui5
{
    NUI_MAKE_HTML_ELEMENT_RENAME(datetime_picker, "ui5-datetime-picker")
}
