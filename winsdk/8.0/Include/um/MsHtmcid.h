//+---------------------------------------------------------------------------
//
//  Microsoft Windows
//  Copyright (C) Microsoft Corporation.  All Rights Reserved.
//
//  File:       mshtmcid.h
//
//----------------------------------------------------------------------------

#ifndef __mshtmcid_h__
#define __mshtmcid_h__

//----------------------------------------------------------------------------
//
// MSHTML Command IDs
//
//----------------------------------------------------------------------------

#define IDM_UNKNOWN                 0
#define IDM_ALIGNBOTTOM             1
#define IDM_ALIGNHORIZONTALCENTERS  2
#define IDM_ALIGNLEFT               3
#define IDM_ALIGNRIGHT              4
#define IDM_ALIGNTOGRID             5
#define IDM_ALIGNTOP                6
#define IDM_ALIGNVERTICALCENTERS    7
#define IDM_ARRANGEBOTTOM           8
#define IDM_ARRANGERIGHT            9
#define IDM_BRINGFORWARD            10
#define IDM_BRINGTOFRONT            11
#define IDM_CENTERHORIZONTALLY      12
#define IDM_CENTERVERTICALLY        13
#define IDM_CODE                    14
#define IDM_DELETE                  17
#define IDM_FONTNAME                18
#define IDM_FONTSIZE                19
#define IDM_GROUP                   20
#define IDM_HORIZSPACECONCATENATE   21
#define IDM_HORIZSPACEDECREASE      22
#define IDM_HORIZSPACEINCREASE      23
#define IDM_HORIZSPACEMAKEEQUAL     24
#define IDM_INSERTOBJECT            25
#define IDM_MULTILEVELREDO          30
#define IDM_SENDBACKWARD            32
#define IDM_SENDTOBACK              33
#define IDM_SHOWTABLE               34
#define IDM_SIZETOCONTROL           35
#define IDM_SIZETOCONTROLHEIGHT     36
#define IDM_SIZETOCONTROLWIDTH      37
#define IDM_SIZETOFIT               38
#define IDM_SIZETOGRID              39
#define IDM_SNAPTOGRID              40
#define IDM_TABORDER                41
#define IDM_TOOLBOX                 42
#define IDM_MULTILEVELUNDO          44
#define IDM_UNGROUP                 45
#define IDM_VERTSPACECONCATENATE    46
#define IDM_VERTSPACEDECREASE       47
#define IDM_VERTSPACEINCREASE       48
#define IDM_VERTSPACEMAKEEQUAL      49
#define IDM_JUSTIFYFULL             50
#define IDM_BACKCOLOR               51
#define IDM_BOLD                    52
#define IDM_BORDERCOLOR             53
#define IDM_FLAT                    54
#define IDM_FORECOLOR               55
#define IDM_ITALIC                  56
#define IDM_JUSTIFYCENTER           57
#define IDM_JUSTIFYGENERAL          58
#define IDM_JUSTIFYLEFT             59
#define IDM_JUSTIFYRIGHT            60
#define IDM_RAISED                  61
#define IDM_SUNKEN                  62
#define IDM_UNDERLINE               63
#define IDM_CHISELED                64
#define IDM_ETCHED                  65
#define IDM_SHADOWED                66
#define IDM_FIND                    67
#define IDM_SHOWGRID                69
#define IDM_OBJECTVERBLIST0         72
#define IDM_OBJECTVERBLIST1         73
#define IDM_OBJECTVERBLIST2         74
#define IDM_OBJECTVERBLIST3         75
#define IDM_OBJECTVERBLIST4         76
#define IDM_OBJECTVERBLIST5         77
#define IDM_OBJECTVERBLIST6         78
#define IDM_OBJECTVERBLIST7         79
#define IDM_OBJECTVERBLIST8         80
#define IDM_OBJECTVERBLIST9         81
#define IDM_OBJECTVERBLISTLAST IDM_OBJECTVERBLIST9
#define IDM_CONVERTOBJECT           82
#define IDM_CUSTOMCONTROL           83
#define IDM_CUSTOMIZEITEM           84
#define IDM_RENAME                  85
#define IDM_IMPORT                  86
#define IDM_NEWPAGE                 87
#define IDM_MOVE                    88
#define IDM_CANCEL                  89
#define IDM_FONT                    90
#define IDM_STRIKETHROUGH           91
#define IDM_DELETEWORD              92
#define IDM_EXECPRINT               93
#define IDM_JUSTIFYNONE             94
#define IDM_TRISTATEBOLD            95
#define IDM_TRISTATEITALIC          96
#define IDM_TRISTATEUNDERLINE       97

