[!if RIBBON_TOOLBAR]
// Ce code source des exemples MFC illustre l'utilisation de l'interface utilisateur Microsoft Office Fluent MFC 
// (interface utilisateur "Fluent UI"). Il est fourni uniquement en tant que r�f�rence compl�mentaire du 
// Guide de r�f�rence Microsoft Foundation Classes et de la documentation �lectronique associ�e 
// inclus avec les logiciels de la biblioth�que MFC�C++.  
// Les termes du contrat de licence pour la copie, l'utilisation ou la distribution de l'interface utilisateur Fluent sont disponibles s�par�ment.  
// Pour en savoir plus sur notre programme de licence de l'interface utilisateur Fluent, visitez 
// http://go.microsoft.com/fwlink/?LinkId=238214.
//
// Copyright (C) Microsoft Corporation
// Tous droits r�serv�s.
[!endif]

// [!output MAIN_FRAME_IMPL] : impl�mentation de la classe [!output MAIN_FRAME_CLASS]
//

#include "stdafx.h"
#include "[!output APP_HEADER]"

#include "[!output MAIN_FRAME_HEADER]"
[!if PROJECT_STYLE_EXPLORER]
[!if APP_TYPE_SDI || APP_TYPE_MTLD]
#include "[!output TREE_VIEW_HEADER]"
#include "[!output VIEW_HEADER]"
[!endif]
[!endif]

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// [!output MAIN_FRAME_CLASS]

[!if APP_TYPE_MDI || !DOCVIEW]
IMPLEMENT_DYNAMIC([!output MAIN_FRAME_CLASS], [!output MAIN_FRAME_BASE_CLASS])
[!else]
IMPLEMENT_DYNCREATE([!output MAIN_FRAME_CLASS], [!output MAIN_FRAME_BASE_CLASS])
[!endif]
[!if TOOLBAR_CUST_USER]

const int  iMaxUserToolbars = 10;
const UINT uiFirstUserToolBarId = AFX_IDW_CONTROLBAR_FIRST + 40;
const UINT uiLastUserToolBarId = uiFirstUserToolBarId + iMaxUserToolbars - 1;
[!endif]

BEGIN_MESSAGE_MAP([!output MAIN_FRAME_CLASS], [!output MAIN_FRAME_BASE_CLASS])
[!if DOCKING_TOOLBAR || TOOLBAR_STYLE_REBAR || MENUBAR_TOOLBAR || RIBBON_TOOLBAR || STATUS_BAR]
	ON_WM_CREATE()
[!else]
[!if APP_TYPE_SDI && !DOCVIEW]
	ON_WM_CREATE()
[!endif]
[!endif]
[!if APP_TYPE_SDI]
[!if !DOCVIEW]
	ON_WM_SETFOCUS()
[!endif] 
[!endif] 
[!if APP_TYPE_MTLD]
	ON_COMMAND(ID_FILE_CLOSE, &[!output MAIN_FRAME_CLASS]::OnFileClose)
[!if !DOCVIEW]
	ON_WM_CLOSE()
[!endif]
[!endif] 
[!if PROJECT_STYLE_EXPLORER]
[!if APP_TYPE_SDI || APP_TYPE_MTLD]
[!if LIST_VIEW]
	ON_UPDATE_COMMAND_UI_RANGE(AFX_ID_VIEW_MINIMUM, AFX_ID_VIEW_MAXIMUM, &[!output MAIN_FRAME_CLASS]::OnUpdateViewStyles)
	ON_COMMAND_RANGE(AFX_ID_VIEW_MINIMUM, AFX_ID_VIEW_MAXIMUM, &[!output MAIN_FRAME_CLASS]::OnViewStyle)
[!endif]
[!endif]
[!endif]
[!if MENUBAR_TOOLBAR || RIBBON_TOOLBAR]
[!if APP_TYPE_MDI]
	ON_COMMAND(ID_WINDOW_MANAGER, &[!output MAIN_FRAME_CLASS]::OnWindowManager)
[!endif]
[!endif]
[!if MENUBAR_TOOLBAR]
	ON_COMMAND(ID_VIEW_CUSTOMIZE, &[!output MAIN_FRAME_CLASS]::OnViewCustomize)
	ON_REGISTERED_MESSAGE(AFX_WM_CREATETOOLBAR, &[!output MAIN_FRAME_CLASS]::OnToolbarCreateNew)
[!endif]
[!if ENABLE_VISUAL_STYLE_SWITCHING]
	ON_COMMAND_RANGE(ID_VIEW_APPLOOK_WIN_2000, ID_VIEW_APPLOOK_WINDOWS_7, &[!output MAIN_FRAME_CLASS]::OnApplicationLook)
	ON_UPDATE_COMMAND_UI_RANGE(ID_VIEW_APPLOOK_WIN_2000, ID_VIEW_APPLOOK_WINDOWS_7, &[!output MAIN_FRAME_CLASS]::OnUpdateApplicationLook)
[!endif]
[!if ADV_DOCKING_CAPTION]
	ON_COMMAND(ID_VIEW_CAPTION_BAR, &[!output MAIN_FRAME_CLASS]::OnViewCaptionBar)
	ON_UPDATE_COMMAND_UI(ID_VIEW_CAPTION_BAR, &[!output MAIN_FRAME_CLASS]::OnUpdateViewCaptionBar)
	ON_COMMAND(ID_TOOLS_OPTIONS, &[!output MAIN_FRAME_CLASS]::OnOptions)
[!endif]
[!if PANE_MENUS_ACTIVATE]
[!if ADV_DOCKING_EXPLORER]
	ON_COMMAND(ID_VIEW_FILEVIEW, &[!output MAIN_FRAME_CLASS]::OnViewFileView)
	ON_UPDATE_COMMAND_UI(ID_VIEW_FILEVIEW, &[!output MAIN_FRAME_CLASS]::OnUpdateViewFileView)
	ON_COMMAND(ID_VIEW_CLASSVIEW, &[!output MAIN_FRAME_CLASS]::OnViewClassView)
	ON_UPDATE_COMMAND_UI(ID_VIEW_CLASSVIEW, &[!output MAIN_FRAME_CLASS]::OnUpdateViewClassView)
[!endif]
[!if ADV_DOCKING_OUTPUT]
	ON_COMMAND(ID_VIEW_OUTPUTWND, &[!output MAIN_FRAME_CLASS]::OnViewOutputWindow)
	ON_UPDATE_COMMAND_UI(ID_VIEW_OUTPUTWND, &[!output MAIN_FRAME_CLASS]::OnUpdateViewOutputWindow)
[!endif]
[!if ADV_DOCKING_PROPERTIES]
	ON_COMMAND(ID_VIEW_PROPERTIESWND, &[!output MAIN_FRAME_CLASS]::OnViewPropertiesWindow)
	ON_UPDATE_COMMAND_UI(ID_VIEW_PROPERTIESWND, &[!output MAIN_FRAME_CLASS]::OnUpdateViewPropertiesWindow)
[!endif]
[!endif]
[!if PRINTING]
[!if RIBBON_TOOLBAR]
[!if APP_TYPE_SDI || APP_TYPE_MTLD]
	ON_COMMAND(ID_FILE_PRINT, &[!output MAIN_FRAME_CLASS]::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &[!output MAIN_FRAME_CLASS]::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &[!output MAIN_FRAME_CLASS]::OnFilePrintPreview)
	ON_UPDATE_COMMAND_UI(ID_FILE_PRINT_PREVIEW, &[!output MAIN_FRAME_CLASS]::OnUpdateFilePrintPreview)
