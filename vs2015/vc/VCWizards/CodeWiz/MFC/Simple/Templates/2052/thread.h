#pragma once



// [!output CLASS_NAME]

class [!output CLASS_NAME] : public [!output BASE_CLASS]
{
	DECLARE_DYNCREATE([!output CLASS_NAME])

protected:
	[!output CLASS_NAME]();           // 动态创建所使用的受保护的构造函数
	virtual ~[!output CLASS_NAME]();

public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();
[!if AUTOMATION || CREATABLE]
	virtual void OnFinalRelease();
[!endif]

protected:
	DECLARE_MESSAGE_MAP()
[!if CREATABLE]
	DECLARE_OLECREATE([!output CLASS_NAME])
[!endif]
[!if AUTOMATION || CREATABLE]
	DECLARE_DISPATCH_MAP()
	DECLARE_INTERFACE_MAP()
[!endif]
};


