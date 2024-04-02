/**
 * @file _RTL_AVL_TABLE.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/15   init
 */

#ifndef __MY__RTL_AVL_TABLE_HEADER_FILE__
#define __MY__RTL_AVL_TABLE_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
 
 
#include "_RTL_BALANCED_LINKS.h"

#include "PRTL_AVL_COMPARE_ROUTINE.h"

#include "PRTL_AVL_ALLOCATE_ROUTINE.h"

#include "PRTL_AVL_FREE_ROUTINE.h"

//////////////////////////////////////////////////////////////////////////
 
 
 //  To use the generic table package the user declares a variable of type
//  GENERIC_TABLE and then uses the routines described below to initialize
//  the table and to manipulate the table.  Note that the generic table
//  should really be an opaque type.
//

struct _RTL_AVL_TABLE {

    struct _RTL_BALANCED_LINKS* BalancedRoot;

    PVOID OrderedPointer;

    ULONG WhichOrderedElement;

    ULONG NumberGenericTableElements;

    ULONG DepthOfTree;

    struct _RTL_BALANCED_LINKS* RestartKey;

    ULONG DeleteCount;

    PRTL_AVL_COMPARE_ROUTINE CompareRoutine;

    PRTL_AVL_ALLOCATE_ROUTINE AllocateRoutine;

    PRTL_AVL_FREE_ROUTINE FreeRoutine;

    PVOID TableContext;
};
 
 
 
 
 
 
 
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY__RTL_AVL_TABLE_HEADER_FILE__