[!endif]
[!endif]
[!endif]
[!if ADV_DOCKING_OUTPUT]
	ON_WM_SETTINGCHANGE()
[!endif]
END_MESSAGE_MAP()
[!if STATUS_BAR]
[!if !RIBBON_TOOLBAR]

static UINT indicators[] =
{
	ID_SEPARATOR,           // indicateur de la ligne d'�tat
[!if DO_KANA]
	ID_INDICATOR_KANA,
[!endif]
	ID_INDICATOR_CAPS,
	ID_INDICATOR_NUM,
	ID_INDICATOR_SCRL,
};
[!endif]
[!endif]

// construction ou destruction�de [!output MAIN_FRAME_CLASS]

[!output MAIN_FRAME_CLASS]::[!output MAIN_FRAME_CLASS]()
{
[!if ACCESSIBILITY]
	EnableActiveAccessibility();
[!endif]
	// TODO: ajoutez ici le code d'une initialisation de membre
[!if MENUBAR_TOOLBAR || RIBBON_TOOLBAR]
[!if ENABLE_VISUAL_STYLE_SWITCHING]
	theApp.m_nAppLook = theApp.GetInt(_T("ApplicationLook"), [!output APPLICATION_LOOK_VALUE]);
[!endif]
[!endif]
}

[!output MAIN_FRAME_CLASS]::~[!output MAIN_FRAME_CLASS]()
{
}
[!if DOCKING_TOOLBAR || TOOLBAR_STYLE_REBAR || MENUBAR_TOOLBAR || RIBBON_TOOLBAR || STATUS_BAR]

int [!output MAIN_FRAME_CLASS]::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if ([!output MAIN_FRAME_BASE_CLASS]::OnCreate(lpCreateStruct) == -1)
		return -1;
[!if MENUBAR_TOOLBAR || RIBBON_TOOLBAR]

	BOOL bNameValid;
[!endif]
[!if APP_TYPE_MDI && APP_TYPE_TABBED_MDI]

	CMDITabInfo mdiTabParams;
	mdiTabParams.m_style = CMFCTabCtrl::STYLE_3D_ONENOTE; // autres styles disponibles...
	mdiTabParams.m_bActiveTabCloseButton = TRUE;      // d�finir � FALSE pour placer le bouton de fermeture � droite de la zone d'onglet
	mdiTabParams.m_bTabIcons = FALSE;    // d�finir � TRUE pour activer les ic�nes de document sous les onglets MDI
	mdiTabParams.m_bAutoColor = TRUE;    // d�finir � FALSE pour d�sactiver la coloration automatique des onglets MDI
	mdiTabParams.m_bDocumentMenu = TRUE; // activer le menu de document � l'extr�mit� droite de la zone d'onglet
	EnableMDITabbedGroups(TRUE, mdiTabParams);
[!endif]
[!if MENUBAR_TOOLBAR]

	if (!m_wndMenuBar.Create(this))
	{
		TRACE0("Impossible de cr�er la barre de menus\n");
		return -1;      // �chec de la cr�ation
	}

	m_wndMenuBar.SetPaneStyle(m_wndMenuBar.GetPaneStyle() | CBRS_SIZE_DYNAMIC | CBRS_TOOLTIPS | CBRS_FLYBY);

	// emp�che la barre de menus de prendre le focus lors de l'activation
	CMFCPopupMenu::SetForceMenuFocus(FALSE);
[!endif]
[!if APP_TYPE_SDI]
[!if !DOCVIEW]

	// cr�er une vue de mani�re qu'elle occupe la zone cliente du frame
	if (!m_wndView.Create(NULL, NULL, AFX_WS_DEFAULT_VIEW, CRect(0, 0, 0, 0), this, AFX_IDW_PANE_FIRST, NULL))
	{
		TRACE0("Impossible de cr�er la fen�tre d'affichage\n");
		return -1;
	}
[!endif]
[!endif]
[!if DOCKING_TOOLBAR || TOOLBAR_STYLE_REBAR || MENUBAR_TOOLBAR]
[!if TOOLBAR_STYLE_REBAR]

	if (!m_wndToolBar.CreateEx(this, TBSTYLE_FLAT | TBSTYLE_TRANSPARENT) ||
[!else]

	if (!m_wndToolBar.CreateEx(this, TBSTYLE_FLAT, WS_CHILD | WS_VISIBLE | CBRS_TOP | CBRS_GRIPPER | CBRS_TOOLTIPS | CBRS_FLYBY | CBRS_SIZE_DYNAMIC) ||
[!endif]
[!if MENUBAR_TOOLBAR]
		!m_wndToolBar.LoadToolBar(theApp.m_bHiColorIcons ? IDR_MAINFRAME_256 : IDR_MAINFRAME))
[!else]
		!m_wndToolBar.LoadToolBar(IDR_MAINFRAME))
[!endif]
	{
		TRACE0("Impossible de cr�er toolbar\n");
		return -1;      // �chec de la cr�ation
	}
[!if MENUBAR_TOOLBAR]

	CString strToolBarName;
	bNameValid = strToolBarName.LoadString(IDS_TOOLBAR_STANDARD);
	ASSERT(bNameValid);
	m_wndToolBar.SetWindowText(strToolBarName);

	CString strCustomize;
	bNameValid = strCustomize.LoadString(IDS_TOOLBAR_CUSTOMIZE);
	ASSERT(bNameValid);
	m_wndToolBar.EnableCustomizeButton(TRUE, ID_VIEW_CUSTOMIZE, strCustomize);
[!if TOOLBAR_CUST_USER]

	// Autoriser les op�rations de barres d'outils d�finies par l'utilisateur�:
	InitUserToolbars(NULL, uiFirstUserToolBarId, uiLastUserToolBarId);
[!endif]
[!endif]
[!if TOOLBAR_STYLE_REBAR]
[!if CONTAINER || CONTAINER_SERVER]

	m_wndToolBar.SetBarStyle(m_wndToolBar.GetBarStyle() & ~CBRS_HIDE_INPLACE);

[!endif]
	if (!m_wndDlgBar.Create(this, IDR_MAINFRAME, CBRS_ALIGN_TOP, AFX_IDW_DIALOGBAR))
	{
		TRACE0("Impossible de cr�er dialogbar\n");
		return -1;		// �chec de la cr�ation
	}

	if (!m_wndReBar.Create(this) || !m_wndReBar.AddBar(&m_wndToolBar) || !m_wndReBar.AddBar(&m_wndDlgBar))
	{
		TRACE0("Impossible de cr�er rebar\n");
		return -1;      // �chec de la cr�ation
	}
[!if CONTAINER || CONTAINER_SERVER]
	m_wndReBar.SetBarStyle(m_wndReBar.GetBarStyle() & ~CBRS_HIDE_INPLACE);
[!endif]
[!endif]
[!endif]
[!if RIBBON_TOOLBAR]

	m_wndRibbonBar.Create(this);
	m_wndRibbonBar.LoadFromResource(IDR_RIBBON);
[!endif]
[!if STATUS_BAR]

	if (!m_wndStatusBar.Create(this))
	{
		TRACE0("Impossible de cr�er la barre d'�tat\n");
		return -1;      // �chec de la cr�ation
	}
