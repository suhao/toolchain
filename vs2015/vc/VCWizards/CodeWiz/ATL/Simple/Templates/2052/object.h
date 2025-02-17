// [!output HEADER_FILE] : [!output CLASS_NAME] 的声明

#pragma once
[!if !DEVICE]
#include "resource.h"       // 主符号
[!else]
#ifdef STANDARDSHELL_UI_MODEL
#include "resource.h"
#endif
#ifdef POCKETPC2003_UI_MODEL
#include "resourceppc.h"
#endif
#ifdef SMARTPHONE2003_UI_MODEL
#include "resourcesp.h"
#endif
#ifdef AYGSHELL_UI_MODEL
#include "resourceayg.h"
#endif
[!endif]

[!if ADD_HANDLER_SUPPORT]
[!if PREVIEW_HANDLER && !HANDLER_DOCUMENT_NAME_SPECIFIED || PREVIEW_HANDLER && !HANDLER_VIEW_NAME_SPECIFIED || !MFC_SUPPORT]
#define AFX_PREVIEW_STANDALONE
[!endif]
#include <atlhandler.h>
#include <atlhandlerimpl.h>
[!if PREVIEW_HANDLER && HANDLER_VIEW_NAME_SPECIFIED && HANDLER_DOCUMENT_NAME_SPECIFIED]
#include <afxext.h>
[!endif]
[!if HANDLER_DOCUMENT_HEADER_SPECIFIED && !HANDLER_ATL_DOC_HEADER_FILE_SPECIFIED]
#include "[!output HANDLER_DOCUMENT_FILE_NAME_TRIMMED]"
[!endif]
[!if HANDLER_VIEW_HEADER_SPECIFIED && !HANDLER_ATL_DOC_HEADER_FILE_SPECIFIED]
#include "[!output HANDLER_VIEW_FILE_NAME_TRIMMED]"
[!endif]
[!endif]

[!if HANDLER_ATL_DOC_HEADER_FILE_SPECIFIED && !HANDLER_DOCUMENT_HEADER_SPECIFIED]
#include "[!output HANDLER_ATL_DOC_HEADER_FILE_TRIMMED]"
[!endif]

[!if !ATTRIBUTED]
#include "[!output MIDL_H_FILENAME]"
[!if CONNECTION_POINTS]
#include "_[!output INTERFACE_NAME]Events_CP.h"
[!endif]
[!endif]

[!if ADD_HANDLER_SUPPORT && PREVIEW_HANDLER && !HANDLER_VIEW_NAME_SPECIFIED && !MFC_SUPPORT]
#include <atlpreviewctrlimpl.h>
[!endif]

[!if THREADING_SINGLE || THREADING_APARTMENT || THREADING_BOTH]

#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Windows CE 平台(如不提供完全 DCOM 支持的 Windows Mobile 平台)上无法正确支持单线程 COM 对象。定义 _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA 可强制 ATL 支持创建单线程 COM 对象实现并允许使用其单线程 COM 对象实现。rgs 文件中的线程模型已被设置为“Free”，原因是该模型是非 DCOM Windows CE 平台支持的唯一线程模型。"
#endif
[!endif]
[!if THREADING_NEUTRAL]
#ifdef _WIN32_WCE
#error "Windows CE 上不支持非特定语言线程的 COM 对象。"
#endif
[!endif]

using namespace ATL;
[!if ATTRIBUTED]

// [!output INTERFACE_NAME]
[
	object,
	uuid("[!output INTERFACE_IID]"),
[!if INTERFACE_DUAL]	
	dual,
[!endif]
[!if AUTOMATION]
	oleautomation,
[!endif]
[!if INTERFACE_DUAL]
[!if AUTOMATION]
	nonextensible,
[!endif]
[!endif]	
	pointer_default(unique)
]
__interface [!output INTERFACE_NAME] : [!if INTERFACE_DUAL]IDispatch[!else]IUnknown[!endif]

{
};

[!if CONNECTION_POINTS]

