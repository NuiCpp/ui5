/*
    {
        name: 'X',
        imports: [] or undefined,
        component: 'x' or undefined
    }
*/

export const allUi5Components = [
    {
        name: 'Avatar'
    },
    {
        name: 'AvatarGroup'
    },
    {
        name: 'Badge'
    },
    {
        name: 'Breadcrumbs',
        components: ['breadcrumbs', 'breadcrumbs-item'],
        imports: [
            "@ui5/webcomponents/dist/Breadcrumbs.js",
            "@ui5/webcomponents/dist/BreadcrumbsItem.js"
        ]
    },
    {
        name: 'BusyIndicator'
    },
    {
        name: 'Button'
    },
    {
        name: 'Calendar',
        imports: [
            "@ui5/webcomponents/dist/Calendar.js",
            "@ui5/webcomponents/dist/CalendarHeader.js",
            "@ui5/webcomponents/dist/CalendarDate.js",
            "@ui5/webcomponents/dist/CalendarPart.js",
        ],
        components: [
            'calendar',
            'date',
            'calendar-header',
            'calendar-part'
        ]
    },
    {
        name: 'Card',
        imports: [
            "@ui5/webcomponents/dist/Card.js",
            "@ui5/webcomponents/dist/CardHeader.js"
        ],
        components: [
            'card',
            'card-header'
        ]
    },
    {
        name: 'Carousel'
    },
    {
        name: 'CheckBox',
        components: ['checkbox']
    },
    {
        name: 'ColorPalette',
        components: ['color-palette', 'color-palette-item']
    },
    {
        name: 'ColorPalettePopover'
    },
    {
        name: 'ComboBox',
        components: ['combobox']
    },
    {
        name: 'DatePicker'
    },
    {
        name: 'DateRangePicker',
        components: ['daterange-picker']
    },
    {
        name: 'DateTimePicker',
        components: ['datetime-picker']
    },
    {
        name: 'Dialog'
    },
    {
        name: 'FileUploader'
    },
    {
        name: 'Icon'
    },
    {
        name: 'Input'
    },
    {
        name: 'Label'
    },
    {
        name: 'Link'
    },
    {
        name: 'List',
        components: [
            'list',
            'li',
            'li-custom',
            'li-groupheader'
        ],
        imports: [
            "@ui5/webcomponents/dist/List.js",
            "@ui5/webcomponents/dist/StandardListItem.js",
            "@ui5/webcomponents/dist/CustomListItem.js",
            "@ui5/webcomponents/dist/GroupHeaderListItem.js"
        ]
    },
    {
        name: 'Menu',
        components: [
            'menu',
            'menu-item'
        ]
    },
    {
        name: 'MessageStrip'
    },
    {
        name: 'MultiComboBox',
        components: ['multi-combobox']
    },
    {
        name: 'MultiInput'
    },
    {
        name: 'Panel'
    },
    {
        name: 'Popover'
    },
    {
        name: 'ProgressIndicator'
    },
    {
        name: 'RadioButton'
    },
    {
        name: 'RangeSlider'
    },
    {
        name: 'RatingIndicator'
    },
    {
        name: 'ResponsivePopover'
    },
    {
        name: 'SegmentedButton'
    },
    {
        name: 'Select',
        components: ['select', 'option', 'select-menu', 'select-menu-option']
    },
    {
        name: 'Slider'
    },
    {
        name: 'SplitButton'
    },
    {
        name: 'StepInput'
    },
    {
        name: 'Switch'
    },
    {
        name: 'TabContainer',
        components: ['tabcontainer', 'tab', 'tab-separator'],
        imports: [
            "@ui5/webcomponents/dist/TabContainer.js",
            "@ui5/webcomponents/dist/Tab.js",
            "@ui5/webcomponents/dist/TabSeparator.js"
        ]
    },
    {
        name: 'Table',
        components: [
            'table',
            'table-column',
            'table-row',
            'table-cell',
            'table-group-row'
        ],
        imports: [
            "@ui5/webcomponents/dist/Table.js",
            "@ui5/webcomponents/dist/TableColumn.js",
            "@ui5/webcomponents/dist/TableRow.js",
            "@ui5/webcomponents/dist/TableCell.js"
        ]
    },
    {
        name: 'TextArea',
        components: ['textarea']
    },
    {
        name: 'TimePicker'
    },
    {
        name: 'Title'
    },
    {
        name: 'Toast'
    },
    {
        name: 'ToggleButton'
    },
    {
        name: 'Toolbar'
    },
    {
        name: 'Tree',
        components: [
            'tree',
            'tree-item'
        ],
        imports: [
            "@ui5/webcomponents/dist/Tree.js",
            "@ui5/webcomponents/dist/TreeItem.js"
        ]
    }
];

export const allFioriItems = [
    {
        name: 'Bar'
    },
    {
        name: 'BarcodeScannerDialog'
    },
    {
        name: 'DynamicSideContent'
    },
    {
        name: 'FlexibleColumnLayout'
    },
    {
        name: 'IllustratedMessage'
    },
    {
        name: 'MediaGallery',
        components: ['media-gallery', 'media-gallery-item'],
        imports: [
            "@ui5/webcomponents-fiori/dist/MediaGallery.js",
            "@ui5/webcomponents-fiori/dist/MediaGalleryItem.js"
        ]
    },
    {
        name: 'NotificationListGroupItem',
        components: ['li-notification-group', 'notification-section'],
        imports: [
            "@ui5/webcomponents-fiori/dist/NotificationListGroupItem.js",
            "@ui5/webcomponents-fiori/dist/NotificationAction.js"
        ]
    },
    {
        name: 'NotificationListItem',
        components: ['li-notification']
    },
    {
        name: 'Page'
    },
    {
        name: 'ProductSwitch',
        components: ['product-switch', 'product-switch-item'],
        imports: [
            "@ui5/webcomponents-fiori/dist/ProductSwitch.js",
            "@ui5/webcomponents-fiori/dist/ProductSwitchItem.js"
        ]
    },
    {
        name: 'ShellBar',
        components: ['shellbar', 'shellbar-item']
    },
    {
        name: 'SideNavigation',
        components: ['side-navigation', 'side-navigation-item', 'side-navigation-sub-item'],
        imports: [
            "@ui5/webcomponents-fiori/dist/SideNavigation.js",
            "@ui5/webcomponents-fiori/dist/SideNavigationItem.js",
            "@ui5/webcomponents-fiori/dist/SideNavigationSubItem.js"
        ]
    },
    {
        name: 'Timeline'
    },
    {
        name: 'UploadCollection',
        components: ['upload-collection', 'upload-collection-item'],
        imports: [
            "@ui5/webcomponents-fiori/dist/UploadCollection.js",
            "@ui5/webcomponents-fiori/dist/UploadCollectionItem.js"
        ]
    },
    {
        name: 'ViewSettingsDialog'
    },
    {
        name: 'Wizard',
        components: ['wizard', 'wizard-step']
    }
];