[!if RIBBON_TOOLBAR]

	CString strTitlePane1;
	CString strTitlePane2;
	bNameValid = strTitlePane1.LoadString(IDS_STATUS_PANE1);
	ASSERT(bNameValid);
	bNameValid = strTitlePane2.LoadString(IDS_STATUS_PANE2);
	ASSERT(bNameValid);
	m_wndStatusBar.AddElement(new CMFCRibbonStatusBarPane(ID_STATUSBAR_PANE1, strTitlePane1, TRUE), strTitlePane1);
	m_wndStatusBar.AddExtendedElement(new CMFCRibbonStatusBarPane(ID_STATUSBAR_PANE2, strTitlePane2, TRUE), strTitlePane2);
[!else]
	m_wndStatusBar.SetIndicators(indicators, sizeof(indicators)/sizeof(UINT));
[!endif]
[!endif]
[!if DOCKING_TOOLBAR || TOOLBAR_STYLE_REBAR || MENUBAR_TOOLBAR]
[!if TOOLBAR_STYLE_REBAR]

	// TODO: supprimez ceci si vous ne souhaitez pas afficher les info-bulles
	m_wndToolBar.SetBarStyle(m_wndToolBar.GetBarStyle() | CBRS_TOOLTIPS | CBRS_FLYBY);
[!else]
[!if MENUBAR_TOOLBAR]

	// TODO: supprimez ces cinq lignes si vous ne souhaitez pas que la barre d'outils et la barre de menus soient ancrables
	m_wndMenuBar.EnableDocking(CBRS_ALIGN_ANY);
[!else]

	// TODO: supprimez ces trois lignes si vous ne souhaitez pas que la barre d'outils soit ancrable
[!endif]
	m_wndToolBar.EnableDocking(CBRS_ALIGN_ANY);
	EnableDocking(CBRS_ALIGN_ANY);
[!if MENUBAR_TOOLBAR]
	DockPane(&m_wndMenuBar);
[!endif]
[!if MENUBAR_TOOLBAR]
	DockPane(&m_wndToolBar);
[!else]
	DockControlBar(&m_wndToolBar);
[!endif]

[!endif]
[!endif]
[!if MENUBAR_TOOLBAR || RIBBON_TOOLBAR]

	// activer le comportement de la fen�tre d'ancrage de style Visual Studio�2005
	CDockingManager::SetDockingMode(DT_SMART);
	// activer le comportement de masquage automatique de la fen�tre d'ancrage de style Visual Studio�2005
	EnableAutoHidePanes(CBRS_ALIGN_ANY);
[!if ADV_DOCKING_NAVIGATION]

	// Le volet de navigation est cr�� � gauche, donc l'ancrage � gauche est temporairement d�sactiv�:
	EnableDocking(CBRS_ALIGN_TOP | CBRS_ALIGN_BOTTOM | CBRS_ALIGN_RIGHT);

	// Cr�er et configurer la barre de navigation "Outlook"�:
	if (!CreateOutlookBar(m_wndNavigationBar, ID_VIEW_NAVIGATION, m_wndTree, m_wndCalendar, 250))
	{
		TRACE0("Impossible de cr�er le volet de navigation\n");
		return -1;      // �chec de la cr�ation
	}
[!endif]
[!if ADV_DOCKING_CAPTION]

	// Cr�er une barre de l�gende�:
	if (!CreateCaptionBar())
	{
		TRACE0("Impossible de cr�er la barre de l�gende\n");
		return -1;      // �chec de la cr�ation
	}
[!endif]
[!if ADV_DOCKING_NAVIGATION]

	// La barre Outlook est cr��e, l'ancrage � gauche doit �tre autoris�.
	EnableDocking(CBRS_ALIGN_LEFT);
	EnableAutoHidePanes(CBRS_ALIGN_RIGHT);
[!endif]
[!if ADV_DOCKING_EXPLORER || ADV_DOCKING_OUTPUT || ADV_DOCKING_PROPERTIES]
[!if ADV_DOCKING_EXPLORER]

	// Charger l'image de l'�l�ment de menu (non plac�e sur l'une des barres d'outils standard)�:
	CMFCToolBar::AddToolBarForImageCollection(IDR_MENU_IMAGES, theApp.m_bHiColorIcons ? IDB_MENU_IMAGES_24 : 0);
[!endif]

	// cr�er des fen�tres d'ancrage
	if (!CreateDockingWindows())
	{
		TRACE0("Impossible de cr�er des fen�tres d'ancrage\n");
		return -1;
	}

[!if ADV_DOCKING_EXPLORER]
	m_wndFileView.EnableDocking(CBRS_ALIGN_ANY);
	m_wndClassView.EnableDocking(CBRS_ALIGN_ANY);
	DockPane(&m_wndFileView);
	CDockablePane* pTabbedBar = NULL;
	m_wndClassView.AttachToTabWnd(&m_wndFileView, DM_SHOW, TRUE, &pTabbedBar);
[!endif]
[!if ADV_DOCKING_OUTPUT]
	m_wndOutput.EnableDocking(CBRS_ALIGN_ANY);
	DockPane(&m_wndOutput);
[!endif]
[!if ADV_DOCKING_PROPERTIES]
	m_wndProperties.EnableDocking(CBRS_ALIGN_ANY);
	DockPane(&m_wndProperties);
[!endif]

[!endif]
[!if USE_VISUAL_MANAGER]
[!if MENUBAR_TOOLBAR || RIBBON_TOOLBAR]
[!if !ENABLE_VISUAL_STYLE_SWITCHING]

	// d�finir le gestionnaire visuel utilis� pour dessiner tous les �l�ments d'interface utilisateur
	CMFCVisualManager::SetDefaultManager(RUNTIME_CLASS([!output VISUAL_MANAGER]));
[!if RIBBON_TOOLBAR]
[!if VISUAL_MANAGER_WINDOWS_7]
	m_wndRibbonBar.SetWindows7Look(TRUE);
[!endif]
[!endif]
[!if USE_VISUAL_STYLE]

	// d�finir le style visuel � utiliser par le gestionnaire visuel
	CMFCVisualManagerOffice2007::SetStyle(CMFCVisualManagerOffice2007::[!output VISUAL_STYLE]);
[!endif]
[!else]
	// d�finir le gestionnaire visuel et le style visuel en fonction d'une valeur persistante
	OnApplicationLook(theApp.m_nAppLook);
[!endif]
[!endif]
[!endif]
[!if APP_TYPE_MDI]

	// Activer la bo�te de dialogue de gestion de fen�tres avanc�e
	EnableWindowsDialog(ID_WINDOW_MANAGER, ID_WINDOW_MANAGER, TRUE);
[!endif]
[!if MENUBAR_TOOLBAR]

	// Activer le remplacement du menu de la fen�tre d'ancrage et de la barre d'outils
	EnablePaneMenu(TRUE, ID_VIEW_CUSTOMIZE, strCustomize, ID_VIEW_TOOLBAR);

	// activer la personnalisation de barre d'outils rapide (Alt+faire glisser)
	CMFCToolBar::EnableQuickCustomization();