#define IDM_FOLLOW_ANCHOR           2008

#define IDM_INSINPUTIMAGE           2114
#define IDM_INSINPUTBUTTON          2115
#define IDM_INSINPUTRESET           2116
#define IDM_INSINPUTSUBMIT          2117
#define IDM_INSINPUTUPLOAD          2118
#define IDM_INSFIELDSET             2119

#define IDM_PASTEINSERT             2120
#define IDM_REPLACE                 2121
#define IDM_EDITSOURCE              2122
#define IDM_BOOKMARK                2123
#define IDM_HYPERLINK               2124
#define IDM_UNLINK                  2125
#define IDM_BROWSEMODE              2126
#define IDM_EDITMODE                2127
#define IDM_UNBOOKMARK              2128

#define IDM_TOOLBARS                2130
#define IDM_STATUSBAR               2131
#define IDM_FORMATMARK              2132
#define IDM_TEXTONLY                2133
#define IDM_OPTIONS                 2135
#define IDM_FOLLOWLINKC             2136
#define IDM_FOLLOWLINKN             2137
#define IDM_VIEWSOURCE              2139
#define IDM_ZOOMPOPUP               2140

// IDM_BASELINEFONT1, IDM_BASELINEFONT2, IDM_BASELINEFONT3, IDM_BASELINEFONT4,
// and IDM_BASELINEFONT5 should be consecutive integers;
//
#define IDM_BASELINEFONT1           2141
#define IDM_BASELINEFONT2           2142
#define IDM_BASELINEFONT3           2143
#define IDM_BASELINEFONT4           2144
#define IDM_BASELINEFONT5           2145

#define IDM_HORIZONTALLINE          2150
#define IDM_LINEBREAKNORMAL         2151
#define IDM_LINEBREAKLEFT           2152
#define IDM_LINEBREAKRIGHT          2153
#define IDM_LINEBREAKBOTH           2154
#define IDM_NONBREAK                2155
#define IDM_SPECIALCHAR             2156
#define IDM_HTMLSOURCE              2157
#define IDM_IFRAME                  2158
#define IDM_HTMLCONTAIN             2159
#define IDM_TEXTBOX                 2161
#define IDM_TEXTAREA                2162
#define IDM_CHECKBOX                2163
#define IDM_RADIOBUTTON             2164
#define IDM_DROPDOWNBOX             2165
#define IDM_LISTBOX                 2166
#define IDM_BUTTON                  2167
#define IDM_IMAGE                   2168
#define IDM_OBJECT                  2169
#define IDM_1D                      2170
#define IDM_IMAGEMAP                2171
#define IDM_FILE                    2172
#define IDM_COMMENT                 2173
#define IDM_SCRIPT                  2174
#define IDM_JAVAAPPLET              2175
#define IDM_PLUGIN                  2176
#define IDM_PAGEBREAK               2177
#define IDM_HTMLAREA                2178

#define IDM_PARAGRAPH               2180
#define IDM_FORM                    2181
#define IDM_MARQUEE                 2182
#define IDM_LIST                    2183
#define IDM_ORDERLIST               2184
#define IDM_UNORDERLIST             2185
#define IDM_INDENT                  2186
#define IDM_OUTDENT                 2187
#define IDM_PREFORMATTED            2188
#define IDM_ADDRESS                 2189
#define IDM_BLINK                   2190
#define IDM_DIV                     2191

#define IDM_TABLEINSERT             2200
#define IDM_RCINSERT                2201
#define IDM_CELLINSERT              2202
#define IDM_CAPTIONINSERT           2203
#define IDM_CELLMERGE               2204
#define IDM_CELLSPLIT               2205
#define IDM_CELLSELECT              2206
#define IDM_ROWSELECT               2207
#define IDM_COLUMNSELECT            2208
#define IDM_TABLESELECT             2209
#define IDM_TABLEPROPERTIES         2210
#define IDM_CELLPROPERTIES          2211
#define IDM_ROWINSERT               2212
#define IDM_COLUMNINSERT            2213

#define IDM_HELP_CONTENT            2220
#define IDM_HELP_ABOUT              2221
#define IDM_HELP_README             2222