// _[!output INTERFACE_NAME]Events
[
	dispinterface,
	uuid("[!output CONNECTION_POINT_IID]")	
]
__interface _[!output INTERFACE_NAME]Events
{
};
[!endif]
[!endif]

[!if ADD_HANDLER_SUPPORT && PREVIEW_HANDLER && !HANDLER_VIEW_NAME_SPECIFIED]
// [!output CLASS_NAME]Ctrl 实现
[!if MFC_SUPPORT]
class [!output CLASS_NAME]Ctrl : public IPreviewCtrl
{
protected:
	virtual void DoPaint(CPaintDC* pDC)
	{
		// 如果 CMyDoc 派生自 CDocument，则可以获取指向 IDocument 的指针，如下所示
		// CMyDoc* pDoc = (CMyDoc*)m_pDocument->GetContainer();

		CRect rectClient;
		GetClientRect(rectClient);
		pDC->FillSolidRect(rectClient, m_clrBackColor);

		CString strData = _T("在此处绘制丰富的预览内容。");
		pDC->TextOut(10, 20, strData, strData.GetLength());
	}
};
[!else]
class [!output CLASS_NAME]Ctrl : public CAtlPreviewCtrlImpl
{
protected:
	virtual void DoPaint(HDC hdc)
	{
		// 可以获取指向 IDocument 的指针，如下所示
		// CMyDoc* pDoc = (CMyDoc*)m_pDocument;
		CString strData = _T("在此处绘制丰富的预览内容。");
		TextOut(hdc, 10, 20, strData, strData.GetLength());
	}
};
[!endif]
[!endif]

// [!output CLASS_NAME]

[!if ATTRIBUTED]
[
	coclass,
	default([!output INTERFACE_NAME][!if CONNECTION_POINTS], _[!output INTERFACE_NAME]Events[!endif]),
[!if THREADING_SINGLE]
	threading(single),
[!endif]
[!if THREADING_APARTMENT]
	threading(apartment),
[!endif]
[!if THREADING_BOTH]
	threading(both),
[!endif]
[!if THREADING_FREE]
	threading(free),
[!endif]
[!if THREADING_NEUTRAL]
	threading(neutral),
[!endif]
[!if SUPPORT_ERROR_INFO]
	support_error_info("[!output INTERFACE_NAME]"),
[!endif]
[!if CONNECTION_POINTS]
	event_source(com),
[!endif]
[!if AGGREGATION_NO]
	aggregatable(never),
[!endif]
[!if AGGREGATION_ONLY]
	aggregatable(always),
[!endif]
[!if PROGID_VALID]
	vi_progid("[!output VERSION_INDEPENDENT_PROGID]"),
	progid("[!output PROGID]"),
[!endif]
	version(1.0),
	uuid("[!output CLSID_REGISTRY_FORMAT]")	
]
[!endif]
class ATL_NO_VTABLE [!output CLASS_NAME] :
[!if ATTRIBUTED]
[!if OBJECT_WITH_SITE]
	public IObjectWithSiteImpl<[!output CLASS_NAME]>,
[!endif]
	public [!output INTERFACE_NAME]
[!else]
[!if THREADING_SINGLE]
	public CComObjectRootEx<CComSingleThreadModel>,
[!endif]
[!if THREADING_APARTMENT]
	public CComObjectRootEx<CComSingleThreadModel>,
[!endif]
[!if THREADING_FREE]
	public CComObjectRootEx<CComMultiThreadModel>,
[!endif]
[!if THREADING_BOTH]
	public CComObjectRootEx<CComMultiThreadModel>,
[!endif]
[!if THREADING_NEUTRAL]
	public CComObjectRootEx<CComMultiThreadModel>,
[!endif]
	public CComCoClass<[!output CLASS_NAME], &CLSID_[!output COCLASS]>,
[!if SUPPORT_ERROR_INFO]
	public ISupportErrorInfo,