[!if TOOLBAR_CUST_USER]

	if (CMFCToolBar::GetUserImages() == NULL)
	{
		// charger les images de barre d'outils d�finies par l'utilisateur
		if (m_UserImages.Load(_T(".\\UserImages.bmp")))
		{
			CMFCToolBar::SetUserImages(&m_UserImages);
		}
	}
[!endif]
[!if TOOLBAR_CUST_PERSONAL]

	// activer la personnalisation de menu (commandes les plus r�cemment utilis�es)
	// TODO: d�finissez vos propres commandes de base, en vous assurant que chaque menu d�roulant a au moins une commande de base.
	CList<UINT, UINT> lstBasicCommands;

[!if APP_TYPE_MDI || DOCVIEW]
	lstBasicCommands.AddTail(ID_FILE_NEW);
[!endif]
[!if DOCVIEW]
	lstBasicCommands.AddTail(ID_FILE_OPEN);
	lstBasicCommands.AddTail(ID_FILE_SAVE);
[!endif]
[!if PRINT]
	lstBasicCommands.AddTail(ID_FILE_PRINT);
[!endif]
	lstBasicCommands.AddTail(ID_APP_EXIT);
	lstBasicCommands.AddTail(ID_EDIT_CUT);
	lstBasicCommands.AddTail(ID_EDIT_PASTE);
	lstBasicCommands.AddTail(ID_EDIT_UNDO);
[!if OLEDB || ODBC]
	lstBasicCommands.AddTail(ID_RECORD_NEXT);
	lstBasicCommands.AddTail(ID_RECORD_LAST);
[!endif]
	lstBasicCommands.AddTail(ID_APP_ABOUT);
	lstBasicCommands.AddTail(ID_VIEW_STATUS_BAR);
	lstBasicCommands.AddTail(ID_VIEW_TOOLBAR);
[!if APP_TYPE_MTLD]
	lstBasicCommands.AddTail(ID_FILE_NEW_FRAME);
	lstBasicCommands.AddTail(ID_FILE_CLOSE);
[!endif]
[!if RICH_EDIT_VIEW]
	lstBasicCommands.AddTail(ID_EDIT_SELECT_ALL);
	lstBasicCommands.AddTail(ID_EDIT_FIND);
	lstBasicCommands.AddTail(ID_EDIT_REPEAT);
	lstBasicCommands.AddTail(ID_EDIT_REPLACE);
[!endif]
[!if ENABLE_VISUAL_STYLE_SWITCHING]
	lstBasicCommands.AddTail(ID_VIEW_APPLOOK_OFF_2003);
	lstBasicCommands.AddTail(ID_VIEW_APPLOOK_VS_2005);
	lstBasicCommands.AddTail(ID_VIEW_APPLOOK_OFF_2007_BLUE);
	lstBasicCommands.AddTail(ID_VIEW_APPLOOK_OFF_2007_SILVER);
	lstBasicCommands.AddTail(ID_VIEW_APPLOOK_OFF_2007_BLACK);
	lstBasicCommands.AddTail(ID_VIEW_APPLOOK_OFF_2007_AQUA);
	lstBasicCommands.AddTail(ID_VIEW_APPLOOK_WINDOWS_7);
[!endif]
[!if ADV_DOCKING_EXPLORER]
	lstBasicCommands.AddTail(ID_SORTING_SORTALPHABETIC);
	lstBasicCommands.AddTail(ID_SORTING_SORTBYTYPE);
	lstBasicCommands.AddTail(ID_SORTING_SORTBYACCESS);
	lstBasicCommands.AddTail(ID_SORTING_GROUPBYTYPE);
[!endif]
[!if CONTAINER || CONTAINER_SERVER]
	lstBasicCommands.AddTail(ID_OLE_INSERT_NEW);
[!endif]

	CMFCToolBar::SetBasicCommands(lstBasicCommands);
[!endif]
[!endif]
[!endif]
[!if APP_TYPE_MDI && APP_TYPE_TABBED_MDI]

	// Faire basculer le nom du document et le nom de l'application sur la barre de titre de la fen�tre. Cela
	// am�liore l'utilit� de la barre des t�ches, car le nom du document est visible avec la miniature.
	ModifyStyle(0, FWS_PREFIXTITLE);
[!endif]

	return 0;
}
[!else]
[!if APP_TYPE_SDI && !DOCVIEW]

int [!output MAIN_FRAME_CLASS]::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if ([!output MAIN_FRAME_BASE_CLASS]::OnCreate(lpCreateStruct) == -1)
		return -1;

	// cr�er une vue de mani�re qu'elle occupe la zone cliente du frame
	if (!m_wndView.Create(NULL, NULL, AFX_WS_DEFAULT_VIEW,
		CRect(0, 0, 0, 0), this, AFX_IDW_PANE_FIRST, NULL))
	{
		TRACE0("Impossible de cr�er la fen�tre d'affichage\n");
		return -1;
	}
	return 0;
}
[!endif]
[!endif]
[!if SPLITTER || PROJECT_STYLE_EXPLORER]
[!if APP_TYPE_SDI || APP_TYPE_MTLD]

BOOL [!output MAIN_FRAME_CLASS]::OnCreateClient(LPCREATESTRUCT /*lpcs*/,
	CCreateContext* pContext)
{
[!if PROJECT_STYLE_EXPLORER]
	// cr�er une fen�tre fractionn�e
	if (!m_wndSplitter.CreateStatic(this, 1, 2))
		return FALSE;

	if (!m_wndSplitter.CreateView(0, 0, RUNTIME_CLASS([!output TREE_VIEW_CLASS]), CSize(100, 100), pContext) ||
		!m_wndSplitter.CreateView(0, 1, RUNTIME_CLASS([!output VIEW_CLASS]), CSize(100, 100), pContext))
	{
		m_wndSplitter.DestroyWindow();
		return FALSE;
	}

	return TRUE;
[!else]
[!if HTML_VIEW || HTML_EDITVIEW]
	return m_wndSplitter.Create(this,
		2, 2,               // TODO: ajustez le nombre de lignes, de colonnes
		CSize(10, 10),      // TODO: ajustez la taille minimale du volet
		pContext, WS_CHILD | WS_VISIBLE | SPLS_DYNAMIC_SPLIT);
[!else]
	return m_wndSplitter.Create(this,
		2, 2,               // TODO: ajustez le nombre de lignes, de colonnes
		CSize(10, 10),      // TODO: ajustez la taille minimale du volet
		pContext);
[!endif]
[!endif]
}
[!endif]
[!endif]

BOOL [!output MAIN_FRAME_CLASS]::PreCreateWindow(CREATESTRUCT& cs)
{
	if( ![!output MAIN_FRAME_BASE_CLASS]::PreCreateWindow(cs) )
		return FALSE;
	// TODO: changez ici la classe ou les styles Window en modifiant
	//  CREATESTRUCT cs

[!if !MAIN_FRAME_DEFAULT_STYLES]
	cs.style = WS_OVERLAPPED | WS_CAPTION | FWS_ADDTOTITLE
		[!output MAIN_FRAME_STYLE_FLAGS];

[!endif]
[!if APP_TYPE_SDI]
[!if !DOCVIEW]
	cs.dwExStyle &= ~WS_EX_CLIENTEDGE;
	cs.lpszClass = AfxRegisterWndClass(0);
[!endif]
[!endif]
	return TRUE;
}
[!if ADV_DOCKING_EXPLORER || ADV_DOCKING_OUTPUT || ADV_DOCKING_PROPERTIES]