#define IDM_REMOVEFORMAT            2230
#define IDM_PAGEINFO                2231
#define IDM_TELETYPE                2232
#define IDM_GETBLOCKFMTS            2233
#define IDM_BLOCKFMT                2234
#define IDM_SHOWHIDE_CODE           2235
#define IDM_TABLE                   2236

#define IDM_COPYFORMAT              2237
#define IDM_PASTEFORMAT             2238
#define IDM_GOTO                    2239

#define IDM_CHANGEFONT              2240
#define IDM_CHANGEFONTSIZE          2241
#define IDM_CHANGECASE              2246
#define IDM_SHOWSPECIALCHAR         2249

#define IDM_SUBSCRIPT               2247
#define IDM_SUPERSCRIPT             2248

#define IDM_CENTERALIGNPARA         2250
#define IDM_LEFTALIGNPARA           2251
#define IDM_RIGHTALIGNPARA          2252
#define IDM_REMOVEPARAFORMAT        2253
#define IDM_APPLYNORMAL             2254
#define IDM_APPLYHEADING1           2255
#define IDM_APPLYHEADING2           2256
#define IDM_APPLYHEADING3           2257

#define IDM_DOCPROPERTIES           2260
#define IDM_ADDFAVORITES            2261
#define IDM_COPYSHORTCUT            2262
#define IDM_SAVEBACKGROUND          2263
#define IDM_SETWALLPAPER            2264
#define IDM_COPYBACKGROUND          2265
#define IDM_CREATESHORTCUT          2266
#define IDM_PAGE                    2267
#define IDM_SAVETARGET              2268
#define IDM_SHOWPICTURE             2269
#define IDM_SAVEPICTURE             2270
#define IDM_DYNSRCPLAY              2271
#define IDM_DYNSRCSTOP              2272
#define IDM_PRINTTARGET             2273
#define IDM_IMGARTPLAY              2274        // no longer in use
#define IDM_IMGARTSTOP              2275        // no longer in use
#define IDM_IMGARTREWIND            2276        // no longer in use
#define IDM_PRINTQUERYJOBSPENDING   2277
#define IDM_SETDESKTOPITEM          2278

#define IDM_CONTEXTMENU             2280
#define IDM_GOBACKWARD              2282
#define IDM_GOFORWARD               2283
#define IDM_PRESTOP                 2284

//;begin_internal
#define IDM_GOTOCLIPBOARDADDRESS    2285
#define IDM_GOTOCLIPBOARDTEXT       2286
//;end_internal

#define IDM_MP_MYPICS               2287
#define IDM_MP_EMAILPICTURE         2288
#define IDM_MP_PRINTPICTURE         2289

#define IDM_CREATELINK              2290
#define IDM_COPYCONTENT             2291

#define IDM_LANGUAGE                2292

#define IDM_GETPRINTTEMPLATE        2295
#define IDM_SETPRINTTEMPLATE        2296
#define IDM_TEMPLATE_PAGESETUP      2298

#define IDM_REFRESH                 2300
#define IDM_STOPDOWNLOAD            2301

#define IDM_ENABLE_INTERACTION      2302

#define IDM_LAUNCHDEBUGGER          2310
#define IDM_BREAKATNEXT             2311

#define IDM_INSINPUTHIDDEN          2312
#define IDM_INSINPUTPASSWORD        2313

#define IDM_OVERWRITE               2314

#define IDM_PARSECOMPLETE           2315

#define IDM_HTMLEDITMODE            2316

#define IDM_REGISTRYREFRESH         2317
#define IDM_COMPOSESETTINGS         2318

#define IDM_SHOWALLTAGS             2327
#define IDM_SHOWALIGNEDSITETAGS     2321
#define IDM_SHOWSCRIPTTAGS          2322
#define IDM_SHOWSTYLETAGS           2323
#define IDM_SHOWCOMMENTTAGS         2324
#define IDM_SHOWAREATAGS            2325
#define IDM_SHOWUNKNOWNTAGS         2326
#define IDM_SHOWMISCTAGS            2320
#define IDM_SHOWZEROBORDERATDESIGNTIME         2328

#define IDM_AUTODETECT              2329

#define IDM_SCRIPTDEBUGGER          2330

#define IDM_GETBYTESDOWNLOADED      2331

#define IDM_NOACTIVATENORMALOLECONTROLS        2332
#define IDM_NOACTIVATEDESIGNTIMECONTROLS       2333
#define IDM_NOACTIVATEJAVAAPPLETS              2334
#define IDM_NOFIXUPURLSONPASTE                 2335