[!endif]
[!if CONNECTION_POINTS]
	public IConnectionPointContainerImpl<[!output CLASS_NAME]>,
	public CProxy_[!output INTERFACE_NAME]Events<[!output CLASS_NAME]>,
[!endif]
[!if OBJECT_WITH_SITE]
	public IObjectWithSiteImpl<[!output CLASS_NAME]>,
[!endif]
[!if !ADD_HANDLER_SUPPORT]
[!if INTERFACE_DUAL]
	public IDispatchImpl<[!output INTERFACE_NAME], &IID_[!output INTERFACE_NAME], &LIBID_[!output LIB_NAME], /*wMajor =*/ [!output TYPELIB_VERSION_MAJOR], /*wMinor =*/ [!output TYPELIB_VERSION_MINOR]>
[!else]
	public [!output INTERFACE_NAME]
[!endif]
[!else]
[!if ADD_HANDLER_SUPPORT && PREVIEW_HANDLER]
	public CPreviewHandlerImpl <[!output CLASS_NAME]>
[!endif]
[!if ADD_HANDLER_SUPPORT && SEARCH_HANDLER]
	public CSearchFilterImpl
[!endif]
[!if ADD_HANDLER_SUPPORT && THUMBNAIL_PROVIDER_HANDLER]
	public CThumbnailProviderImpl
[!endif]
[!endif]
[!endif]
{
public:
	[!output CLASS_NAME]()
	{
[!if FREE_THREADED_MARSHALER]
		m_pUnkMarshaler = NULL;
[!endif]
	}

[!if !ATTRIBUTED]
[!if !DEVICE]
DECLARE_REGISTRY_RESOURCEID([!output RGS_ID])
[!else]
[!if SUPPORT_NON_DCOM]
#ifndef _CE_DCOM
DECLARE_REGISTRY_RESOURCEID([!output RGS_ID])
#endif
[!endif]
[!if SUPPORT_DCOM]
#ifdef _CE_DCOM
DECLARE_REGISTRY_RESOURCEID([!output RGSDCOM_ID])
#endif
[!endif]
[!endif]

[!if AGGREGATION_NO]
DECLARE_NOT_AGGREGATABLE([!output CLASS_NAME])
[!endif]
[!if AGGREGATION_ONLY]
DECLARE_ONLY_AGGREGATABLE([!output CLASS_NAME])
[!endif]

BEGIN_COM_MAP([!output CLASS_NAME])
[!if !ADD_HANDLER_SUPPORT]
	COM_INTERFACE_ENTRY([!output INTERFACE_NAME])
[!endif]
[!if INTERFACE_DUAL]
	COM_INTERFACE_ENTRY(IDispatch)
[!endif]
[!if SUPPORT_ERROR_INFO]
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
[!endif]
[!if CONNECTION_POINTS]
	COM_INTERFACE_ENTRY(IConnectionPointContainer)
[!endif]
[!if OBJECT_WITH_SITE]
	COM_INTERFACE_ENTRY(IObjectWithSite)
[!endif]
[!if FREE_THREADED_MARSHALER]
	COM_INTERFACE_ENTRY_AGGREGATE(IID_IMarshal, m_pUnkMarshaler.p)
[!endif]
[!if ADD_HANDLER_SUPPORT && PREVIEW_HANDLER]
[!if !OBJECT_WITH_SITE]
	COM_INTERFACE_ENTRY(IObjectWithSite)
[!endif]
	COM_INTERFACE_ENTRY(IOleWindow)
	COM_INTERFACE_ENTRY(IInitializeWithStream)
	COM_INTERFACE_ENTRY(IPreviewHandler)
	COM_INTERFACE_ENTRY(IPreviewHandlerVisuals)
[!endif]
[!if ADD_HANDLER_SUPPORT && SEARCH_HANDLER]
	COM_INTERFACE_ENTRY(IPersistStream)
	COM_INTERFACE_ENTRY(IPersistFile)
	COM_INTERFACE_ENTRY(IFilter)
[!endif]
[!if ADD_HANDLER_SUPPORT && THUMBNAIL_PROVIDER_HANDLER]
	COM_INTERFACE_ENTRY(IInitializeWithStream)
	COM_INTERFACE_ENTRY(IThumbnailProvider)
[!endif]
END_COM_MAP()

[!if CONNECTION_POINTS]
BEGIN_CONNECTION_POINT_MAP([!output CLASS_NAME])
	CONNECTION_POINT_ENTRY(__uuidof(_[!output INTERFACE_NAME]Events))
END_CONNECTION_POINT_MAP()
[!endif]
[!if SUPPORT_ERROR_INFO]
// ISupportsErrorInfo
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);
[!endif]
[!else]
[!if CONNECTION_POINTS]
	__event __interface _[!output INTERFACE_NAME]Events;
