// [!output PROJECT_NAME].cpp : Implementation of DLL Exports.

#include "stdafx.h"
#include "resource.h"
#include "[!output SAFE_IDL_NAME]_i.h"
#include "dllmain.h"
#include "xdlldata.h"

[!if PREVIEW_HANDLER]
#include "PreviewHandler.h"
[!endif]
[!if THUMBNAIL_HANDLER]
#include "ThumbnailHandler.h"
[!endif]
[!if SEARCH_HANDLER]
#include "FilterHandler.h"
[!endif]

// Used to determine whether the DLL can be unloaded by OLE.
STDAPI DllCanUnloadNow(void)
{
	HRESULT hr = PrxDllCanUnloadNow();
	if (hr != S_OK)
		return hr;
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	return (AfxDllCanUnloadNow()==S_OK && _AtlModule.GetLockCount()==0) ? S_OK : S_FALSE;
}

// Returns a class factory to create an object of the requested type.
STDAPI DllGetClassObject(REFCLSID rclsid, REFIID riid, LPVOID* ppv)
{
	if (PrxDllGetClassObject(rclsid, riid, ppv) == S_OK)
		return S_OK;
	return _AtlModule.DllGetClassObject(rclsid, riid, ppv);
}

// DllRegisterServer - Adds entries to the system registry.
STDAPI DllRegisterServer(void)
{
	// registers object, typelib and all interfaces in typelib
	HRESULT hr = _AtlModule.DllRegisterServer();
	if (FAILED(hr))
		return hr;
	hr = PrxDllRegisterServer();
	return hr;
}

// DllUnregisterServer - Removes entries from the system registry.
STDAPI DllUnregisterServer(void)
{
	HRESULT hr = _AtlModule.DllUnregisterServer();
	if (FAILED(hr))
		return hr;
	hr = PrxDllRegisterServer();
	if (FAILED(hr))
		return hr;
	hr = PrxDllUnregisterServer();
	return hr;
}

// DllInstall - Adds/Removes entries to the system registry per user per machine.
STDAPI DllInstall(BOOL bInstall, LPCWSTR pszCmdLine)
{
	HRESULT hr = E_FAIL;
	static const wchar_t szUserSwitch[] = _T("user");

	if (pszCmdLine != NULL)
	{
		if (_wcsnicmp(pszCmdLine, szUserSwitch, _countof(szUserSwitch)) == 0)
		{
			ATL::AtlSetPerUserRegistration(true);
		}
	}

	if (bInstall)
	{	
		hr = DllRegisterServer();
		if (FAILED(hr))
		{
			DllUnregisterServer();
		}
	}
	else
	{
		hr = DllUnregisterServer();
	}

	return hr;
}