#define IDM_EMPTYGLYPHTABLE         2336
#define IDM_ADDTOGLYPHTABLE         2337
#define IDM_REMOVEFROMGLYPHTABLE    2338
#define IDM_REPLACEGLYPHCONTENTS    2339

#define IDM_SHOWWBRTAGS             2340

#define IDM_PERSISTSTREAMSYNC       2341
#define IDM_SETDIRTY                2342

#define IDM_RUNURLSCRIPT            2343

#ifdef IE5_ZOOM
#define IDM_ZOOMRATIO               2344
#define IDM_GETZOOMNUMERATOR        2345
#define IDM_GETZOOMDENOMINATOR      2346
#endif  // IE5_ZOOM

// COMMANDS FOR COMPLEX TEXT
#define IDM_DIRLTR                  2350
#define IDM_DIRRTL                  2351
#define IDM_BLOCKDIRLTR             2352
#define IDM_BLOCKDIRRTL             2353
#define IDM_INLINEDIRLTR            2354
#define IDM_INLINEDIRRTL            2355

// SHDOCVW
#define IDM_ISTRUSTEDDLG            2356

// MSHTMLED
#define IDM_INSERTSPAN              2357
#define IDM_LOCALIZEEDITOR          2358

// XML MIMEVIEWER
#define IDM_SAVEPRETRANSFORMSOURCE  2370
#define IDM_VIEWPRETRANSFORMSOURCE  2371

// Scrollbar context menu
#define IDM_SCROLL_HERE             2380
#define IDM_SCROLL_TOP              2381
#define IDM_SCROLL_BOTTOM           2382
#define IDM_SCROLL_PAGEUP           2383
#define IDM_SCROLL_PAGEDOWN         2384
#define IDM_SCROLL_UP               2385
#define IDM_SCROLL_DOWN             2386
#define IDM_SCROLL_LEFTEDGE         2387
#define IDM_SCROLL_RIGHTEDGE        2388
#define IDM_SCROLL_PAGELEFT         2389
#define IDM_SCROLL_PAGERIGHT        2390
#define IDM_SCROLL_LEFT             2391
#define IDM_SCROLL_RIGHT            2392

// IE 6 Form Editing Commands
#define IDM_MULTIPLESELECTION       2393
#define IDM_2D_POSITION             2394
#define IDM_2D_ELEMENT              2395
#define IDM_1D_ELEMENT              2396
#define IDM_ABSOLUTE_POSITION       2397
#define IDM_LIVERESIZE              2398
#define IDM_ATOMICSELECTION			2399

// Auto URL detection mode
#define IDM_AUTOURLDETECT_MODE      2400

// Legacy IE50 compatible paste
#define IDM_IE50_PASTE              2401

// ie50 paste mode
#define IDM_IE50_PASTE_MODE         2402

//;begin_internal
#define IDM_GETIPRINT               2403
//;end_internal

// for disabling selection handles
#define IDM_DISABLE_EDITFOCUS_UI    2404

// for visibility/display in design
#define IDM_RESPECTVISIBILITY_INDESIGN  2405

// set css mode
#define IDM_CSSEDITING_LEVEL            2406

// New outdent
#define IDM_UI_OUTDENT                  2407

// Printing Status
#define IDM_UPDATEPAGESTATUS            2408

// IME Reconversion
#define IDM_IME_ENABLE_RECONVERSION		2409

#define	IDM_KEEPSELECTION				2410

#define IDM_UNLOADDOCUMENT              2411

#define IDM_OVERRIDE_CURSOR             2420

#define IDM_PEERHITTESTSAMEINEDIT       2423

#define IDM_TRUSTAPPCACHE               2425

#define IDM_BACKGROUNDIMAGECACHE        2430

#define IDM_GETUSERACTIONTIME           2431
#define IDM_BEGINUSERACTION             2432
#define IDM_ENDUSERACTION               2433
#define IDM_SETCUSTOMCURSOR             2434

// Open Link in New Tab
#define IDM_FOLLOWLINKT                 2435

// Caret Browsing Mode
#define IDM_CARETBROWSINGMODE           2436

// Style menu
#define IDM_STYLEMENU_SETNOSTYLE        2437
#define IDM_STYLEMENU_GETNOSTYLE        2438
#define IDM_STYLEMENU_GETPREFSTYLE      2439
#define IDM_STYLEMENU_CHANGESELECTEDSTYLE	2440