[!endif]
[!endif]

[!if FREE_THREADED_MARSHALER]

	DECLARE_PROTECT_FINAL_CONSTRUCT()
	DECLARE_GET_CONTROLLING_UNKNOWN()

	HRESULT FinalConstruct()
	{
		return CoCreateFreeThreadedMarshaler(
			GetControllingUnknown(), &m_pUnkMarshaler.p);
	}

	void FinalRelease()
	{
[!if ADD_HANDLER_SUPPORT && PREVIEW_HANDLER]
		CPreviewHandlerImpl<[!output CLASS_NAME]>::FinalRelease();
[!endif]
[!if ADD_HANDLER_SUPPORT && SEARCH_HANDLER]
		CSearchFilterImpl::FinalRelease();
[!endif]
[!if ADD_HANDLER_SUPPORT && THUMBNAIL_PROVIDER_HANDLER]
		CThumbnailProviderImpl::FinalRelease();
[!endif]
		m_pUnkMarshaler.Release();
	}

	CComPtr<IUnknown> m_pUnkMarshaler;
[!else]

	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		return S_OK;
	}

	void FinalRelease()
	{
[!if ADD_HANDLER_SUPPORT && PREVIEW_HANDLER]
		CPreviewHandlerImpl<[!output CLASS_NAME]>::FinalRelease();
[!endif]
[!if ADD_HANDLER_SUPPORT && SEARCH_HANDLER]
		CSearchFilterImpl::FinalRelease();
[!endif]
[!if ADD_HANDLER_SUPPORT && THUMBNAIL_PROVIDER_HANDLER]
		CThumbnailProviderImpl::FinalRelease();
[!endif]
	}
[!endif]

public:
[!if ADD_HANDLER_SUPPORT && SEARCH_HANDLER]
	// IPersistStream 实现
	IFACEMETHODIMP GetClassID(CLSID* pClassID)
	{
		*pClassID = CLSID_[!output COCLASS];
		return S_OK;
	};
[!endif]

[!if ADD_HANDLER_SUPPORT && PREVIEW_HANDLER]
protected:
[!if !HANDLER_VIEW_NAME_SPECIFIED]
	virtual IPreviewCtrl* CreatePreviewControl()
	{
		// 此类在此标头的开始位置定义
		[!output CLASS_NAME]Ctrl *pPreviewCtrl = NULL;
		ATLTRY(pPreviewCtrl = new [!output CLASS_NAME]Ctrl());
		return pPreviewCtrl;
	}
[!else]
[!if MFC_SUPPORT]
	virtual IPreviewCtrl* CreatePreviewControl()
	{
		// 在此处创建预览控件
		CMFCPreviewCtrlImpl *pPreviewCtrl = NULL;
		ATLTRY(pPreviewCtrl = new CMFCPreviewCtrlImpl());
		return pPreviewCtrl;
	}
[!else]
	virtual IPreviewCtrl* CreatePreviewControl()
	{
		// 从 IPreviewCtrl 派生一个类并在此对其进行实例化
		return NULL;
	}
[!endif]
[!endif]
[!endif]

