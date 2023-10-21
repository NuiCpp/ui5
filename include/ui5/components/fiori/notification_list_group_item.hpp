#pragma once
// clang-format off

#ifdef NUI_INLINE
// @inline(js, ui5-notification-list-group-item)
import "@ui5/webcomponents-fiori/dist/NotificationListGroupItem.js";
import "@ui5/webcomponents-fiori/dist/NotificationAction.js";
// @endinline
#endif

// clang-format on

namespace ui5
{
    NUI_MAKE_HTML_ELEMENT_RENAME(li_notification_group, "ui5-li-notification-group")
    NUI_MAKE_HTML_ELEMENT_RENAME(notification_section, "ui5-notification-section")
}