// Media element commands (context menu/keyboard accelerators)
#define IDM_MEDIA_PLAYPAUSE             2441
#define IDM_MEDIA_MUTEUNMUTE            2442
#define IDM_MEDIA_PLAY                  2443
#define IDM_MEDIA_PAUSE                 2444
#define IDM_MEDIA_STOP                  2445
#define IDM_MEDIA_FULLSCREEN_TOGGLE     2446
#define IDM_MEDIA_FULLSCREEN_EXIT       2447
#define IDM_MEDIA_VOLUME_UP             2448
#define IDM_MEDIA_VOLUME_DOWN           2449
#define IDM_MEDIA_SEEK_TO_START         2450
#define IDM_MEDIA_SEEK_TO_END           2451
#define IDM_MEDIA_SEEK_FWD_SMALL        2452
#define IDM_MEDIA_SEEK_BACK_SMALL       2453
#define IDM_MEDIA_SEEK_FWD_LARGE        2454
#define IDM_MEDIA_SEEK_BACK_LARGE       2455
#define IDM_MEDIA_RATE_FASTER           2456
#define IDM_MEDIA_RATE_SLOWER           2457
#define IDM_MEDIA_SHOWCONTROLS_TOGGLE   2458
#define IDM_MEDIA_SUBTITLES_TOGGLE      2459
#define IDM_MEDIA_FRAMESTEP_FWD         2460
#define IDM_MEDIA_FRAMESTEP_BACK        2461
#define IDM_MEDIA_MUTE                  2462
#define IDM_MEDIA_UNMUTE                2463
#define IDM_MEDIA_SHOW_AUDIO_ACCESS     2464
#define IDM_MEDIA_SHOW_SUBTITLE_ACCESS  2465

// These should be enough to reserve a block covering all playrates
// displayed on the context menu (must be consecutive integers)
#define IDM_MEDIA_PLAYRATE0             2480
#define IDM_MEDIA_PLAYRATE1             2481
#define IDM_MEDIA_PLAYRATE2             2482
#define IDM_MEDIA_PLAYRATE3             2483
#define IDM_MEDIA_PLAYRATE4             2484
#define IDM_MEDIA_PLAYRATE5             2485
#define IDM_MEDIA_PLAYRATE6             2486
#define IDM_MEDIA_PLAYRATE7             2487
#define IDM_MEDIA_PLAYRATE8             2488
#define IDM_MEDIA_PLAYRATE9             2489

#define IDM_PASTECONTENTONLY            2500
#define IDM_PASTETEXTONLY               2501

#define IDM_DEFAULTBLOCK                6046

#define IDM_MIMECSET__FIRST__           3609
#define IDM_MIMECSET__LAST__            3699

#define IDM_MENUEXT_FIRST__       3700
#define IDM_MENUEXT_LAST__        3732
#define IDM_MENUEXT_COUNT         3733

// New for IE10
#define IDM_ADDCONSOLEMESSAGERECEIVER     3800
#define IDM_REMOVECONSOLEMESSAGERECEIVER  3801
#define IDM_STARTDIAGNOSTICSMODE          3802
#define IDM_GETSCRIPTENGINE               3803
#define IDM_ADDDEBUGCALLBACKRECEIVER      3804 // pvaIn: IDebugCallbackNotificationHandler*, pvaOut: cookie for unregister
#define IDM_REMOVEDEBUGCALLBACKRECEIVER   3805 // pvaIn: cookie from register, pvaOut: NULL


// Commands mapped from the standard set.  We should
// consider deleting them from public header files.

#define IDM_OPEN                    2000
#define IDM_NEW                     2001
#define IDM_SAVE                    70
#define IDM_SAVEAS                  71
#define IDM_SAVECOPYAS              2002
#define IDM_PRINTPREVIEW            2003
#define IDM_SHOWPRINT               2010
#define IDM_SHOWPAGESETUP           2011
#define IDM_PRINT                   27
#define IDM_PAGESETUP               2004
#define IDM_SPELL                   2005
#define IDM_PASTESPECIAL            2006
#define IDM_CLEARSELECTION          2007
#define IDM_PROPERTIES              28
#define IDM_REDO                    29
#define IDM_UNDO                    43
#define IDM_SELECTALL               31
#define IDM_ZOOMPERCENT             50
#define IDM_GETZOOM                 68
#define IDM_STOP                    2138
#define IDM_COPY                    15
#define IDM_CUT                     16
#define IDM_PASTE                   26