[!if ADD_HANDLER_SUPPORT && THUMBNAIL_PROVIDER_HANDLER]
protected:
	virtual HRESULT GetBitmap(UINT cx, HBITMAP *phbmp, WTS_ALPHATYPE *pdwAlpha)
	{
[!if HANDLER_DOCUMENT_NAME_SPECIFIED || HANDLER_ATL_DOC_CLASS_NAME_SPECIFIED]
		if (m_pDocument == NULL)
		{
			return E_NOTIMPL;
		}

		// 实现 IDocument 派生类中的 OnDrawThumbnail
		static int const nDocDimensions = 256;
		DWORD dwAlpha = 0;
		if (!m_pDocument->GetThumbnail(nDocDimensions, phbmp, pdwAlpha))
		{
			return E_FAIL;
		}
[!else]
		// 修改此代码并根据文档数据创建位图
		static int const nDocDimensions = 256;
[!if MFC_SUPPORT]
		HDC hdc = ::GetDC(NULL);
		CDC* pDC = CDC::FromHandle(hdc);
		CDC dc;
		CDC* pDrawDC = pDC;
		CBitmap* pOldBitmap = NULL;
		CBitmap bitmap;

		// 此时您需要计算要在 Live Icon 上显示的文档区域
		CRect rectDocBounds = CRect(0, 0, nDocDimensions, nDocDimensions);

		if (dc.CreateCompatibleDC(pDC))
		{
			if (bitmap.CreateCompatibleBitmap(pDC, rectDocBounds.Width(), rectDocBounds.Height()))
			{
				pDrawDC = &dc;
				pOldBitmap = dc.SelectObject(&bitmap);
			}
		}
		else
		{
			::ReleaseDC(NULL, hdc);
			return E_FAIL;
		}

		dc.SelectObject(&bitmap);

		// 此时您需要绘制文档的数据
		pDrawDC->FillSolidRect(rectDocBounds, RGB (255, 255, 255));
		CString strText = _T("TODO:  在此处实现缩略图绘制");

		LOGFONT lf;

		CFont* pDefaultGUIFont = CFont::FromHandle((HFONT)GetStockObject(DEFAULT_GUI_FONT));
		pDefaultGUIFont->GetLogFont(&lf);
		lf.lfHeight = 36;

		CFont fontDraw;
		fontDraw.CreateFontIndirect(&lf);

		CFont* pOldFont = pDrawDC->SelectObject(&fontDraw);
		pDrawDC->DrawText(strText, rectDocBounds, DT_CENTER | DT_WORDBREAK);
		pDrawDC->SelectObject(pOldFont);

		if (pDrawDC != pDC)
		{
			dc.SelectObject(pOldBitmap);
		}

		::ReleaseDC (NULL, hdc);
		*phbmp = (HBITMAP)bitmap.Detach ();
[!else]
		HDC hdc = ::GetDC(NULL);
		RECT rcBounds;

		SetRect(&rcBounds, 0, 0, nDocDimensions, nDocDimensions);

		HDC hDrawDC = CreateCompatibleDC(hdc);
		if (hDrawDC == NULL)
		{
			ReleaseDC(NULL, hdc);
			return E_FAIL;
		}

		HBITMAP hBmp = CreateCompatibleBitmap(hDrawDC, nDocDimensions, nDocDimensions);
		if (hBmp == NULL)
		{
			ReleaseDC(NULL, hdc);
			DeleteDC(hDrawDC);
			return E_FAIL;
		}

		HBITMAP hOldBitmap = (HBITMAP) SelectObject(hDrawDC, hBmp);

		// 此时您需要绘制文档的数据
		HBRUSH hDrawBrush = CreateSolidBrush(RGB(255, 255, 255));
		FillRect(hDrawDC, &rcBounds, hDrawBrush);
		

		HFONT hStockFont = (HFONT) GetStockObject(DEFAULT_GUI_FONT);
		LOGFONT lf;

		GetObject(hStockFont, sizeof(LOGFONT), &lf);
		lf.lfHeight = 34;

		HFONT hDrawFont = CreateFontIndirect(&lf);
		HFONT hOldFont = (HFONT) SelectObject(hDrawDC, hDrawFont);

		CString strText = _T("TODO:  在此处实现缩略图绘制");
		DrawText(hDrawDC, strText, strText.GetLength(), &rcBounds, DT_CENTER | DT_WORDBREAK);

		SelectObject(hDrawDC, hDrawFont);
		SelectObject(hDrawDC, hOldFont);
		SelectObject(hDrawDC, hOldBitmap);

		DeleteObject(hDrawBrush);
		DeleteObject(hDrawFont);
		DeleteDC(hDrawDC);
		ReleaseDC(NULL, hdc);

		*phbmp = hBmp;
[!endif]
[!endif]
		return S_OK;
		
	}
