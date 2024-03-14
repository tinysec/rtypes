/**
 * @file _FLT_CONTEXT_REGISTRATION.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/14   init
 */

#ifndef __MY__FLT_CONTEXT_REGISTRATION_HEADER_FILE__
#define __MY__FLT_CONTEXT_REGISTRATION_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
 
#include "PFLT_CONTEXT_CLEANUP_CALLBACK.h"

#include "PFLT_CONTEXT_ALLOCATE_CALLBACK.h"

#include "PFLT_CONTEXT_FREE_CALLBACK.h"

//////////////////////////////////////////////////////////////////////////
 
 
struct _FLT_CONTEXT_REGISTRATION {

    //
    //  Identifies the type of this context
    //

    USHORT  ContextType;

    //
    //  Local flags
    //

    USHORT  Flags;

    //
    //  Routine to call to cleanup the context before it is deleted.
    //  This may be NULL if not cleanup is needed.
    //

    PFLT_CONTEXT_CLEANUP_CALLBACK ContextCleanupCallback;

    //
    //  Defines the size & pool tag the mini-filter wants for the given context.
    //  FLT_VARIABLE_SIZED_CONTEXTS may be specified for the size if variable
    //  sized contexts are used.  A size of zero is valid.  If an empty pooltag
    //  value is specified, the FLTMGR will use a context type specific tag.
    //
    //  If an explicit size is specified, the FLTMGR internally optimizes the
    //  allocation of that entry.
    //
    //  NOTE:  These fields are ignored if Allocate & Free routines are
    //         specifed.
    //

    SIZE_T Size;

    ULONG PoolTag;

    //
    //  Specifies the ALLOCATE and FREE routines that should be used
    //  when allocating a context for this mini-filter.
    //
    //  NOTE: The above size & PoolTag fields are ignored when these routines
    //        are defined.
    //

    PFLT_CONTEXT_ALLOCATE_CALLBACK ContextAllocateCallback;

    PFLT_CONTEXT_FREE_CALLBACK ContextFreeCallback;

    //
    //  Reserved for future expansion
    //

    PVOID Reserved1;

};

 
 
 
 
 
 
 
 
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY__FLT_CONTEXT_REGISTRATION_HEADER_FILE__