// Defines for IDM_ZOOMPERCENT
#define CMD_ZOOM_PAGEWIDTH -1
#define CMD_ZOOM_ONEPAGE -2
#define CMD_ZOOM_TWOPAGES -3
#define CMD_ZOOM_SELECTION -4
#define CMD_ZOOM_FIT -5

// IDMs for CGID_EditStateCommands group
#define IDM_CONTEXT                 1
#define IDM_HWND                    2

// Shdocvw Execs on CGID_DocHostCommandHandler
#define IDM_NEW_TOPLEVELWINDOW      7050

//
// Undo persistence comands
//
#define IDM_PRESERVEUNDOALWAYS      6049
#define IDM_PERSISTDEFAULTVALUES    7100
#define IDM_PROTECTMETATAGS         7101

#define IDM_GETFRAMEZONE            6037

#define IDM_REFRESH_THIS            6042

// placeholder for context menu extensions
#define IDM_MENUEXT_PLACEHOLDER     6047


//;begin_internal
// <New in IE6>
#define IDM_FIRE_PRINTTEMPLATEUP        15000
#define IDM_FIRE_PRINTTEMPLATEDOWN      15001
#define IDM_SETPRINTHANDLES             15002
#define IDM_CLEARAUTHENTICATIONCACHE    15003
#define IDM_GETUSERINITFLAGS            15004
#define IDM_GETDOCDLGFLAGS              15005
// <New in IE7>
#define IDM_OLEWINDOWSTATECHANGED       15006
// <New in IE8>
#define IDM_ACTIVEXINSTALLSCOPE         15007
#define IDM_SETSESSIONDOCUMENTMODE      15008
#define IDM_GETSESSIONDOCUMENTMODE      15009
#define IDM_SETPROFILINGONSTART         15010
#define IDM_GETPROFILINGONSTART         15011
#define IDM_SETSCRIPTCONSOLE            15012 // no longer in use, use IDM_SETDEVTOOLBARCONSOLE
#define IDM_SETNAVIGATEEVENTSINK        15013
// <New in IE9>
// UNUSED :                             15014
// UNUSED :                             15015
#define IDM_SETDEVTOOLBARCONSOLE        15016 // no longer in use, use IDM_ADDCONSOLEMESSAGERECEIVER & IDM_REMOVECONSOLEMESSAGERECEIVER
// <New in IE10>
#define IDM_POPSTATEEVENT               15017
// UNUSED :                             15018
// UNUSED :                             15019
// UNUSED :                             15020
#define IDM_SETPARTIALLAYOUTSTATUS      15021
#define IDM_GETPARTIALLAYOUTSTATUS      15022
#define IDM_ADDPARTIALTESTSTEPCOUNT     15023
#define IDM_SETL9QUIRKSEMULATIONENABLED 15024
#define IDM_GETL9QUIRKSEMULATIONENABLED 15025
// UNUSED :                             15026
#define IDM_GETDEFAULTZOOMLEVEL         15027
#define IDM_GETELEMENTBOUNDINGBOX       15028
#define IDM_SETGEOLOCATIONCONSENT       15029
#define IDM_ACTIVEXFILTERINGENABLED     15030
// <New in WIN8>
#define IDM_SHARE                       15031
#define IDM_SETAPPCACHESIZECONSENT      15032
#define IDM_SHAREAPPCACHEEVENT          15033
#define IDM_SETINDEXDBSIZECONSENT       15034
// Diagnostics mode commands
// UNUSED:                              15035
// UNUSED:                              15036
// 15037 unused. Repurpose as needed.
// PrintManager Printing Support
#define IDM_GETPRINTMANAGERDOCSOURCE    15038
#define IDM_SETEXTRAHEADERS             15039
#define IDM_SETACCESSIBILITYNAME        15040
// Dynamic setting registry update
#define IDM_UPDATESETTINGSFROMREGISTRY  15041
// Mobile ms-application-tap-highlight meta tag
#define IDM_GETMSAPPLICATIONTAPHIGHLIGHT 15042
//;end_internal

// Security band commands
#define IDM_SETPAGEACTIONALLOWEDFLAGS   15100

// Flip Ahead commands
#define IDM_INVOKEFLIPAHEADTARGET       15200
#define IDM_ENABLEFLIPAHEADTARGET       15201

#endif
