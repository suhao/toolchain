//{{NO_DEPENDENCIES}}
// fichier Include Microsoft Visual C++.
// Utilis� par [!output RC_FILE_NAME]
//
[!if APP_TYPE_DLG]
#define IDR_MAINFRAME					128
[!if ABOUT_BOX]
#define IDM_ABOUTBOX					0x0010
#define IDD_ABOUTBOX					100
[!endif]
[!if AUTOMATION || ACCESSIBILITY]
#define IDP_OLE_INIT_FAILED				100
[!endif]
[!if ABOUT_BOX]
#define IDS_ABOUTBOX					101
[!endif]
#define IDD_[!output UPPER_CASE_SAFE_PROJECT_IDENTIFIER_NAME]_DIALOG				102
[!if HTML_DIALOG]
#define IDR_HTML_[!output UPPER_CASE_SAFE_PROJECT_IDENTIFIER_NAME]_DIALOG			104
[!endif]
[!endif]
[!if SOCKETS]
[!if APP_TYPE_DLG]
#define IDP_SOCKETS_INIT_FAILED			103
[!else]
#define IDP_SOCKETS_INIT_FAILED			101
[!endif]
[!endif]

// Valeurs par d�faut suivantes des nouveaux objets
//
#ifdef APSTUDIO_INVOKED
#ifndef APSTUDIO_READONLY_SYMBOLS

#define _APS_NEXT_RESOURCE_VALUE	129
#define _APS_NEXT_CONTROL_VALUE		1000
#define _APS_NEXT_SYMED_VALUE		101
#define _APS_NEXT_COMMAND_VALUE		32771
#endif
#endif