BOOL [!output MAIN_FRAME_CLASS]::CreateDockingWindows()
{
	BOOL bNameValid;
[!if ADV_DOCKING_EXPLORER]

	// Cr�er un affichage de classes
	CString strClassView;
	bNameValid = strClassView.LoadString(IDS_CLASS_VIEW);
	ASSERT(bNameValid);
	if (!m_wndClassView.Create(strClassView, this, CRect(0, 0, 200, 200), TRUE, ID_VIEW_CLASSVIEW, WS_CHILD | WS_VISIBLE | WS_CLIPSIBLINGS | WS_CLIPCHILDREN | CBRS_LEFT | CBRS_FLOAT_MULTI))
	{
		TRACE0("Impossible de cr�er la fen�tre Affichage de classes\n");
		return FALSE; // �chec de la cr�ation
	}

	// Cr�er un affichage des fichiers
	CString strFileView;
	bNameValid = strFileView.LoadString(IDS_FILE_VIEW);
	ASSERT(bNameValid);
	if (!m_wndFileView.Create(strFileView, this, CRect(0, 0, 200, 200), TRUE, ID_VIEW_FILEVIEW, WS_CHILD | WS_VISIBLE | WS_CLIPSIBLINGS | WS_CLIPCHILDREN | CBRS_LEFT| CBRS_FLOAT_MULTI))
	{
		TRACE0("Impossible de cr�er la fen�tre Affichage des fichiers\n");
		return FALSE; // �chec de la cr�ation
	}

[!endif]
[!if ADV_DOCKING_OUTPUT]
	// Cr�er la fen�tre Sortie
	CString strOutputWnd;
	bNameValid = strOutputWnd.LoadString(IDS_OUTPUT_WND);
	ASSERT(bNameValid);
	if (!m_wndOutput.Create(strOutputWnd, this, CRect(0, 0, 100, 100), TRUE, ID_VIEW_OUTPUTWND, WS_CHILD | WS_VISIBLE | WS_CLIPSIBLINGS | WS_CLIPCHILDREN | CBRS_BOTTOM | CBRS_FLOAT_MULTI))
	{
		TRACE0("Impossible de cr�er la fen�tre Sortie\n");
		return FALSE; // �chec de la cr�ation
	}

[!endif]
[!if ADV_DOCKING_PROPERTIES]
	// Cr�er la fen�tre Propri�t�s
	CString strPropertiesWnd;
	bNameValid = strPropertiesWnd.LoadString(IDS_PROPERTIES_WND);
	ASSERT(bNameValid);
	if (!m_wndProperties.Create(strPropertiesWnd, this, CRect(0, 0, 200, 200), TRUE, ID_VIEW_PROPERTIESWND, WS_CHILD | WS_VISIBLE | WS_CLIPSIBLINGS | WS_CLIPCHILDREN | CBRS_RIGHT | CBRS_FLOAT_MULTI))
	{
		TRACE0("Impossible de cr�er la fen�tre Propri�t�s\n");
		return FALSE; // �chec de la cr�ation
	}

[!endif]
	SetDockingWindowIcons(theApp.m_bHiColorIcons);
	return TRUE;
}

void [!output MAIN_FRAME_CLASS]::SetDockingWindowIcons(BOOL bHiColorIcons)
{
[!if ADV_DOCKING_EXPLORER]
	HICON hFileViewIcon = (HICON) ::LoadImage(::AfxGetResourceHandle(), MAKEINTRESOURCE(bHiColorIcons ? IDI_FILE_VIEW_HC : IDI_FILE_VIEW), IMAGE_ICON, ::GetSystemMetrics(SM_CXSMICON), ::GetSystemMetrics(SM_CYSMICON), 0);
	m_wndFileView.SetIcon(hFileViewIcon, FALSE);

	HICON hClassViewIcon = (HICON) ::LoadImage(::AfxGetResourceHandle(), MAKEINTRESOURCE(bHiColorIcons ? IDI_CLASS_VIEW_HC : IDI_CLASS_VIEW), IMAGE_ICON, ::GetSystemMetrics(SM_CXSMICON), ::GetSystemMetrics(SM_CYSMICON), 0);
	m_wndClassView.SetIcon(hClassViewIcon, FALSE);

[!endif]
[!if ADV_DOCKING_OUTPUT]
	HICON hOutputBarIcon = (HICON) ::LoadImage(::AfxGetResourceHandle(), MAKEINTRESOURCE(bHiColorIcons ? IDI_OUTPUT_WND_HC : IDI_OUTPUT_WND), IMAGE_ICON, ::GetSystemMetrics(SM_CXSMICON), ::GetSystemMetrics(SM_CYSMICON), 0);
	m_wndOutput.SetIcon(hOutputBarIcon, FALSE);

[!endif]
[!if ADV_DOCKING_PROPERTIES]
	HICON hPropertiesBarIcon = (HICON) ::LoadImage(::AfxGetResourceHandle(), MAKEINTRESOURCE(bHiColorIcons ? IDI_PROPERTIES_WND_HC : IDI_PROPERTIES_WND), IMAGE_ICON, ::GetSystemMetrics(SM_CXSMICON), ::GetSystemMetrics(SM_CYSMICON), 0);
	m_wndProperties.SetIcon(hPropertiesBarIcon, FALSE);

[!endif]
[!if APP_TYPE_MDI && APP_TYPE_TABBED_MDI]
	UpdateMDITabbedBarsIcons();
[!endif]
}
[!endif]
[!if ADV_DOCKING_NAVIGATION]

BOOL [!output MAIN_FRAME_CLASS]::CreateOutlookBar(CMFCOutlookBar& bar, UINT uiID, CMFCShellTreeCtrl& tree, CCalendarBar& calendar, int nInitialWidth)
{
	bar.SetMode2003();

	BOOL bNameValid;
	CString strTemp;
	bNameValid = strTemp.LoadString(IDS_SHORTCUTS);
	ASSERT(bNameValid);
	if (!bar.Create(strTemp, this, CRect(0, 0, nInitialWidth, 32000), uiID, WS_CHILD | WS_VISIBLE | CBRS_LEFT))
	{
		return FALSE; // �chec de la cr�ation
	}

	CMFCOutlookBarTabCtrl* pOutlookBar = (CMFCOutlookBarTabCtrl*)bar.GetUnderlyingWindow();

	if (pOutlookBar == NULL)
	{
		ASSERT(FALSE);
		return FALSE;
	}

	pOutlookBar->EnableInPlaceEdit(TRUE);

	static UINT uiPageID = 1;

	// peut flotter, peut se masquer automatiquement, peut se redimensionner, NE PEUT PAS SE FERMER
	DWORD dwStyle = AFX_CBRS_FLOAT | AFX_CBRS_AUTOHIDE | AFX_CBRS_RESIZE;

	CRect rectDummy(0, 0, 0, 0);
	const DWORD dwTreeStyle = WS_CHILD | WS_VISIBLE | TVS_HASLINES | TVS_LINESATROOT | TVS_HASBUTTONS;

	tree.Create(dwTreeStyle, rectDummy, &bar, 1200);
	bNameValid = strTemp.LoadString(IDS_FOLDERS);
	ASSERT(bNameValid);
	pOutlookBar->AddControl(&tree, strTemp, 2, TRUE, dwStyle);

	calendar.Create(rectDummy, &bar, 1201);
	bNameValid = strTemp.LoadString(IDS_CALENDAR);
	ASSERT(bNameValid);
	pOutlookBar->AddControl(&calendar, strTemp, 3, TRUE, dwStyle);

	bar.SetPaneStyle(bar.GetPaneStyle() | CBRS_TOOLTIPS | CBRS_FLYBY | CBRS_SIZE_DYNAMIC);

	pOutlookBar->SetImageList(theApp.m_bHiColorIcons ? IDB_PAGES_HC : IDB_PAGES, 24);
	pOutlookBar->SetToolbarImageList(theApp.m_bHiColorIcons ? IDB_PAGES_SMALL_HC : IDB_PAGES_SMALL, 16);
	pOutlookBar->RecalcLayout();

	BOOL bAnimation = theApp.GetInt(_T("OutlookAnimation"), TRUE);
	CMFCOutlookBarTabCtrl::EnableAnimation(bAnimation);

	bar.SetButtonsFont(&afxGlobalData.fontBold);

	return TRUE;
}
[!endif]
[!if ADV_DOCKING_CAPTION]

