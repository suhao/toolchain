//
// Copyright (C) Microsoft Corporation
// All rights reserved.
//
// Code in Details namespace is for internal usage within the library code
//

#ifndef _WRL_MODULE_H_
#define _WRL_MODULE_H_

#ifdef _MSC_VER
#pragma once
#endif  // _MSC_VER

#include <roapi.h>
#ifdef BUILD_WINDOWS
#include <winrt.h>
#endif
#include <activation.h>
#include <WinString.h>
#include <intrin.h>

#include <wrl\def.h>
#include <wrl\internal.h>
#include <wrl\client.h>
#include <wrl\implements.h>
#include <wrl\ftm.h>
#include <wrl\wrappers\corewrappers.h>

#pragma pack(push)
// Set packing to default for the platform
#pragma pack()

namespace Microsoft {
namespace WRL {

enum ModuleType
{
    InProc                   = 0x1,  // inproc server,
    OutOfProc                = 0x2,  // outproc server
    DisableCaching           = 0x4,   // disable caching mechanism on Module<>
    InProcDisableCaching     = InProc | DisableCaching,
    OutOfProcDisableCaching  = OutOfProc | DisableCaching
};

enum FactoryCacheFlags
{
    FactoryCacheDefault,
    FactoryCacheEnabled,
    FactoryCacheDisabled
};

namespace Details
{

// Keep information about factory and cookie data
struct FactoryCache
{
    IUnknown* factory;
    union {
        RO_REGISTRATION_COOKIE winrt;
        DWORD com;
    } cookie;
};

// Map contains information how to initialize, register and unregister objects
// 
// How to compare activation data depending on classic COM or WinRT factory
// Keeps information about factory cache, server name for interface
struct CreatorMap
{
    // Factory creator function
    HRESULT (STDMETHODCALLTYPE *factoryCreator)(unsigned int*, const CreatorMap*, REFIID, IUnknown**) throw();
    // Object id
    union {
        const IID* clsid;
        const wchar_t* (STDMETHODCALLTYPE *getRuntimeName)();
    } activationId;
    // Trust level for WinRT otherwise nullptr
    TrustLevel (STDMETHODCALLTYPE *getTrustLevel)();
    // Factory cache, group id data members
    FactoryCache* factoryCache;
    const wchar_t* serverName;
};

class FactoryBase
{
};

// Compare server name strings
inline bool IsServerNameEqual(_In_ const CreatorMap* entry, const wchar_t* serverName) throw()
{
    if (serverName == nullptr)
    {
        return true;
    }
    else if (entry->serverName == nullptr)
    {
        return false;
    }    
    
    return ::wcscmp(entry->serverName, serverName) == 0;
}

// Terminate class factories stored in the cache
inline bool TerminateMap(_In_ ModuleBase *module, _In_opt_z_ const wchar_t *serverName, bool forceTerminate) throw()
{
    auto entry = module->GetFirstEntryPointer() + 1;
    auto last = module->GetLastEntryPointer();

    // Walk the linker generated list of pointers to CreatorMap
    // It's neccessary to start from COM objects and ends with WinRT
    for (; entry < last; entry++)
    {
        // Linker generated list can have null pointer values
        if (*entry != nullptr && IsServerNameEqual(*entry, serverName))
        {
            // We should not terminate cache if we have objects alive
            if (module->GetObjectCount() > 0 && !forceTerminate)
            {
                return false;
            }

            if (static_cast<IUnknown* volatile&>((*entry)->factoryCache->factory) == nullptr)
            {
                continue;
            }

            // Make sure that nobody is taking object from cache when we terminate factories
            void* factoryPointer = nullptr;
            { //Open scope for lock
                auto lock = ::Microsoft::WRL::Wrappers::SRWLock::LockExclusive(module->GetLock());

                // Don't need read memory barrier because lock adds one
                if ((*entry)->factoryCache->factory == nullptr)
                {
                    continue;
                }

                factoryPointer = (*entry)->factoryCache->factory;
                (*entry)->factoryCache->factory = nullptr;
            } // End of lock scope

            __WRL_ASSERT__(factoryPointer != nullptr);
            IUnknown *factory = reinterpret_cast<IUnknown*>(::DecodePointer(factoryPointer));
            _Analysis_assume_(factory != nullptr);
            factory->Release();
        }
    }

    return module->GetObjectCount() == 0 ? true : false;
}

// Gets the factory from the cache entry and if not avalible create one.
inline HRESULT GetCacheEntry(_In_ ModuleBase* module, _In_ unsigned int *flags, REFIID riid, _In_ const CreatorMap* entry, _Outptr_result_nullonfailure_ IUnknown **ppFactory) throw()
{
    *ppFactory = nullptr;

    IUnknown *factory = nullptr;

    // Check if the object is avalible in the cache
    if (static_cast<IUnknown* volatile&>(entry->factoryCache->factory) != nullptr)
    { // Read lock scope
        // Make sure that none of factories will be destroyed when WRL gets element from cache
        auto readLock = ::Microsoft::WRL::Wrappers::SRWLock::LockShared(module->GetLock());

        void* factoryPointer = entry->factoryCache->factory;
        if (factoryPointer != nullptr)
        {
            factory = reinterpret_cast<IUnknown*>(::DecodePointer(factoryPointer));
            _Analysis_assume_(factory != nullptr);            
            __WRL_ASSERT__(factory != nullptr);
            return factory->QueryInterface(riid, reinterpret_cast<void**>(ppFactory));
        }
    } // End of read lock scope

    HRESULT hr = entry->factoryCreator(flags, entry, riid, &factory);
    if (FAILED(hr))
    {
        return hr;
    }

    // If caching enabled
    if ((*flags & DisableCaching) == 0)
    {
        IUnknown *cachedFactory = nullptr;
        { // Write lock scope
            auto writeLock = ::Microsoft::WRL::Wrappers::SRWLock::LockExclusive(module->GetLock());

            // Don't need read memory barrier because lock adds one
            void* factoryPointer = entry->factoryCache->factory;
            if (factoryPointer == nullptr)
            {
                // Put factory in cache
                entry->factoryCache->factory = reinterpret_cast<IUnknown*>(::EncodePointer(factory));
            }
            else
            {
                // Get factory from the cache if it's already there
                cachedFactory = reinterpret_cast<IUnknown*>(::DecodePointer(factoryPointer));
                _Analysis_assume_(cachedFactory != nullptr);
                cachedFactory->AddRef();
            }
        }  // End of write lock scope

        if (cachedFactory != nullptr)
        {
            // Release factory that was created
            // Requires double release because factoryCreator does two AddRef
            factory->Release();
            factory->Release();
            factory = cachedFactory;
        }
    }

    *ppFactory = factory;
    __WRL_ASSERT__(*ppFactory != nullptr);
    return S_OK;
}

template<unsigned int flags>
inline HRESULT GetClassObject(_In_ ModuleBase *module, _In_opt_z_ const wchar_t* serverName, REFCLSID clsid, REFIID riid, _Outptr_result_nullonfailure_ void **ppv) throw()
{
    *ppv = nullptr;
    
    auto entry = module->GetFirstEntryPointer() + 1;
    auto last = module->GetMidEntryPointer();

    // Walk the linker generated list of pointers to CreatorMap for COM objects
    for (; entry < last; entry++)
    {
        // Linker generated list can have null pointer values
        if (*entry != nullptr &&  IsServerNameEqual(*entry, serverName))
        {
            if (*(*entry)->activationId.clsid == clsid)
            {
                unsigned int currentFlags = flags;
#pragma warning(push)
// Conditional expression is constant
#pragma warning(disable: 4127)
// Potential comparison of a constant with another constant
#pragma warning(disable: 6326)
                if ((flags & DisableCaching) == 0)
#pragma warning(pop)
                {
                    // Does not require QI                    
                    return GetCacheEntry(module, &currentFlags, riid, *entry, reinterpret_cast<IUnknown**>(ppv));
                }
                else
                {
                    return (*entry)->factoryCreator(&currentFlags, *entry, riid, reinterpret_cast<IUnknown**>(ppv));
                }
            }
        }
    }

    return CLASS_E_CLASSNOTAVAILABLE;
}

template<unsigned int flags>
inline HRESULT GetActivationFactory(_In_ ModuleBase* module, _In_opt_z_ const wchar_t* serverName, _In_opt_ HSTRING pActivatibleClassId, _Outptr_result_nullonfailure_ IActivationFactory **ppFactory) throw()
{
    *ppFactory = nullptr;

    BOOL hasEmbedNull;
    if (::WindowsIsStringEmpty(pActivatibleClassId) || 
        (FAILED(::WindowsStringHasEmbeddedNull(pActivatibleClassId, &hasEmbedNull)) || hasEmbedNull == TRUE))
    {
        return E_INVALIDARG;
    }

    const wchar_t* id = ::WindowsGetStringRawBuffer(pActivatibleClassId, nullptr);

    auto entry = module->GetMidEntryPointer() + 1;
    auto last = module->GetLastEntryPointer();
    
    // Walk the linker generated list of pointers to CreatorMap for WinRT objects
    for (; entry < last; entry++)
    {
        // Linker generated list can have null pointer values
        if (*entry != nullptr && IsServerNameEqual(*entry, serverName))
        {
            const wchar_t* runtimeName = ((*entry)->activationId.getRuntimeName)();
            __WRL_ASSERT__(runtimeName != nullptr);
            _Analysis_assume_(runtimeName != nullptr);

            if (::wcscmp(id, runtimeName) == 0)
            {
                unsigned int currentFlags = flags;

#pragma warning(push)
// Conditional expression is constant
#pragma warning(disable: 4127)
// Potential comparison of a constant with another constant
#pragma warning(disable: 6326)
                if ((flags & DisableCaching) == 0)
#pragma warning(pop)
                {
                    // Does not require QI
                    return GetCacheEntry(module, &currentFlags, __uuidof(IActivationFactory), *entry, reinterpret_cast<IUnknown**>(ppFactory));
                }
                else
                {
                    return (*entry)->factoryCreator(&currentFlags, *entry, __uuidof(IActivationFactory), reinterpret_cast<IUnknown**>(ppFactory));
                }
            }
        }
    }

    return CLASS_E_CLASSNOTAVAILABLE;
}


// Activation callback function that is callled when object is requested by WinRT API
template<unsigned int flags>
inline HRESULT STDAPICALLTYPE ActivationFactoryCallback(_In_opt_ HSTRING activationId, _Outptr_result_nullonfailure_ IActivationFactory **ppFactory) throw()
{
    auto module = ::Microsoft::WRL::GetModuleBase();
    __WRL_ASSERT__(module != nullptr);
    
    return GetActivationFactory<flags>(module, nullptr, activationId, ppFactory);
}

template<unsigned int flags>
inline HRESULT RegisterWinRTObject(_In_opt_z_ const wchar_t*, _In_ const wchar_t** activatableClassIds, _Inout_ RO_REGISTRATION_COOKIE* cookie, unsigned int count) throw()
{
    PFNGETACTIVATIONFACTORY* activationFactoryCallbacks = new (std::nothrow) PFNGETACTIVATIONFACTORY[count];        
    HSTRING* activatableClassIdsHstring = new (std::nothrow) HSTRING[count];
    HRESULT hr = S_OK;
    
    if (activationFactoryCallbacks == nullptr || activatableClassIdsHstring == nullptr)
    {
        hr = E_OUTOFMEMORY;
    }

    if (SUCCEEDED(hr))
    {
        unsigned int index = 0;
        for(;index < count && SUCCEEDED(hr); index++)
        {
            activationFactoryCallbacks[index] = &Details::ActivationFactoryCallback<flags>;
            hr = ::WindowsCreateString(activatableClassIds[index], static_cast<UINT32>(::wcslen(activatableClassIds[index])), &activatableClassIdsHstring[index]);
        }

        if (SUCCEEDED(hr))
        {
            hr = Windows::Foundation::RegisterActivationFactories(activatableClassIdsHstring, activationFactoryCallbacks, count, cookie);
        }

        for(unsigned int i = 0; i < index; i++)
        {
            ::WindowsDeleteString(activatableClassIdsHstring[i]);
        }
    }

    delete [] activationFactoryCallbacks;
    delete [] activatableClassIdsHstring;

    return hr;
}

template<unsigned int comFlags>
inline HRESULT RegisterCOMObject(_In_opt_z_ const wchar_t*, _In_ IID* clsids, _In_ IClassFactory** factories, _Inout_ DWORD* cookies, unsigned int count) throw()
{
    HRESULT hr = S_OK;
    unsigned int index = 0;

    for(; index < count && SUCCEEDED(hr); index++)
    {
        hr = ::CoRegisterClassObject(clsids[index], factories[index], CLSCTX_LOCAL_SERVER, comFlags | REGCLS_SUSPENDED, &cookies[index]);
    }

    if (SUCCEEDED(hr))
    {
        //Resume all registered objects
        hr = ::CoResumeClassObjects();
    }

    //Unregister all objects that were already registered
    if (FAILED(hr))
    {
        for(unsigned int i = 0; i < index; i++)
        {
            ::CoRevokeClassObject(cookies[i]);
            cookies[i] = 0;
        }
    }

   return hr;
}

inline unsigned int CountObjectEntries(_In_ const CreatorMap** first, _In_ const CreatorMap** end, _In_opt_z_ const wchar_t* serverName) throw()
{
    unsigned int count = 0;

    for (const CreatorMap** entry = first + 1; entry < end; entry++)
    {
        if (*entry != nullptr && IsServerNameEqual(*entry, serverName))
        {
            count++;
        }
    }

    return count;
}

template<unsigned int flags>
inline HRESULT RegisterObjects(_In_ ModuleBase* module, _In_opt_z_ const wchar_t* serverName) throw()
{
    HRESULT hr = S_OK;
    
    auto firstEntry = module->GetFirstEntryPointer();
    auto midEntry = module->GetMidEntryPointer();

    // Count how many COM objects are in the map
    unsigned int objectCount = CountObjectEntries(firstEntry, midEntry, serverName);

    //COM entries
    if (objectCount > 0)
    {
        // Allocate memory for temporary cookie, factory and clsid's arrays
        DWORD* cookies = new(std::nothrow) DWORD[objectCount];
        IClassFactory** factories = new (std::nothrow) IClassFactory*[objectCount];        
        IID* clsids = new (std::nothrow) IID[objectCount];
        
        if (cookies == nullptr || factories == nullptr || clsids == nullptr)
        {
            hr = E_OUTOFMEMORY;
        }

        if (SUCCEEDED(hr))
        {
            unsigned int index = 0;
            // Instantiate factories and copy clsid to temporary storage    
            for (const CreatorMap** entry = firstEntry + 1; entry < midEntry && SUCCEEDED(hr); entry++)
            {
                if (*entry != nullptr && IsServerNameEqual(*entry, serverName))
                {
                    unsigned int currentFlags = flags;
                    IUnknown* factory = nullptr;
                    hr = (*entry)->factoryCreator(&currentFlags, *entry, __uuidof(IClassFactory), &factory);
                    if (SUCCEEDED(hr))
                    {
                        factories[index] = reinterpret_cast<IClassFactory*>(factory);
                        clsids[index] = *(*entry)->activationId.clsid;
                        index++;
                    }
                }
            }

            if (SUCCEEDED(hr))
            {
                // Register COM objects
                hr = module->RegisterCOMObject(serverName, clsids, factories, cookies, objectCount);
                if (SUCCEEDED(hr))
                {
                    // Store COM cookies in WRL map
                    index = 0;
                    for (const CreatorMap** entry = firstEntry + 1; entry < midEntry; entry++)
                    {
                        if (*entry != nullptr && IsServerNameEqual(*entry, serverName))
                        {
                            (*entry)->factoryCache->cookie.com = cookies[index];
                            index++;
                        }
                    }
                }
            }

            // Release local copy of factories
            for (unsigned int i = 0; i < index; i++)
            {
                factories[i]->Release();
            }
        }

        delete [] cookies;
        delete [] clsids;
        delete [] factories;
    }

#if defined(_DEBUG) && !defined(__WRL_WINRT_STRICT__)
    else
    {
        ::OutputDebugStringW(L"No COM object defined. You may optimize your binary by using __WRL_WINRT_STRICT__ define");
    }
#endif

    //WinRT entries
    if (SUCCEEDED(hr))
    {
        auto lastEntry = module->GetLastEntryPointer();

        // Count how many WinRT objects are in the map
        objectCount = CountObjectEntries(midEntry, lastEntry, serverName);

        if (objectCount > 0)
        {
            // Create local storage for activatable class ids
            const wchar_t** activatableClassIds = new (std::nothrow) const wchar_t*[objectCount];

            if (activatableClassIds == nullptr)
            {
                hr = E_OUTOFMEMORY;
            }

            if (SUCCEEDED(hr))
            {
                RO_REGISTRATION_COOKIE cookie;
                // Copy activatable class ids from WRL creator map
                unsigned int index = 0;
                for (const CreatorMap** entry = midEntry + 1; entry < lastEntry; entry++)
                {
                    if (*entry != nullptr && IsServerNameEqual(*entry, serverName))
                    {
                        const wchar_t* id = ((*entry)->activationId.getRuntimeName)();
                        __WRL_ASSERT__(id != nullptr);
                        activatableClassIds[index] = id;
                        index++;
                    }
                }

                hr = module->RegisterWinRTObject(serverName, activatableClassIds, &cookie, objectCount);                
                if (SUCCEEDED(hr))
                {
                    //Copy cookie to the map
                    for (const CreatorMap** entry = midEntry + 1; entry < lastEntry; entry++)
                    {
                        if (*entry != nullptr && IsServerNameEqual(*entry, serverName))
                        {
                             (*entry)->factoryCache->cookie.winrt = cookie;
                        }
                    }
                }
            }

            delete []activatableClassIds;
        }
#if defined(_DEBUG) && !defined(__WRL_CLASSIC_COM_STRICT__)
        else
        {
            ::OutputDebugStringW(L"No WinRT object defined. You may optimize your binary by using __WRL_CLASSIC_COM_STRICT__ define");
        }
#endif
    }

    return hr;
}

inline HRESULT UnregisterObjects(_In_ ModuleBase* module, _In_opt_z_ const wchar_t* serverName) throw()
{
    HRESULT hr = S_OK;
    
    auto firstEntry = module->GetFirstEntryPointer();
    auto midEntry = module->GetMidEntryPointer();
    
    // Count how many COM objects are in the map
    unsigned int objectCount = CountObjectEntries(firstEntry, midEntry, serverName);

    //COM entries
    if (objectCount > 0)
    {
        // Allocate tempoarary array for COM cookies
        DWORD* cookies = new(std::nothrow) DWORD[objectCount];

        if (cookies == nullptr)
        {
            hr = E_OUTOFMEMORY;
        }

        if (SUCCEEDED(hr))
        {
            // Copy all COM cookies to temporary array
            unsigned int index = 0;
            for (const CreatorMap** entry = firstEntry + 1; entry < midEntry; entry++)
            {
                _Analysis_assume_(index < objectCount);
                if (*entry != nullptr && IsServerNameEqual(*entry, serverName))
                {
                    cookies[index] = (*entry)->factoryCache->cookie.com;
                    index++;
                }
            }
            _Analysis_assume_(index == objectCount);

            // Unregister COM objects
            hr = module->UnregisterCOMObject(serverName, cookies, objectCount);

            // Copy all cookies back to WRL entry map
            index = 0;
            for (const CreatorMap** entry = firstEntry + 1; entry < midEntry; entry++)
            {
                _Analysis_assume_(index < objectCount);
                if (*entry != nullptr && IsServerNameEqual(*entry, serverName))
                {
                    (*entry)->factoryCache->cookie.com = cookies[index];
                    index++;
                }
            }            
        }

        delete [] cookies;
    }

    //WinRT entries
    if (SUCCEEDED(hr))
    {        
        RO_REGISTRATION_COOKIE cookie = { 0 };
        bool foundCookie = false;
        auto lastEntry = module->GetLastEntryPointer();

        // Get the cookie for the server, all cookies are the same for specific server thus it's enough to find first entry and abort
        for (const CreatorMap** entry = midEntry + 1; entry < lastEntry; entry++)
        {
            if (*entry != nullptr && IsServerNameEqual(*entry, serverName))
            {
                 cookie = (*entry)->factoryCache->cookie.winrt;
                 foundCookie = true;
                 break;
            }
        }

        //If valid cookie for the server found WRL can unregister WinRt objects
        if (foundCookie)
        {
            // Unregister WinRt objects
            hr = module->UnregisterWinRTObject(serverName, cookie);
            
            if (SUCCEEDED(hr))
            {
                // Reset cookies if unregister succeeded
                for (const CreatorMap** entry = midEntry + 1; entry < lastEntry; entry++)
                {
                    if (*entry != nullptr && IsServerNameEqual(*entry, serverName))
                    {
                         (*entry)->factoryCache->cookie.winrt = 0;
                    }
                }
            }
        }
    }

    // Release all factories
    TerminateMap(module, serverName, false);
    return hr;
}

#pragma warning(push)
// PREFAST: *ppvObject' might be '0': this does not adhere to the specification for the function
#pragma warning(disable: 6387)

// Class factory creator function is templated on factory type instantiate the factory according to flags settings
// that changes caching/ref counting behaviour. There are following scenarios avalible:
// 1) User is creating factory with Make<ClassFactory> than:
//       - no object counting on Module<> is enabled if user want to lock server it's reuired to call LockServer method on factory
//       - caching disabled
// 2) OutOfProc server
//       - no object counting on Module<> is enabled 
//       - caching disabled
//       - DisableCaching flag doesn't change behaviour
// 3) InProc server
//       - caching enabled
//       - object couting on Module<> is enabled
//       - when ref count in factory AddRef reaches 2 WRL increments object count
//       - when ref count in factory Release reaches 1 WRL decrements object count
// 4) InProc | DisabledCaching
//       - caching disabled
//       - object counting on Module<> is enabled
//       - object count is incremented when CreateClassFactory function create factory
//       - object count is decremented when ref count on factory Release reaches 0
//
// When caching is enabled CreateClassFactory function always return ppFactory with ref count 2 otherwise 1
template<typename Factory>
inline HRESULT STDMETHODCALLTYPE CreateClassFactory(_In_ unsigned int *flags, _In_ const CreatorMap*, REFIID riid, _Outptr_ IUnknown **ppFactory) throw()
{
    static_assert(__is_base_of(IClassFactory, Factory), "'Factory' must inherit from 'IClassFactory'");
    static_assert(__is_base_of(FactoryBase, Factory), "'Factory' must inherit from '::Microsoft::WRL::ClassFactory'");
   
    ComPtr<Factory> classFactory;
    HRESULT hr = MakeAndInitialize<Factory>(classFactory.GetAddressOf());
    if (FAILED(hr))
    {
        return hr;
    }

    // Set factory flags that will enable/disable caching behaviour depending on flags specified on factories
    switch(Factory::cacheFlag)
    {
        case FactoryCacheFlags::FactoryCacheEnabled:
            __WRL_ASSERT__((*flags & DisableCaching) == 0 && "Mismatched Module<> and 'Factory' configuration. 'Factory' is cachable and Module<> doesn't support caching");
            *flags &= ~DisableCaching;
            break;
        case FactoryCacheFlags::FactoryCacheDisabled:
            *flags |= DisableCaching;
            break;
    }

    classFactory.Get()->flags_ = *flags;

    hr = classFactory.CopyTo(riid, reinterpret_cast<void**>(ppFactory));
    if ((*flags & InProc) != 0)
    {
        if (SUCCEEDED(hr))
        {
            if ((*flags & DisableCaching) != 0)
            {
                auto module = ::Microsoft::WRL::GetModuleBase();
                __WRL_ASSERT__(module != nullptr);
                // Need increment object count in case the object is not cached
                module->IncrementObjectCount();
            }
            else
            {
                // Make sure that we will not call release on factory that will cause
                // decrement object and call to release callback in out of proc server
                classFactory.Detach();
            }
        }
        else
        {
            // In case QI fail make sure that ClassFactory will not decrement object count
            classFactory.Get()->flags_ &= ~(InProc | DisableCaching);
        }
    }

    return hr;
}

// Activation factory creator function is templated on factory type instantiate the factory according to flags settings
// that changes caching/ref counting behaviour. There are following scenarios avalible:
// 1) User is creating factory with Make<ActivationFactory> than:
//       - object counting on Module<> is enabled if Module<> was instatiated
//       - object count is incremented in constructor of ActivationFactory if Module<> was instantiated
//       - object count is decremented in Release when ref count on factory is equal 0 if Module<> was instantiated
//       - no caching
// 2) OutOfProc server
//       - object counting on Module<> is enabled 
//       - caching enabled
//       - when ref count in factory AddRef reaches 2 WRL increments object count
//       - when ref count in factory Release reaches 1 WRL decrements object count
// 3) OutOfProc | DisabledCaching server
//       - object counting on Module<> is enabled 
//       - caching disabled
//       - object count is incremented in constructor of ActivationFactory
//       - object count is decremented in Release when ref count on factory is equal 0
// 4) InProc server
//       - caching enabled
//       - object couting on Module<> is enabled
//       - when ref count in factory AddRef reaches 2 WRL increments object count
//       - when ref count in factory Release reaches 1 WRL decrements object count
// 5) InProc | DisabledCaching
//       - caching disabled
//       - object counting on Module<> is enabled
//       - object count is incremented in constructor of ActivationFactory
//       - object count is decremented when ref count on factory Release reaches 0
//
// When caching is enabled CreateActivationFactory function always return ppFactory with ref count 2 otherwise 1
template<typename Factory>
inline HRESULT STDMETHODCALLTYPE CreateActivationFactory(_In_ unsigned int *flags, _In_ const CreatorMap* entry, REFIID riid, _Outptr_ IUnknown **ppFactory) throw()
{
    static_assert(__is_base_of(IActivationFactory, Factory), "'Factory' must inherit from 'IActivationFactory'");
    static_assert(__is_base_of(FactoryBase, Factory), "'Factory' must inherit from '::Microsoft::WRL::IActivationFactory'");

    ComPtr<Factory> activationFactory;
    HRESULT hr = MakeAndInitialize<Factory>(activationFactory.GetAddressOf());
    if (FAILED(hr))
    {
        return hr;
    }

    // Set factory flags that will enable/disable caching behaviour depending on flags specified on factories
    switch(Factory::cacheFlag)
    {
        case FactoryCacheFlags::FactoryCacheEnabled:
            __WRL_ASSERT__((*flags & DisableCaching) == 0 && "Mismatched Module<> and 'Factory' configuration. 'Factory' is cachable and Module<> doesn't support caching");
            *flags &= ~DisableCaching;
            break;
        case FactoryCacheFlags::FactoryCacheDisabled:
            *flags |= DisableCaching;
            break;
    }

    // QI without calling AddRef because we incremented object count in constructor of Factory
    // The factory always implements IActivationFactory thus this should succeed always because riid is __uuidof(IActivationFactory)
    hr = activationFactory->CanCastTo(riid, reinterpret_cast<void**>(ppFactory));
    if (FAILED(hr))
    {
        return hr;
    }

    // When cache is enabled it's required to increment ref count to 2 for ActivationFactory
    // because CanCastTo didn't do it
    if ((*flags & DisableCaching) == 0)
    {
        activationFactory->InternalAddRef();
    }

    // Set factory flags that will enable/disable caching behaviour
    activationFactory.Get()->flags_ = *flags;
    // Make sure that entry is nulled
    __WRL_ASSERT__(activationFactory.Get()->entry_ == nullptr);
    // Assign entry information to get correspoinding runtime class name and trust level
    activationFactory.Get()->entry_ = const_cast<CreatorMap*>(entry);
    // Detach factory if CanCastTo succeeded
    activationFactory.Detach();

    return S_OK;
}

#pragma warning(pop) // C6387

#ifdef _DEBUG
template<typename T>
inline void CheckForDuplicateEntries(const CreatorMap** firstEntry, const CreatorMap** lastEntry, T validateEntry) throw()
{
    __WRL_ASSERT__(firstEntry <= lastEntry);
    if (firstEntry == lastEntry)
    {
        return;
    }

    for (const CreatorMap** entry = firstEntry; entry < (lastEntry - 1); entry++)
    {
        if (*entry == nullptr)
        {
            continue;
        }
        // Walk the linker generated list of pointers to CreatorMap
        for (const CreatorMap** entry2 = (entry + 1); entry2 < lastEntry; entry2++)
        {
            if (*entry2 != nullptr)
            {
                (validateEntry)(*entry, *entry2);
            }
        }
    }
}
#endif // _DEBUG

} // namespace Details

#pragma warning(push)
// PREFast cannot see through template instantiation for AsIID() 
#pragma warning(disable: 6388)

// ClassFactory implementation provides registration methods and basic functionality for IClassFactory interface
// It enables developer to provide custom factory implementation.
// Example:
// struct MyClassFactory : public IClassFactory<IMyAddtionalInterfaceOnFactory>
// {
//        STDMETHOD(CreateInstance)(_Inout_opt_ IUnknown* pUnkOuter, REFIID riid, _Outptr_result_nullonfailure_ void** ppvObject)
//        {
//            my custom implementation
//        }
// };
// CoCreatableClassWithFactory(MyClass, MyClassFactory)
//
// When more then 3 interfaces are required to be implemented on factory than:
// struct MyFactory : ClassFactory<Implements<I1, I2, I3>, I4, I5>
template <typename I0 = Details::Nil, typename I1 = Details::Nil, typename I2 = Details::Nil, FactoryCacheFlags cacheFlagValue = FactoryCacheDefault>
class ClassFactory :
    public Details::RuntimeClass<typename Details::InterfaceListHelper<IClassFactory, I0, I1, I2, Details::Nil>::TypeT, RuntimeClassFlags<ClassicCom | InhibitWeakReference>, false>,
    private Details::FactoryBase
{
private:
    static const unsigned int cacheFlag = cacheFlagValue;
public:
    ClassFactory() throw() : flags_(DisableCaching)
    {
    }

    // IUnknown methods
    STDMETHOD_(ULONG, AddRef)()
    {
        auto refcount = InternalAddRef();

        // Increment object count only when InProc and caching enabled
        if ((flags_ & (OutOfProc | DisableCaching)) == 0 && refcount == 2)
        {
            auto module = ::Microsoft::WRL::GetModuleBase();
            __WRL_ASSERT__(module != nullptr);

            module->IncrementObjectCount();
        }

        return refcount;
    }

    STDMETHOD_(ULONG, Release)()    
    {
        auto refcount = InternalRelease();
        
        if (refcount == 0)
        {
            bool isInProcWithoutCaching = (flags_ & (InProc | DisableCaching)) == (InProc | DisableCaching);
            delete this;

            // Decrement object count only when InProc without caching
            if (isInProcWithoutCaching)
            {
                auto module = ::Microsoft::WRL::GetModuleBase();
                __WRL_ASSERT__(module != nullptr);

                module->DecrementObjectCount();
            }
        }
        // Decrement object count when InProc and caching enabled
        else if ((flags_ & (OutOfProc | DisableCaching)) == 0 && refcount == 1)
        {
            auto module = ::Microsoft::WRL::GetModuleBase();
            __WRL_ASSERT__(module != nullptr);

            module->DecrementObjectCount();
        }

        return refcount;
    }

    STDMETHOD(QueryInterface)(REFIID riid, _Outptr_result_nullonfailure_ void **ppvObject)
    {
        return AsIID(this, riid, ppvObject);
    }

    // IClassFactory method
    STDMETHOD(LockServer)(BOOL fLock)
    {
        auto module = ::Microsoft::WRL::GetModuleBase();
        if (module == nullptr)
        {
            return E_FAIL;
        }

        if (fLock)
        {
            module->IncrementObjectCount();
        }
        else
        {
            module->DecrementObjectCount();
        }

        return S_OK;
    }

    // Factory creation mechanism is internal for WRL thus declared outside factory as friend
    template<typename Factory> friend HRESULT STDMETHODCALLTYPE Details::CreateClassFactory(_In_ unsigned int*, _In_ const Details::CreatorMap*, REFIID, _Outptr_ IUnknown **) throw();
private:
    unsigned int flags_;
};

#pragma warning(pop) // C6388

#pragma warning(push)
// PREFAST: *ppvObject' might be '0': this does not adhere to the specification for the function
#pragma warning(disable: 6387)

// SimpleClassFactory provides basic creation mechanism for base class
// Base class must provide default constructor
// Example:
// ActivatableClassWithFactoryEx(MyClass, SimpleClassFactory<MyClass>, 1)
template<typename Base, FactoryCacheFlags cacheFlagValue = FactoryCacheDefault>
class SimpleClassFactory : public ClassFactory<Details::Nil, Details::Nil, Details::Nil, cacheFlagValue>
{
public:
    // IClassFactory method
    STDMETHOD(CreateInstance)(_Inout_opt_ IUnknown* pUnkOuter, REFIID riid, _Outptr_result_nullonfailure_ void** ppvObject)
    {
#ifdef __WRL_STRICT__
        static_assert(__is_base_of(Details::RuntimeClassBase, Base), "SimpleClassFactory can only instantiate 'Base' that derive from RuntimeClass");
        static_assert((Base::ClassFlags::value & ::Microsoft::WRL::ClassicCom) == ::Microsoft::WRL::ClassicCom,
            "SimpleClassFactory can only instantiate 'Base' that is configured with ClassicCom or WinRtClassicComMix flags");
#endif

        *ppvObject = nullptr;

        if (pUnkOuter != nullptr)
        {
            return CLASS_E_NOAGGREGATION;
        }

        ComPtr<IUnknown> unk;
        HRESULT hr = MakeAndInitialize<Base>(unk.GetAddressOf());
        if (FAILED(hr))
        {
            return hr;
        }

        return unk.CopyTo(riid, ppvObject);
    }
};

#pragma warning(pop) // C6387

#pragma warning(push)
// PREFast cannot see through template instantiation for AsIID() 
#pragma warning(disable: 6388)

// ActivationFactory implementation provides registration methods and basic functionality for IActivationFactory interface
// It enables developer to provide custom factory implementation.
// Example:
// struct MyClassFactory : public ActivationFactory<IMyAddtionalInterfaceOnFactory>
// {
//        STDMETHOD(ActivateInstance)(_Outptr_result_nullonfailure_ IInspectable **ppvObject)
//        {
//            my custom implementation
//        }
// };
// ActivatableClassWithFactory(MyClass, MyClassFactory)
// or if default factory is used 
// ActivatableClassWithFactory(MyClass, SimpleActivationFactory<MyClass>)
//
// When more than 3 interfaces are required to be implemented on factory then:
// struct MyFactory : ActivationFactory<Implements<I1, I2, I3>, I4, I5>
template <typename I0 = Details::Nil, typename I1 = Details::Nil, typename I2 = Details::Nil, FactoryCacheFlags cacheFlagValue = FactoryCacheDefault>
class ActivationFactory :
    public Details::RuntimeClass<typename Details::InterfaceListHelper<IActivationFactory, I0, I1, I2, Details::Nil>::TypeT, RuntimeClassFlags<WinRt | InhibitWeakReference | InhibitFtmBase>, false>,
    private Details::FactoryBase
{
private:
    static const unsigned int cacheFlag = cacheFlagValue;
public:
    typedef ActivationFactory ActivationFactoryT;
    typedef I0 FirstInterface;

    ActivationFactory() throw() : entry_(nullptr), flags_(DisableCaching)
    {
        auto module = ::Microsoft::WRL::GetModuleBase();
        if (module != nullptr)
        {
            module->IncrementObjectCount();
        }
    }
    // IUnknown methods
    STDMETHOD_(ULONG, AddRef)()
    {
        auto refcount = InternalAddRef();

        // When caching enabled we increment object count on factory when refcount reaches 2
        if ((flags_ & DisableCaching) == 0 && refcount == 2)
        {
            auto module = ::Microsoft::WRL::GetModuleBase();
            __WRL_ASSERT__(module != nullptr);

            module->IncrementObjectCount();
        }

        return refcount;
    }

    STDMETHOD_(ULONG, Release)()
    {
        auto refcount = InternalRelease();

        if (refcount == 0)
        {
            bool isCacheDisabled = (flags_ & DisableCaching) != 0;
            delete this;

            if (isCacheDisabled && Details::ModuleBase::module_ != nullptr)
            {
                auto module = ::Microsoft::WRL::GetModuleBase();
                __WRL_ASSERT__(module != nullptr);

                module->DecrementObjectCount();
            }
        }
        // When caching enabled WRL decrement object count on factory when it reaches 1
        else if ((flags_ & DisableCaching) == 0 && refcount == 1)
        {
            auto module = ::Microsoft::WRL::GetModuleBase();
            __WRL_ASSERT__(module != nullptr);

            module->DecrementObjectCount();
        }

        return refcount;
    }

    STDMETHOD(QueryInterface)(REFIID riid, _Outptr_result_nullonfailure_ void **ppvObject)
    {
        return AsIID(this, riid, ppvObject);
    }
    //IInspectable methods
    STDMETHOD(GetIids)(
        _Out_ ULONG *iidCount,
        _When_(*iidCount == 0, _At_(*iids, _Post_null_))
        _When_(*iidCount > 0, _At_(*iids, _Post_notnull_))
        _Outptr_result_buffer_maybenull_(*iidCount) _Result_nullonfailure_ IID **iids)
    {
        return GetImplementedIIDS(this, iidCount, iids);
    }
    // Factory runtime class name is the same as RuntimeClass that it is exposing
    STDMETHOD(GetRuntimeClassName)(_Out_ HSTRING* runtimeName)
    {
        *runtimeName = nullptr;
        return E_ILLEGAL_METHOD_CALL;
    }
    // Factory trust level is the same as RuntimeClass that it is exposing
    STDMETHOD(GetTrustLevel)(_Out_ TrustLevel* trustLvl)
    {
        if (entry_ != nullptr)
        {
            *trustLvl = (entry_->getTrustLevel)();
        }
        else
        {
            __WRL_ASSERT__(false && "Use 'InspectableClassStatic' on static ONLY factories or override 'GetTrustLevel' method to set trust level.");
            *trustLvl = TrustLevel::FullTrust;
        }

        return S_OK;
    }
    // IActivationFactory method
    STDMETHOD(ActivateInstance)(_Outptr_result_nullonfailure_ IInspectable **ppvObject)
    {
        *ppvObject = nullptr;
        return E_NOTIMPL;
    }
    // Factory creation mechanism is internal for WRL thus declared outside factory as friend
    template<typename Factory> friend HRESULT STDMETHODCALLTYPE Details::CreateActivationFactory(_In_ unsigned int*, _In_ const Details::CreatorMap*, REFIID, _Outptr_ IUnknown **) throw();
private:
    Details::CreatorMap* entry_;
    unsigned int flags_;
};

template <typename I0 = Details::Nil, typename I1 = Details::Nil, typename I2 = Details::Nil, FactoryCacheFlags cacheFlagValue = FactoryCacheDefault>
class AgileActivationFactory : public ActivationFactory<Implements<FtmBase, I0>, I1, I2, cacheFlagValue>
{
};

#pragma warning(pop) // C6388

#pragma warning(push)
// PREFAST: *ppvObject' might be '0': this does not adhere to the specification for the function
#pragma warning(disable: 6387 6388)

// SimpleActivationFactory provides basic creation mechanism for base class
// Base class must provide default constructor
// Example:
// ActivatableClassWithFactoryEx(MyClass, SimpleActivationFactory<MyClass>, 1)
template<typename Base, FactoryCacheFlags cacheFlagValue = FactoryCacheDefault>
class SimpleActivationFactory : public ActivationFactory<Details::Nil, Details::Nil, Details::Nil, cacheFlagValue>
{
public:
    // IActivationFactory method
    STDMETHOD(ActivateInstance)(_Outptr_result_nullonfailure_ IInspectable **ppvObject)
    {
#ifdef __WRL_STRICT__
        static_assert(__is_base_of(Details::RuntimeClassBase, Base), "SimpleActivationFactory can only instantiate 'Base' that derive from RuntimeClass");
        static_assert((Base::ClassFlags::value & ::Microsoft::WRL::WinRt) == ::Microsoft::WRL::WinRt,
            "SimpleActivationFactory can only instantiate 'Base' that is configured with WinRt or WinRtClassicComMix flags");
#endif

        return MakeAndInitialize<Base>(ppvObject);
    }
};

#pragma warning(pop) // C6387

// It's required to #undef following macros because they are always defined in 'wrl/implements.h'
// for better error recognition when somebody forgets to include 'wrl/module.h'
// Please make sure that they are in sync with the version from 'wrl/implements.h'
#undef ActivatableClassWithFactoryEx
#undef ActivatableClassWithFactory
#undef ActivatableClass
#undef ActivatableStaticOnlyFactoryEx
#undef ActivatableStaticOnlyFactory
#undef WrlCreatorMapIncludePragma
#undef WrlCreatorMapIncludePragmaEx

#undef CoCreatableClassWithFactoryEx
#undef CoCreatableClassWithFactory
#undef CoCreatableClass
#undef CoCreatableClassWrlCreatorMapInclude
#undef CoCreatableClassWrlCreatorMapIncludeEx

// Force reference to the symbol so linker does not optimize it away due to /OPT:REF
#pragma comment(linker, "/merge:WRL=.rdata")
#if defined(_M_IX86)
#define WrlCreatorMapIncludePragma(className) __pragma(comment(linker, "/include:___minATLObjMap_" #className));
#define WrlCreatorMapIncludePragmaEx(className, serverName) __pragma(comment(linker, "/include:___minATLObjMap_" #className "_" #serverName));
#elif defined(_M_ARM) || defined(_M_AMD64)
#define WrlCreatorMapIncludePragma(className) __pragma(comment(linker, "/include:__minATLObjMap_" #className));
#define WrlCreatorMapIncludePragmaEx(className, serverName) __pragma(comment(linker, "/include:__minATLObjMap_" #className "_" #serverName));
#else
#error Unknown Platform. define WrlCreatorMapIncludePragma
#endif

// COM specific
#define CoCreatableClassWrlCreatorMapInclude(className) WrlCreatorMapIncludePragma(className##_COM)
#define CoCreatableClassWrlCreatorMapIncludeEx(className, serverName) WrlCreatorMapIncludePragmaEx(className##_COM, serverName)

#define InternalWrlCreateCreatorMapEx(className, serverName, runtimeClassName, trustLevel, creatorFunction, section) \
    __declspec(selectany) ::Microsoft::WRL::Details::FactoryCache __objectFactory__##className##_##serverName = { nullptr, 0 }; \
    const ::Microsoft::WRL::Details::CreatorMap __object_##className##_##serverName = { \
        creatorFunction, \
        runtimeClassName, \
        trustLevel, \
        &__objectFactory__##className##_##serverName,\
        L#serverName}; \
    extern "C" __declspec(allocate(section)) __declspec(selectany) const ::Microsoft::WRL::Details::CreatorMap* const __minATLObjMap_##className##_##serverName = &__object_##className##_##serverName; \
    WrlCreatorMapIncludePragmaEx(className, serverName)

#define InternalWrlCreateCreatorMap(className, runtimeClassName, trustLevel, creatorFunction, section) \
    __declspec(selectany) ::Microsoft::WRL::Details::FactoryCache __objectFactory__##className = { nullptr, 0 }; \
    const ::Microsoft::WRL::Details::CreatorMap __object_##className = { \
        creatorFunction, \
        runtimeClassName, \
        trustLevel, \
        &__objectFactory__##className,\
        nullptr}; \
    extern "C" __declspec(allocate(section)) __declspec(selectany) const ::Microsoft::WRL::Details::CreatorMap* const __minATLObjMap_##className = &__object_##className; \
    WrlCreatorMapIncludePragma(className)

// Server name used on ActivatableClassWithFactoryEx or CoCreatableClassWithFactoryEx is used to filter objects registered on the module
// during registration/unregistration or acquiring objects
// The ActivatableClass, ActivatableClassWithFactory, CoCreatableClass and CoCreatableClassWithFactory use serverName id 0.

// Activation macros specific for WinRT
#ifndef __WRL_CLASSIC_COM_STRICT__
#define ActivatableClassWithFactoryEx(className, factory, serverName) \
    InternalWrlCreateCreatorMapEx(className, serverName, reinterpret_cast<const IID*>(&className::InternalGetRuntimeClassName), &className::InternalGetTrustLevel, ::Microsoft::WRL::Details::CreateActivationFactory<factory>, "minATL$__r")
    
#define ActivatableClassWithFactory(className, factory) \
    InternalWrlCreateCreatorMap(className, reinterpret_cast<const IID*>(&className::InternalGetRuntimeClassName), &className::InternalGetTrustLevel, ::Microsoft::WRL::Details::CreateActivationFactory<factory>, "minATL$__r")

#define ActivatableClass(className) \
    ActivatableClassWithFactory(className, ::Microsoft::WRL::SimpleActivationFactory<className>)

#define ActivatableStaticOnlyFactoryEx(factory, serverName) \
    InternalWrlCreateCreatorMapEx(factory, serverName, reinterpret_cast<const IID*>(&factory::InternalGetRuntimeClassNameStatic), &factory::InternalGetTrustLevelStatic, ::Microsoft::WRL::Details::CreateActivationFactory<factory>, "minATL$__r")
    
#define ActivatableStaticOnlyFactory(factory) \
    InternalWrlCreateCreatorMap(factory, reinterpret_cast<const IID*>(&factory::InternalGetRuntimeClassNameStatic), &factory::InternalGetTrustLevelStatic, ::Microsoft::WRL::Details::CreateActivationFactory<factory>, "minATL$__r")
        
#define InspectableClassStatic(runtimeClassName, trustLevel) \
    public: \
        static const wchar_t* STDMETHODCALLTYPE InternalGetRuntimeClassNameStatic() throw() \
        { \
            static_assert(__is_base_of(IActivationFactory, ActivationFactoryT) && __is_base_of(::Microsoft::WRL::Details::FactoryBase, ActivationFactoryT), "'InspectableClassStatic' macro can only be used with ::Windows::WRL::ActivationFactory types"); \
            static_assert(!__is_base_of(ActivationFactoryT::FirstInterface, ::Microsoft::WRL::Details::Nil), "ActivationFactory with 'InspectableClassStatic' macro requires to specify custom interfaces"); \
            return runtimeClassName; \
        } \
        static TrustLevel STDMETHODCALLTYPE InternalGetTrustLevelStatic() throw() \
        { \
            return trustLevel; \
        } \
        STDMETHOD(GetRuntimeClassName)(_Out_ HSTRING* runtimeName) \
        { \
            *runtimeName = nullptr; \
            return E_ILLEGAL_METHOD_CALL; \
        } \
        STDMETHOD(GetTrustLevel)(_Out_ TrustLevel* trustLvl) \
        { \
            *trustLvl = trustLevel; \
            return S_OK; \
        } \
        STDMETHOD(GetIids)(_Out_ ULONG *iidCount, \
            _When_(*iidCount == 0, _At_(*iids, _Post_null_)) \
            _When_(*iidCount > 0, _At_(*iids, _Post_notnull_)) \
            _Outptr_result_buffer_maybenull_(*iidCount) _Result_nullonfailure_ IID **iids) \
        { \
            return ActivationFactoryT::GetIids(iidCount, iids); \
        } \
        STDMETHOD(QueryInterface)(REFIID riid, _Outptr_result_nullonfailure_ void **ppvObject) \
        { \
            return ActivationFactoryT::QueryInterface(riid, ppvObject); \
        } \
        STDMETHOD_(ULONG, Release)() \
        { \
            return ActivationFactoryT::Release(); \
        } \
        STDMETHOD_(ULONG, AddRef)() \
        { \
            return ActivationFactoryT::AddRef(); \
        } \
    private:

#else
// When there is classic com only defined those macros should never be used
#define ActivatableClassWithFactoryEx(className, factory, serverName) \
    static_assert(false, "Activation of COM components. Please make sure that that you either undefine __WRL_WINRT_STRICT__ or remove ActivatableClassWithFactoryEx macro");
#define ActivatableClassWithFactory(className, factory) \
    static_assert(false, "Activation of COM components. Please make sure that that you either undefine __WRL_WINRT_STRICT__ or remove ActivatableClassWithFactory macro");
#define ActivatableClass(className) \
    static_assert(false, "Activation of COM components. Please make sure that that you either undefine __WRL_WINRT_STRICT__ or remove ActivatableClass macro");
#define ActivatableStaticOnlyFactoryEx(factory, serverName) \
    static_assert(false, "Activation of COM components. Please make sure that that you either undefine __WRL_WINRT_STRICT__ or remove  macro");
#define ActivatableStaticOnlyFactory(factory) \
    static_assert(false, "Activation of COM components. Please make sure that that you either undefine __WRL_WINRT_STRICT__ or remove ActivatableStaticOnlyFactory macro");
#endif

// Activation macros specific for COM
#ifndef __WRL_WINRT_STRICT__
#define CoCreatableClassWithFactoryEx(className, factory, serverName) \
    InternalWrlCreateCreatorMapEx(className##_COM, serverName, &__uuidof(className), nullptr, ::Microsoft::WRL::Details::CreateClassFactory<factory>, "minATL$__f")

#define CoCreatableClassWithFactory(className, factory) \
    InternalWrlCreateCreatorMap(className##_COM, &__uuidof(className), nullptr, ::Microsoft::WRL::Details::CreateClassFactory<factory>, "minATL$__f")

#define CoCreatableClass(className) \
    CoCreatableClassWithFactory(className, ::Microsoft::WRL::SimpleClassFactory<className>)

#else
// When there is WINRT strict only defined those macros should never be used
#define CoCreatableClassWithFactoryEx(className, factory, serverName) \
    static_assert(false, "Activation of COM components. Please make sure that that you either undefine __WRL_WINRT_STRICT__ or remove CoCreatableClassWithFactoryEx macro");
#define CoCreatableClassWithFactory(className, factory) \
    static_assert(false, "Activation of COM components. Please make sure that that you either undefine __WRL_WINRT_STRICT__ or remove CoCreatableClassWithFactory macro");
#define CoCreatableClass(className) \
    static_assert(false, "Activation of COM components. Please make sure that that you either undefine __WRL_WINRT_STRICT__ or remove CoCreatableClass macro");
#endif

namespace Details
{
// Forwarding declaraton of DefaultModule<>
template<ModuleType moduleType>
class DefaultModule;
} // namespace Details

// Forwarding declaraton of Module<>
template<ModuleType moduleType, typename ModuleT = Details::DefaultModule<moduleType>>
class Module;

#pragma warning(push)
// PREFAST: '*ppIFactory' might not be '0': this does not adhere to the specification for the function
// PREFAST: '*ppv' might not be '0': this does not adhere to the specification for the function
#pragma warning(disable: 6388)

template<typename ModuleT>
class Module<InProc, ModuleT> :
    public Details::ModuleBase
{
private:
    void VerifyEntries() throw()
    {
        // Walk the linker generated list of pointers to CreatorMap for WinRT objects
        for (const Details::CreatorMap** entry = GetMidEntryPointer() + 1; entry < GetLastEntryPointer(); entry++)
        {
            if (*entry == nullptr)
            {
                continue;
            }

            const wchar_t* name = ((*entry)->activationId.getRuntimeName)();
            (name);
            // Make sure that runtime class name is not nullptr and it has no empty string
            __WRL_ASSERT__(name != nullptr && ::wcslen(name) != 0);
        }

        Details::CheckForDuplicateEntries((GetFirstEntryPointer() + 1), GetMidEntryPointer(),
            [](const Details::CreatorMap* entry, const Details::CreatorMap* entry2) -> void {
                __WRL_ASSERT__(entry->activationId.clsid != entry2->activationId.clsid && "Duplicate CLSID!");
            }
        );

        Details::CheckForDuplicateEntries((GetMidEntryPointer() + 1), GetLastEntryPointer(),
            [](const Details::CreatorMap* entry, const Details::CreatorMap* entry2) -> void {
                __WRL_ASSERT__(::wcscmp((entry->activationId.getRuntimeName)(), (entry2->activationId.getRuntimeName)()) != 0 && "Duplicate runtime class name!");
            }
        );
    }

// If static initialization is not avalible there is no need
// to keep isInitialized and StaticInitialize
#ifndef __WRL_DISABLE_STATIC_INITIALIZE__
    static bool StaticInitialize()
    {
        auto &module = ModuleT::Create();
        __WRL_ASSERT__(&module != nullptr && "Must always be valid address");
        return nullptr != &module;
    }

    static bool isInitialized;
#endif
protected:
    Module()
    {
#ifdef _DEBUG
        VerifyEntries();        
#endif        
    }
public:
    virtual ~Module() throw()
    {
        Details::TerminateMap(this, nullptr, true);
#ifndef __WRL_DISABLE_STATIC_INITIALIZE__
        // Needs to be changed to avoid compiler optimization
        isInitialized = false;
#endif
    }

    static ModuleT& Create() throw()
    {
        static ModuleT module;
        return module;
    }
    
    static ModuleT& GetModule() throw()
    {
        return Create();
    }
    
    HRESULT GetActivationFactory(_In_opt_ HSTRING pActivatibleClassId, _Outptr_result_nullonfailure_ IActivationFactory **ppIFactory, _In_opt_z_ const wchar_t* serverName = nullptr) throw()
    {
        return Details::GetActivationFactory<InProc>(this, serverName, pActivatibleClassId, ppIFactory);
    }

    HRESULT GetClassObject(REFCLSID clsid, REFIID riid, _Outptr_result_nullonfailure_ void **ppv, _In_opt_z_ const wchar_t* serverName = nullptr) throw()
    {
        return Details::GetClassObject<InProc>(this, serverName, clsid, riid, ppv);
    }

    bool Terminate(_In_opt_z_ const wchar_t* serverName = nullptr, bool forceTerminate = false) throw()
    {
        return Details::TerminateMap(this, serverName, forceTerminate);
    }
    // Number of active objects in the module
    STDMETHOD_(unsigned long, IncrementObjectCount)()
    {
        // InterlockedIncrement calls _InterlockedIncrement intrinsic thus we call directly _InterlockedIncrement to save the call
        return static_cast<unsigned long>(_InterlockedIncrement(reinterpret_cast<volatile long*>(&objectCount_)));
    }

    STDMETHOD_(unsigned long, DecrementObjectCount)()
    {
        // InterlockedDecrement calls _InterlockedDecrement intrinsic thus we call directly _InterlockedDecrement to save the call
        return static_cast<unsigned long>(_InterlockedDecrement(reinterpret_cast<volatile long*>(&objectCount_)));
    }

    // InProc module doesn't implement any registration API's
    STDMETHOD(RegisterWinRTObject)(_In_opt_z_ const wchar_t*, _In_z_ const wchar_t**, _Inout_ RO_REGISTRATION_COOKIE*, unsigned int)
    {
        return E_NOTIMPL;
    }

    STDMETHOD(UnregisterWinRTObject)(_In_opt_z_ const wchar_t*, _In_ RO_REGISTRATION_COOKIE)
    {
        return E_NOTIMPL;
    }

    STDMETHOD(RegisterCOMObject)(_In_opt_z_ const wchar_t*, _In_ IID*, _In_ IClassFactory**, _Inout_ DWORD*, unsigned int)
    {
        return E_NOTIMPL;
    }

    STDMETHOD(UnregisterCOMObject)(_In_opt_z_ const wchar_t*, _Inout_ DWORD *, unsigned int)
    {
        return E_NOTIMPL;
    }
};

#pragma warning(pop) // C6388

#ifndef __WRL_DISABLE_STATIC_INITIALIZE__
// The Module<> requires static initialization thus the warning is triggered when the entry point has been changed
// The isInitialized variable is required to perform static intialization in single thread CRT initialization
// code and trigger following warning:
//   warning LNK4210: .CRT section exists; there may be unhandled static initializes or terminators
// when the non CRT entry point was defined.
// In case that no CRT initialization is possible then it's required to inherit from Module<> and 
// create/destroy object with new/delete in DllMain/wMain.

template<typename ModuleT>
__declspec(selectany) bool Module<InProc, ModuleT>::isInitialized = Module<InProc, ModuleT>::StaticInitialize();

#endif


#pragma warning(push)
// PREFAST: '*ppIFactory' might not be '0': this does not adhere to the specification for the function
// PREFAST: '*ppv' might not be '0': this does not adhere to the specification for the function
#pragma warning(disable: 6388)

template<typename ModuleT>
class Module<InProcDisableCaching, ModuleT> :
    public Module<InProc, ModuleT>
{
public:
    HRESULT GetActivationFactory(_In_opt_ HSTRING pActivatibleClassId, _Outptr_result_nullonfailure_ IActivationFactory **ppIFactory, _In_opt_z_ const wchar_t* serverName = nullptr) throw()
    {
        return Details::GetActivationFactory<InProcDisableCaching>(this, serverName, pActivatibleClassId, ppIFactory);
    }

    HRESULT GetClassObject(REFCLSID clsid, REFIID riid, _Outptr_result_nullonfailure_ void **ppv, _In_opt_z_ const wchar_t* serverName = nullptr) throw()
    {
        return Details::GetClassObject<InProcDisableCaching>(this, serverName, clsid, riid, ppv);
    }
};

#pragma warning(pop) // C6388

template<typename ModuleT>
class Module<OutOfProc, ModuleT> :
    public Module<InProc, ModuleT>
{
private:
    // GetObjectCount returns always zero for out of proc servers
    // This method is called in TerminateMap helper function
    STDMETHOD_(unsigned long, GetObjectCount)() const
    {
        return 0;
    }

    // Generic notification handler interface required to fire
    // when the last object on the module was released
    class ReleaseNotifier 
    {
    public:
        ReleaseNotifier(bool release) throw() : release_(release)
        {
        }
        virtual ~ReleaseNotifier() throw()
        {
        }
        void Release() throw()
        {
            if (release_)
            {
                delete this;
            }
        }
        virtual void Invoke() throw() = 0;
    private:
        bool release_;
    };
    // Specialization for notify handler made with lambda, functors or pointer to function
    template<typename T>
    class GenericReleaseNotifier : public ReleaseNotifier
    {
    public:
        GenericReleaseNotifier(T callback, bool release) throw() : ReleaseNotifier(release), callback_(callback)
        {
        }
        void Invoke() throw()
        {
            callback_();
        }
    protected:
        T callback_;
    };
    // Specialization for notify handler made with pointer to the method
    template<typename T>
    class MethodReleaseNotifier : public ReleaseNotifier
    {
    public:
        MethodReleaseNotifier(_In_ T* object, _In_ void (T::* method)(), bool release) throw() :
            ReleaseNotifier(release), object_(object), method_(method)
        {
        }
        void Invoke() throw()
        {
            (object_->*method_)();
        }
    protected:
        T* object_;
        void (T::* method_)();
    };
    
   ReleaseNotifier *releaseNotifier_;
protected:
    Module() throw() : releaseNotifier_(nullptr)
    {
    }

    // The initialization functions provided to register notify handler
    // when the module is created with new/delete
    template<typename T>
    HRESULT Initialize(T callback) throw()
    {
        // Module was already initialized
        __WRL_ASSERT__(releaseNotifier_ == nullptr);

        releaseNotifier_ = new(std::nothrow) GenericReleaseNotifier<T>(callback, true);
        if (releaseNotifier_ == nullptr)
        {
            return E_OUTOFMEMORY;
        }
        return S_OK;
    }

    template<typename T>
    HRESULT Initialize(_In_ T* object, _In_ void (T::* method)()) throw()
    {
        // Module was already initialized
        __WRL_ASSERT__(releaseNotifier_ == nullptr);

        releaseNotifier_ = new(std::nothrow) MethodReleaseNotifier<T>(object, method, true);
        if (releaseNotifier_ == nullptr)
        {
            return E_OUTOFMEMORY;
        }
        return S_OK;
    }
public:    
    static ModuleT& Create() throw()
    {
        static ModuleT module;
        return module;
    }

    template<typename T>
    static ModuleT& Create(T callback) throw()
    {
        auto &module = Create();
        static char callbackBuffer[sizeof(GenericReleaseNotifier<T>)];

        // Module was already initialized
        __WRL_ASSERT__(module.releaseNotifier_ == nullptr);

        if (module.releaseNotifier_ == nullptr)
        {
            module.releaseNotifier_ = new (&callbackBuffer) GenericReleaseNotifier<T>(callback, false);
        }
        return module;
    }

    template<typename T>
    static ModuleT& Create(_In_ T* object, _In_ void (T::* method)()) throw()
    {
        auto &module = Create();
        static char callbackBuffer[sizeof(MethodReleaseNotifier<T>)];

        // Module was already created initialized
        __WRL_ASSERT__(module.releaseNotifier_ == nullptr);

        if (module.releaseNotifier_ == nullptr)
        {
            module.releaseNotifier_ = new (&callbackBuffer) MethodReleaseNotifier<T>(object, method, false);
        }
        return module;
    }

    static ModuleT& GetModule() throw()
    {
        auto &module = Create();
        // Module must be initialized with Create method first
        __WRL_ASSERT__(module.releaseNotifier_ != nullptr);
        return module;
    }

    virtual ~Module() throw()
    {
        if (releaseNotifier_ != nullptr)
        {
            releaseNotifier_->Release();
            releaseNotifier_ = nullptr;
        }
    }

#ifndef __WRL_WINRT_STRICT__
    STDMETHOD(RegisterCOMObject)(_In_opt_z_ const wchar_t* serverName, _In_ IID* clsids, _In_ IClassFactory** factories, _Inout_ DWORD* cookies, unsigned int count)
    {
        return Details::RegisterCOMObject<REGCLS_MULTIPLEUSE>(serverName, clsids, factories, cookies, count);
    }

    STDMETHOD(UnregisterCOMObject)(_In_opt_z_ const wchar_t*, _Inout_ DWORD* cookies, unsigned int count)
    {
        HRESULT hr = S_OK;   
        
        for(unsigned int i = 0 ; i < count && SUCCEEDED(hr); i++)
        {
            if (cookies[i] != 0)
            {
                hr = ::CoRevokeClassObject(cookies[i]);
                if (SUCCEEDED(hr))
                {
                    cookies[i] = 0;
                }
            }
        }

        return hr;
    }
#else    
    STDMETHOD(RegisterCOMObject)(_In_opt_z_ const wchar_t*, _In_ IID*, _In_ IClassFactory**, _Inout_ DWORD*, unsigned int)
    {
        __WRL_ASSERT__(false && "COM components found. Please make sure that that you either undefine __WRL_WINRT_STRICT__ or remove COM components");
        return S_OK;
    }

    STDMETHOD(UnregisterCOMObject)(_In_opt_z_ const wchar_t*, _Inout_ DWORD*, unsigned int)
    {
        __WRL_ASSERT__(false && "COM components found. Please make sure that that you either undefine __WRL_WINRT_STRICT__ or remove COM components");
        return S_OK;
    }
#endif  // __WRL_WINRT_STRICT__

#ifndef __WRL_CLASSIC_COM_STRICT__
    STDMETHOD(RegisterWinRTObject)(_In_opt_z_ const wchar_t* serverName, _In_ const wchar_t** activatableClassIds, _Inout_ RO_REGISTRATION_COOKIE* cookie, unsigned int count)
    {
        return Details::RegisterWinRTObject<OutOfProc>(serverName, activatableClassIds, cookie, count);
    }

    STDMETHOD(UnregisterWinRTObject)(_In_opt_z_ const wchar_t*, _In_ RO_REGISTRATION_COOKIE cookie)    
    {
        Windows::Foundation::RevokeActivationFactories(cookie);
        return S_OK;
    }
#else
    STDMETHOD(RegisterWinRTObject)(_In_opt_z_ const wchar_t*, _In_z_ const wchar_t**, _Inout_ RO_REGISTRATION_COOKIE*, unsigned int)
    {
        __WRL_ASSERT__(false && "WinRT components found. Please make sure that that you either undefine __WRL_CLASSIC_COM_STRICT__ or remove WinRT components");
        return S_OK;
    }

    STDMETHOD(UnregisterWinRTObject)(_In_opt_z_ const wchar_t*, _In_ RO_REGISTRATION_COOKIE)
    {
        __WRL_ASSERT__(false && "WinRT components found. Please make sure that that you either undefine __WRL_CLASSIC_COM_STRICT__ or remove WinRT components");
        return S_OK;
    }
#endif // __WRL_CLASSIC_COM_STRICT__

    HRESULT RegisterObjects(_In_opt_z_ const wchar_t* serverName = nullptr) throw()
    {
        return Details::RegisterObjects<OutOfProc>(this, serverName);
    }

    HRESULT UnregisterObjects(_In_opt_z_ const wchar_t* serverName = nullptr) throw()
    {
       return Details::UnregisterObjects(this, serverName);
    }

    STDMETHOD_(unsigned long, IncrementObjectCount)()
    {
        return ::CoAddRefServerProcess();
    }

    STDMETHOD_(unsigned long, DecrementObjectCount)()
    {
        auto ref = ::CoReleaseServerProcess();
        if (ref == 0)
        {
            releaseNotifier_->Invoke();
        }

        return ref;
    }
};

#pragma warning(push)
// PREFAST: '*ppIFactory' might not be '0': this does not adhere to the specification for the function
// PREFAST: '*ppv' might not be '0': this does not adhere to the specification for the function
#pragma warning(disable: 6388)

template<typename ModuleT>
class Module<OutOfProcDisableCaching, ModuleT> :
    public Module<OutOfProc, ModuleT>
{
public:
    HRESULT GetActivationFactory(_In_opt_ HSTRING pActivatibleClassId, _Outptr_result_nullonfailure_ IActivationFactory **ppIFactory, _In_opt_z_ const wchar_t* serverName = nullptr) throw()
    {
        // Those methods are called in context of InProc always
        return Details::GetActivationFactory<InProcDisableCaching>(this, serverName, pActivatibleClassId, ppIFactory);
    }

    HRESULT GetClassObject(REFCLSID clsid, REFIID riid, _Outptr_result_nullonfailure_ void **ppv, _In_opt_z_ const wchar_t* serverName = nullptr) throw()
    {
        // Those methods are called in context of InProc always
        return Details::GetClassObject<InProcDisableCaching>(this, serverName, clsid, riid, ppv);
    }

    HRESULT RegisterObjects(_In_opt_z_ const wchar_t* serverName = nullptr) throw()
    {
        return Details::RegisterObjects<OutOfProcDisableCaching>(this, serverName);
    }

#ifndef __WRL_CLASSIC_COM_STRICT__
    STDMETHOD(RegisterWinRTObject)(_In_opt_z_ const wchar_t* serverName, _In_ const wchar_t** activatableClassIds, _Inout_ RO_REGISTRATION_COOKIE* cookie, unsigned int count)
    {
        return Details::RegisterWinRTObject<OutOfProcDisableCaching>(serverName, activatableClassIds, cookie, count);
    }
#endif
};

#pragma warning(pop) // C6388

namespace Details
{
template <ModuleType moduleType>
class DefaultModule :
    public Module<moduleType, DefaultModule<moduleType>>
{
};
} // namespace Details

}} // namespace Microsoft::WRL

#pragma pack(pop)

#endif // _WRL_MODULE_H_
