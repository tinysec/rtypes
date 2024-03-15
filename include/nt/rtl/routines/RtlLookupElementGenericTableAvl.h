/**
 * @file RtlLookupElementGenericTableAvl.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/15   init
 */

#ifndef __MY_RTLLOOKUPELEMENTGENERICTABLEAVL_HEADER_FILE__
#define __MY_RTLLOOKUPELEMENTGENERICTABLEAVL_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
 
 
#include "../types/_RTL_AVL_TABLE.h"

//////////////////////////////////////////////////////////////////////////
 
 
PVOID __stdcall RtlLookupElementGenericTableAvl (
 struct _RTL_AVL_TABLE* Table,
 PVOID Buffer
);

 
 
 
 
 
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY_RTLLOOKUPELEMENTGENERICTABLEAVL_HEADER_FILE__

