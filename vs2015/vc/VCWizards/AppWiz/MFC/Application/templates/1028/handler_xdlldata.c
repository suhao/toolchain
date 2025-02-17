// dlldata.c 的包裝函式

#define REGISTER_PROXY_DLL //DllRegisterServer 等

#define _WIN32_WINNT 0x0500	//適用於搭配 DCOM 的 WinNT 4.0 或 Win95
#define USE_STUBLESS_PROXY	//僅對 MIDL 參數 /Oicf 定義

#pragma comment(lib, "rpcns4.lib")
#pragma comment(lib, "rpcrt4.lib")

#define ENTRY_PREFIX	Prx

#include "dlldata.c"
#include "[!output SAFE_IDL_NAME]_p.c"
