#pragma once

#include <nui/frontend/dom/element.hpp>

// clang-format off

#ifdef NUI_INLINE
// @inline(js, ui5-notification-list-item)
js_import "@ui5/webcomponents-fiori/dist/NotificationListItem.js";
// @endinline
#endif

// clang-format on

namespace ui5
{
    NUI_MAKE_HTML_ELEMENT_RENAME(li_notification, "ui5-li-notification")
}
