﻿========================================================================
    活动模板库：[!output PROJECT_NAME] 项目概述
========================================================================

应用程序向导已为您创建了此 [!output PROJECT_NAME] 项目，作为编写动态链接库 (DLL) 的起点。

本文件概要介绍组成项目的每个文件的内容。

[!output PROJECT_NAME].vcxproj
    这是使用应用程序向导生成的 VC++ 项目的主项目文件，其中包含生成该文件的 Visual C++ 的版本信息，以及有关使用应用程序向导选择的平台、配置和项目功能的信息。

[!output PROJECT_NAME].vcxproj.filters
    这是使用“应用程序向导”生成的 VC++ 项目筛选器文件。它包含有关项目文件与筛选器之间的关联信息。在 IDE 中，通过这种关联，在特定节点下以分组形式显示具有相似扩展名的文件。例如，“.cpp”文件与“源文件”筛选器关联。

[!output SAFE_IDL_NAME].idl
    此文件包含项目中定义的类型库、接口和组件类的 IDL 定义。
    此文件将由 MIDL 编译器处理，用于生成：
        C++ 接口定义和 GUID 声明 ([!output SAFE_IDL_NAME].h)
        GUID 定义                                ([!output SAFE_IDL_NAME]_i.c)
        类型库                                  ([!output SAFE_IDL_NAME].tlb)
        封送处理代码                                 （[!output SAFE_IDL_NAME]_p.c 和 dlldata.c）

[!output SAFE_IDL_NAME].h
    此文件包含 [!output SAFE_IDL_NAME].idl 中定义的项目的 C++ 接口定义和 GUID 声明。它将在编译过程中由 MIDL 重新生成。

[!output PROJECT_NAME].cpp
    此文件包含对象映射和 DLL 导出的实现。

[!output PROJECT_NAME].rc
    这是程序使用的所有 Microsoft Windows 资源的列表。

[!if DLL_APP]
[!output PROJECT_NAME].def
    此模块定义文件为链接器提供有关 DLL 所要求的导出的信息，它包含用于以下内容的导出：
        DllGetClassObject
        DllCanUnloadNow
        DllRegisterServer
        DllUnregisterServer
        DllInstall
[!endif]

/////////////////////////////////////////////////////////////////////////////
其他标准文件:

StdAfx.h, StdAfx.cpp
    这些文件用于生成名为 [!output PROJECT_NAME].pch 的预编译头 (PCH) 文件和名为 StdAfx.obj 的预编译类型文件。

Resource.h
    这是用于定义资源 ID 的标准头文件。

/////////////////////////////////////////////////////////////////////////////
其他注释:

	“MFC 支持”选项可用于将 Microsoft 基础类库构建到您的主干应用程序中，从而让您能够使用 MFC 类、对象和函数。
/////////////////////////////////////////////////////////////////////////////