[!endif]

[!if ADD_HANDLER_SUPPORT]
[!if !HANDLER_DOCUMENT_NAME_SPECIFIED || HANDLER_GEN_ATL_DOC || HANDLER_ATL_DOC_CLASS_NAME_SPECIFIED]
protected:
	virtual IDocument* CreateDocument()
	{
[!if HANDLER_ATL_DOC_CLASS_NAME_SPECIFIED]
		[!output HANDLER_ATL_DOC_CLASS_NAME] *pDocument = NULL;
		ATLTRY(pDocument = new [!output HANDLER_ATL_DOC_CLASS_NAME]());
		return pDocument;
[!else]
		// 在此处修改此代码并创建文档
		return NULL;
[!endif]
	}
[!else]
[!if MFC_SUPPORT]
	DECLARE_DOCUMENT([!output HANDLER_DOCUMENT_NAME_TRIMMED])
[!else]
	virtual IDocument* CreateDocument()
	{
		[!output HANDLER_DOCUMENT_NAME_TRIMMED] *pDocument = NULL;
		ATLTRY(pDocument = new [!output HANDLER_DOCUMENT_NAME_TRIMMED]());
		return pDocument;
	}
[!endif]
[!endif]

[!if PREVIEW_HANDLER && HANDLER_VIEW_NAME_SPECIFIED && HANDLER_DOCUMENT_NAME_SPECIFIED && MFC_SUPPORT]
public:
	virtual HRESULT InitializeDocumentPreview(HWND hWndParent, RECT* prc)
	{
		m_pPreviewCtrl = CreatePreviewControl();
		CMFCPreviewCtrlImpl* pCtrl = DYNAMIC_DOWNCAST(CMFCPreviewCtrlImpl, (CObject*) m_pPreviewCtrl);
		if (pCtrl == NULL)
		{
			ATLTRACE2(atlTraceGeneral, 4, L"InitializeDocumentPreview: 指向预览控件的指针为 NULL。\n"); 
			return E_POINTER;
		}
		
		ASSERT_VALID(pCtrl); 
		
		CCreateContext ctx;
		ctx.m_pNewViewClass = RUNTIME_CLASS([!output HANDLER_VIEW_NAME_TRIMMED]);
		
		m_pDocument = CreateDocument();
		
		if (m_pDocument == NULL) 
		{
			ATLTRACE2(atlTraceGeneral, 4, L"InitializeDocumentPreview: 指向文档的指针为 NULL。\n"); 
			return E_POINTER;
		}

		m_pDocument->AddRef();
		ctx.m_pCurrentDoc = DYNAMIC_DOWNCAST([!output HANDLER_DOCUMENT_NAME_TRIMMED], (CObject*) m_pDocument->GetContainer());
		
		if (!pCtrl->Create(hWndParent, prc, &ctx))
		{
			ATLTRACE2(atlTraceGeneral, 4, L"InitializeDocumentPreview: 预览控件创建失败。错误代码: %d\n", GetLastError()); 
			return E_FAIL;
		}
		return S_OK;
	}
[!endif]
[!endif]
};

[!if !ATTRIBUTED]
OBJECT_ENTRY_AUTO(__uuidof([!output COCLASS]), [!output CLASS_NAME])
[!endif]