BOOL [!output MAIN_FRAME_CLASS]::CreateCaptionBar()
{
	if (!m_wndCaptionBar.Create(WS_CHILD | WS_VISIBLE | WS_CLIPSIBLINGS, this, ID_VIEW_CAPTION_BAR, -1, TRUE))
	{
		TRACE0("Impossible de cr�er la barre de l�gende\n");
		return FALSE;
	}

	BOOL bNameValid;

	CString strTemp, strTemp2;
	bNameValid = strTemp.LoadString(IDS_CAPTION_BUTTON);
	ASSERT(bNameValid);
	m_wndCaptionBar.SetButton(strTemp, ID_TOOLS_OPTIONS, CMFCCaptionBar::ALIGN_LEFT, FALSE);
	bNameValid = strTemp.LoadString(IDS_CAPTION_BUTTON_TIP);
	ASSERT(bNameValid);
	m_wndCaptionBar.SetButtonToolTip(strTemp);

	bNameValid = strTemp.LoadString(IDS_CAPTION_TEXT);
	ASSERT(bNameValid);
	m_wndCaptionBar.SetText(strTemp, CMFCCaptionBar::ALIGN_LEFT);

	m_wndCaptionBar.SetBitmap(IDB_INFO, RGB(255, 255, 255), FALSE, CMFCCaptionBar::ALIGN_LEFT);
	bNameValid = strTemp.LoadString(IDS_CAPTION_IMAGE_TIP);
	ASSERT(bNameValid);
	bNameValid = strTemp2.LoadString(IDS_CAPTION_IMAGE_TEXT);
	ASSERT(bNameValid);
	m_wndCaptionBar.SetImageToolTip(strTemp, strTemp2);

	return TRUE;
}
[!endif]

// diagnostics pour [!output MAIN_FRAME_CLASS]

#ifdef _DEBUG
void [!output MAIN_FRAME_CLASS]::AssertValid() const
{
	[!output MAIN_FRAME_BASE_CLASS]::AssertValid();
}

void [!output MAIN_FRAME_CLASS]::Dump(CDumpContext& dc) const
{
	[!output MAIN_FRAME_BASE_CLASS]::Dump(dc);
}
#endif //_DEBUG


// gestionnaires de messages pour [!output MAIN_FRAME_CLASS]
[!if APP_TYPE_SDI]
[!if !DOCVIEW]

void [!output MAIN_FRAME_CLASS]::OnSetFocus(CWnd* /*pOldWnd*/)
{
	// passe le focus � la fen�tre d'affichage
	m_wndView.SetFocus();
}

BOOL [!output MAIN_FRAME_CLASS]::OnCmdMsg(UINT nID, int nCode, void* pExtra, AFX_CMDHANDLERINFO* pHandlerInfo)
{
	// laisser la priorit� � la vue pour cette commande
	if (m_wndView.OnCmdMsg(nID, nCode, pExtra, pHandlerInfo))
		return TRUE;

	// sinon, la gestion par d�faut est utilis�e
	return [!output MAIN_FRAME_BASE_CLASS]::OnCmdMsg(nID, nCode, pExtra, pHandlerInfo);
}
[!endif]
[!endif]
[!if APP_TYPE_SDI || APP_TYPE_MTLD]
[!if PROJECT_STYLE_EXPLORER]
[!if LIST_VIEW]

[!output VIEW_CLASS]* [!output MAIN_FRAME_CLASS]::GetRightPane()
{
	CWnd* pWnd = m_wndSplitter.GetPane(0, 1);
	[!output VIEW_CLASS]* pView = DYNAMIC_DOWNCAST([!output VIEW_CLASS], pWnd);
	return pView;
}

void [!output MAIN_FRAME_CLASS]::OnUpdateViewStyles(CCmdUI* pCmdUI)
{
	if (!pCmdUI)
		return;

	// TODO: personnalisez ou �tendez ce code en vue de la gestion des options dans le menu Affichage

	[!output VIEW_CLASS]* pView = GetRightPane();

	// si le volet de droite n'a pas �t� cr�� ou n'est pas une vue,
	// d�sactiver les commandes dans notre �tendue

	if (pView == NULL)
		pCmdUI->Enable(FALSE);
	else
	{
		DWORD dwStyle = pView->GetStyle() & LVS_TYPEMASK;

		// si la commande est ID_VIEW_LINEUP, activer la commande
		// uniquement en mode LVS_ICON ou LVS_SMALLICON

		if (pCmdUI->m_nID == ID_VIEW_LINEUP)
		{
			if (dwStyle == LVS_ICON || dwStyle == LVS_SMALLICON)
				pCmdUI->Enable();
			else
				pCmdUI->Enable(FALSE);
		}
		else
		{
			// sinon, utiliser des pointill�s pour refl�ter le style de la vue
			pCmdUI->Enable();
			BOOL bChecked = FALSE;

			switch (pCmdUI->m_nID)
			{
			case ID_VIEW_DETAILS:
				bChecked = (dwStyle == LVS_REPORT);
				break;

			case ID_VIEW_SMALLICON:
				bChecked = (dwStyle == LVS_SMALLICON);
				break;

			case ID_VIEW_LARGEICON:
				bChecked = (dwStyle == LVS_ICON);
				break;

			case ID_VIEW_LIST:
				bChecked = (dwStyle == LVS_LIST);
				break;

			default:
				bChecked = FALSE;
				break;
			}

			pCmdUI->SetRadio(bChecked ? 1 : 0);
		}
	}
}

void [!output MAIN_FRAME_CLASS]::OnViewStyle(UINT nCommandID)
{
	// TODO: personnalisez ou �tendez ce code en vue de la gestion des options dans le menu Affichage
	[!output VIEW_CLASS]* pView = GetRightPane();

	// si le volet de droite a �t� cr�� et qu'il s'agit d'une vue [!output VIEW_CLASS],
	// les commandes de menu sont ex�cut�es...
	if (pView != NULL)
	{
		DWORD dwStyle = -1;

		switch (nCommandID)
		{
		case ID_VIEW_LINEUP:
			{
				// demander au contr�le List de s'aligner sur la grille
				CListCtrl& refListCtrl = pView->GetListCtrl();
				refListCtrl.Arrange(LVA_SNAPTOGRID);
			}
			break;

		// d'autres commandes changent le style du contr�le List
		case ID_VIEW_DETAILS:
			dwStyle = LVS_REPORT;
			break;

		case ID_VIEW_SMALLICON:
			dwStyle = LVS_SMALLICON;
			break;

		case ID_VIEW_LARGEICON:
			dwStyle = LVS_ICON;
			break;

		case ID_VIEW_LIST:
			dwStyle = LVS_LIST;
			break;
		}

		// changer le style et repeindre automatiquement la fen�tre
		if (dwStyle != -1)
			pView->ModifyStyle(LVS_TYPEMASK, dwStyle);
	}
}
[!endif]
[!endif]
[!endif]
[!if MENUBAR_TOOLBAR || RIBBON_TOOLBAR]
[!if APP_TYPE_MDI]

