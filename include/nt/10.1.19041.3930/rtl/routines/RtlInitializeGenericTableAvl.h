/**
 * @file RtlInitializeGenericTableAvl.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/15   init
 */

#ifndef __MY_RTLINITIALIZEGENERICTABLEAVL_HEADER_FILE__
#define __MY_RTLINITIALIZEGENERICTABLEAVL_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
 
 
 
 
 

void __stdcall
RtlInitializeGenericTableAvl (
     struct _RTL_AVL_TABLE * Table,
     PRTL_AVL_COMPARE_ROUTINE CompareRoutine,
     PRTL_AVL_ALLOCATE_ROUTINE AllocateRoutine,
     PRTL_AVL_FREE_ROUTINE FreeRoutine,
     PVOID TableContext
);
 
 
 
 
 
 
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY_RTLINITIALIZEGENERICTABLEAVL_HEADER_FILE__

