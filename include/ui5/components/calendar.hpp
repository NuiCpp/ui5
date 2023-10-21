#pragma once

#include <nui/frontend/dom/element.hpp>

// clang-format off

#ifdef NUI_INLINE
// @inline(js, ui5-calendar)
import "@ui5/webcomponents/dist/Calendar.js";
import "@ui5/webcomponents/dist/CalendarHeader.js";
import "@ui5/webcomponents/dist/CalendarDate.js";
import "@ui5/webcomponents/dist/CalendarPart.js";
// @endinline
#endif

// clang-format on

namespace ui5
{
    NUI_MAKE_HTML_ELEMENT_RENAME(calendar, "ui5-calendar")
    NUI_MAKE_HTML_ELEMENT_RENAME(date, "ui5-date")
    NUI_MAKE_HTML_ELEMENT_RENAME(calendar_header, "ui5-calendar-header")
    NUI_MAKE_HTML_ELEMENT_RENAME(calendar_part, "ui5-calendar-part")
}