void [!output MAIN_FRAME_CLASS]::OnWindowManager()
{
	ShowWindowsDialog();
}
[!endif]
[!endif]
[!if MENUBAR_TOOLBAR]

void [!output MAIN_FRAME_CLASS]::OnViewCustomize()
{
	CMFCToolBarsCustomizeDialog* pDlgCust = new CMFCToolBarsCustomizeDialog(this, TRUE /* analyser les menus */);
[!if TOOLBAR_CUST_USER]
	pDlgCust->EnableUserDefinedToolbars();
[!endif]
	pDlgCust->Create();
}

LRESULT [!output MAIN_FRAME_CLASS]::OnToolbarCreateNew(WPARAM wp,LPARAM lp)
{
	LRESULT lres = [!output MAIN_FRAME_BASE_CLASS]::OnToolbarCreateNew(wp,lp);
	if (lres == 0)
	{
		return 0;
	}

	CMFCToolBar* pUserToolbar = (CMFCToolBar*)lres;
	ASSERT_VALID(pUserToolbar);

	BOOL bNameValid;
	CString strCustomize;
	bNameValid = strCustomize.LoadString(IDS_TOOLBAR_CUSTOMIZE);
	ASSERT(bNameValid);

	pUserToolbar->EnableCustomizeButton(TRUE, ID_VIEW_CUSTOMIZE, strCustomize);
	return lres;
}
[!endif]
[!if ENABLE_VISUAL_STYLE_SWITCHING]

void [!output MAIN_FRAME_CLASS]::OnApplicationLook(UINT id)
{
	CWaitCursor wait;

	theApp.m_nAppLook = id;

	switch (theApp.m_nAppLook)
	{
	case ID_VIEW_APPLOOK_WIN_2000:
		CMFCVisualManager::SetDefaultManager(RUNTIME_CLASS(CMFCVisualManager));
[!if RIBBON_TOOLBAR]
		m_wndRibbonBar.SetWindows7Look(FALSE);
[!endif]
		break;

	case ID_VIEW_APPLOOK_OFF_XP:
		CMFCVisualManager::SetDefaultManager(RUNTIME_CLASS(CMFCVisualManagerOfficeXP));
[!if RIBBON_TOOLBAR]
		m_wndRibbonBar.SetWindows7Look(FALSE);
[!endif]
		break;

	case ID_VIEW_APPLOOK_WIN_XP:
		CMFCVisualManagerWindows::m_b3DTabsXPTheme = TRUE;
		CMFCVisualManager::SetDefaultManager(RUNTIME_CLASS(CMFCVisualManagerWindows));
[!if RIBBON_TOOLBAR]
		m_wndRibbonBar.SetWindows7Look(FALSE);
[!endif]
		break;

	case ID_VIEW_APPLOOK_OFF_2003:
		CMFCVisualManager::SetDefaultManager(RUNTIME_CLASS(CMFCVisualManagerOffice2003));
		CDockingManager::SetDockingMode(DT_SMART);
[!if RIBBON_TOOLBAR]
		m_wndRibbonBar.SetWindows7Look(FALSE);
[!endif]
		break;

	case ID_VIEW_APPLOOK_VS_2005:
		CMFCVisualManager::SetDefaultManager(RUNTIME_CLASS(CMFCVisualManagerVS2005));
		CDockingManager::SetDockingMode(DT_SMART);
[!if RIBBON_TOOLBAR]
		m_wndRibbonBar.SetWindows7Look(FALSE);
[!endif]
		break;

	case ID_VIEW_APPLOOK_VS_2008:
		CMFCVisualManager::SetDefaultManager(RUNTIME_CLASS(CMFCVisualManagerVS2008));
		CDockingManager::SetDockingMode(DT_SMART);
[!if RIBBON_TOOLBAR]
		m_wndRibbonBar.SetWindows7Look(FALSE);
[!endif]
		break;

	case ID_VIEW_APPLOOK_WINDOWS_7:
		CMFCVisualManager::SetDefaultManager(RUNTIME_CLASS(CMFCVisualManagerWindows7));
		CDockingManager::SetDockingMode(DT_SMART);
[!if RIBBON_TOOLBAR]
		m_wndRibbonBar.SetWindows7Look(TRUE);
[!endif]
		break;

	default:
		switch (theApp.m_nAppLook)
		{
		case ID_VIEW_APPLOOK_OFF_2007_BLUE:
			CMFCVisualManagerOffice2007::SetStyle(CMFCVisualManagerOffice2007::Office2007_LunaBlue);
			break;

		case ID_VIEW_APPLOOK_OFF_2007_BLACK:
			CMFCVisualManagerOffice2007::SetStyle(CMFCVisualManagerOffice2007::Office2007_ObsidianBlack);
			break;

		case ID_VIEW_APPLOOK_OFF_2007_SILVER:
			CMFCVisualManagerOffice2007::SetStyle(CMFCVisualManagerOffice2007::Office2007_Silver);
			break;

		case ID_VIEW_APPLOOK_OFF_2007_AQUA:
			CMFCVisualManagerOffice2007::SetStyle(CMFCVisualManagerOffice2007::Office2007_Aqua);
			break;
		}

		CMFCVisualManager::SetDefaultManager(RUNTIME_CLASS(CMFCVisualManagerOffice2007));
		CDockingManager::SetDockingMode(DT_SMART);
[!if RIBBON_TOOLBAR]
		m_wndRibbonBar.SetWindows7Look(FALSE);
[!endif]
	}

[!if ADV_DOCKING_OUTPUT]
	m_wndOutput.UpdateFonts();
[!endif]
	RedrawWindow(NULL, NULL, RDW_ALLCHILDREN | RDW_INVALIDATE | RDW_UPDATENOW | RDW_FRAME | RDW_ERASE);

[!if MENUBAR_TOOLBAR || RIBBON_TOOLBAR]
	theApp.WriteInt(_T("ApplicationLook"), theApp.m_nAppLook);
[!endif]
}

void [!output MAIN_FRAME_CLASS]::OnUpdateApplicationLook(CCmdUI* pCmdUI)
{
	pCmdUI->SetRadio(theApp.m_nAppLook == pCmdUI->m_nID);
}
[!endif]
[!if ADV_DOCKING_CAPTION]

void [!output MAIN_FRAME_CLASS]::OnViewCaptionBar()
{
	m_wndCaptionBar.ShowWindow(m_wndCaptionBar.IsVisible() ? SW_HIDE : SW_SHOW);
	RecalcLayout(FALSE);
}

