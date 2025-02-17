/***
*ehvcccvb.cpp - EH copy-ctor iterator helper function for class w/ virtual bases
*
*       Copyright (c) Microsoft Corporation. All rights reserved.
*
*Purpose:
*       These functions are called when constructing and destructing arrays of
*       objects.  Their purpose is to assure that constructed elements get
*       destructed if the constructor for one of the elements throws.
*
*       Must be compiled using "-d1Binl" to be able to specify __thiscall
*       at the user level
****/

#include <eh.h>

#if defined _M_CEE
    #define CALLTYPE  __clrcall
    #define CALEETYPE __clrcall
    #define __RELIABILITY_CONTRACT                                                   \
        [System::Runtime::ConstrainedExecution::ReliabilityContract(                 \
            System::Runtime::ConstrainedExecution::Consistency::WillNotCorruptState, \
            System::Runtime::ConstrainedExecution::Cer::Success                      \
        )]
#else
    #define CALEETYPE __stdcall
    #define __RELIABILITY_CONTRACT

    #if defined _M_IX86
        #define CALLTYPE __thiscall
    #else
        #define CALLTYPE __stdcall
    #endif
#endif

using constructor_type = void (CALLTYPE*)(void*, void*);
using destructor_type  = void (CALLTYPE*)(void*);

__RELIABILITY_CONTRACT
void CALEETYPE __ArrayUnwind(
    void*           ptr,            // Pointer to array to destruct
    size_t          size,           // Size of each element (including padding)
    size_t          count,          // Number of elements in the array
    destructor_type destructor      // The destructor to call
    );

__RELIABILITY_CONTRACT
void CALEETYPE __ehvec_copy_ctor_vb(
    void*            dst,           // Pointer to destination array
    void*            src,           // Pointer to source array
    size_t           size,          // Size of each element (including padding)
    size_t           count,         // Number of elements in the array
    constructor_type constructor,   // Constructor to call
    destructor_type  destructor     // Destructor to call should exception be thrown
    )
{
    size_t i{0};
    bool success{false};

    __try
    {
        for (; i != count; ++i)
        {
            #pragma warning(push)
            #pragma warning(disable: 4191) // unsafe conversion
            reinterpret_cast<void (CALLTYPE*)(void*, void*, int)>(constructor)(dst, src, 1);
            #pragma warning(pop)

            dst = static_cast<char*>(dst) + size;
            src = static_cast<char*>(src) + size;
        }

        success = true;
    }
    __finally
    {
        if (!success)
        {
            __ArrayUnwind(dst, size, i, destructor);
        }
    }
}

__RELIABILITY_CONTRACT
void CALEETYPE __ehvec_copy_ctor_vb(
    void*            dst,           // Pointer to destination array
    void*            src,           // Pointer to source array
    size_t           size,          // Size of each element (including padding)
    int              count,         // Number of elements in the array
    constructor_type constructor,   // Constructor to call
    destructor_type  destructor     // Destructor to call should exception be thrown
    )
{
    __ehvec_copy_ctor_vb(dst, src, size, static_cast<size_t>(count), constructor, destructor);
}