void [!output MAIN_FRAME_CLASS]::OnUpdateViewCaptionBar(CCmdUI* pCmdUI)
{
	pCmdUI->SetCheck(m_wndCaptionBar.IsVisible());
}

void [!output MAIN_FRAME_CLASS]::OnOptions()
{
[!if RIBBON_TOOLBAR]
	CMFCRibbonCustomizeDialog *pOptionsDlg = new CMFCRibbonCustomizeDialog(this, &m_wndRibbonBar);
	ASSERT(pOptionsDlg != NULL);

	pOptionsDlg->DoModal();
	delete pOptionsDlg;
[!endif]
}
[!endif]

[!if PANE_MENUS_ACTIVATE]
[!if ADV_DOCKING_EXPLORER]
void [!output MAIN_FRAME_CLASS]::OnViewFileView()
{
	// Affiche ou active le volet, en fonction de l'�tat actuel.  Le
	// volet peut uniquement �tre ferm� � l'aide du bouton [x] sur le cadre du volet.
	m_wndFileView.ShowPane(TRUE, FALSE, TRUE);
	m_wndFileView.SetFocus();
}

void [!output MAIN_FRAME_CLASS]::OnUpdateViewFileView(CCmdUI* pCmdUI)
{
	pCmdUI->Enable(TRUE);
}

void [!output MAIN_FRAME_CLASS]::OnViewClassView()
{
	// Affiche ou active le volet, en fonction de l'�tat actuel.  Le
	// volet peut uniquement �tre ferm� � l'aide du bouton [x] sur le cadre du volet.
	m_wndClassView.ShowPane(TRUE, FALSE, TRUE);
	m_wndClassView.SetFocus();
}

void [!output MAIN_FRAME_CLASS]::OnUpdateViewClassView(CCmdUI* pCmdUI)
{
	pCmdUI->Enable(TRUE);
}

[!endif]
[!if ADV_DOCKING_OUTPUT]
void [!output MAIN_FRAME_CLASS]::OnViewOutputWindow()
{
	// Affiche ou active le volet, en fonction de l'�tat actuel.  Le
	// volet peut uniquement �tre ferm� � l'aide du bouton [x] sur le cadre du volet.
	m_wndOutput.ShowPane(TRUE, FALSE, TRUE);
	m_wndOutput.SetFocus();
}

void [!output MAIN_FRAME_CLASS]::OnUpdateViewOutputWindow(CCmdUI* pCmdUI)
{
	pCmdUI->Enable(TRUE);
}

[!endif]
[!if ADV_DOCKING_PROPERTIES]
void [!output MAIN_FRAME_CLASS]::OnViewPropertiesWindow()
{
	// Affiche ou active le volet, en fonction de l'�tat actuel.  Le
	// volet peut uniquement �tre ferm� � l'aide du bouton [x] sur le cadre du volet.
	m_wndProperties.ShowPane(TRUE, FALSE, TRUE);
	m_wndProperties.SetFocus();
}

void [!output MAIN_FRAME_CLASS]::OnUpdateViewPropertiesWindow(CCmdUI* pCmdUI)
{
	pCmdUI->Enable(TRUE);
}

[!endif]
[!endif]
[!if APP_TYPE_MTLD || MENUBAR_TOOLBAR && TOOLBAR_CUST_USER]

BOOL [!output MAIN_FRAME_CLASS]::LoadFrame(UINT nIDResource, DWORD dwDefaultStyle, CWnd* pParentWnd, CCreateContext* pContext) 
{
	// la classe de base effectue le travail

	if (![!output MAIN_FRAME_BASE_CLASS]::LoadFrame(nIDResource, dwDefaultStyle, pParentWnd, pContext))
	{
		return FALSE;
	}

[!if APP_TYPE_MTLD]
	CWinApp* pApp = AfxGetApp();
	if (pApp->m_pMainWnd == NULL)
		pApp->m_pMainWnd = this;
[!if !RIBBON_TOOLBAR && !MENUBAR_TOOLBAR]

	// remplacer la commande Quitter du menu Fichier par la commande Fermer pour les fen�tres secondaires
	if (AfxGetApp()->m_pMainWnd != this)
	{
		CMenu *pMenu = GetMenu();
		ASSERT(pMenu);
		BOOL bNameValid;
		CString strTemp;
		bNameValid = strTemp.LoadString(IDS_CLOSE);
		ASSERT(bNameValid);
		pMenu->ModifyMenu(ID_APP_EXIT, MF_BYCOMMAND | MF_STRING, ID_FILE_CLOSE, strTemp);
	}
[!endif]
[!endif]
[!if MENUBAR_TOOLBAR && TOOLBAR_CUST_USER]

	// activer le bouton de personnalisation pour toutes les barres d'outils utilisateur
	BOOL bNameValid;
	CString strCustomize;
	bNameValid = strCustomize.LoadString(IDS_TOOLBAR_CUSTOMIZE);
	ASSERT(bNameValid);

	for (int i = 0; i < iMaxUserToolbars; i ++)
	{
		CMFCToolBar* pUserToolbar = GetUserToolBarByIndex(i);
		if (pUserToolbar != NULL)
		{
			pUserToolbar->EnableCustomizeButton(TRUE, ID_VIEW_CUSTOMIZE, strCustomize);
		}
	}
[!endif]

	return TRUE;
}

[!if APP_TYPE_MTLD]
void [!output MAIN_FRAME_CLASS]::OnFileClose()
{
	DestroyWindow();
}
[!if !DOCVIEW]

void [!output MAIN_FRAME_CLASS]::OnClose()
{
	[!output APP_CLASS] *pApp = reinterpret_cast<[!output APP_CLASS]*>(AfxGetApp());
	// fermeture de la fen�tre principale, nettoyage requis
	if (pApp->m_pMainWnd == this)
	{
		for (int iCntr=0; iCntr < pApp->m_aryFrames.GetSize(); iCntr++)
		{
			HWND hFrame = pApp->m_aryFrames.GetAt(iCntr);
			if (::IsWindow(hFrame))
				::SendMessage(hFrame, WM_CLOSE, 0, 0);
		}
	}
	CFrameWnd::OnClose();
}
[!endif]
[!endif]
[!endif]
[!if PRINTING]
[!if RIBBON_TOOLBAR]
[!if APP_TYPE_SDI || APP_TYPE_MTLD]

void [!output MAIN_FRAME_CLASS]::OnFilePrint()
{
	if (IsPrintPreview())
	{
		PostMessage(WM_COMMAND, AFX_ID_PREVIEW_PRINT);
	}
}

void [!output MAIN_FRAME_CLASS]::OnFilePrintPreview()
{
	if (IsPrintPreview())
	{
		PostMessage(WM_COMMAND, AFX_ID_PREVIEW_CLOSE);  // force la fermeture du mode d'aper�u avant impression
	}
}

void [!output MAIN_FRAME_CLASS]::OnUpdateFilePrintPreview(CCmdUI* pCmdUI)
{
	pCmdUI->SetCheck(IsPrintPreview());
}
[!endif]
[!endif]
[!endif]
[!if ADV_DOCKING_OUTPUT]

void [!output MAIN_FRAME_CLASS]::OnSettingChange(UINT uFlags, LPCTSTR lpszSection)
{
	[!output MAIN_FRAME_BASE_CLASS]::OnSettingChange(uFlags, lpszSection);
	m_wndOutput.UpdateFonts();
}
[!endif]
