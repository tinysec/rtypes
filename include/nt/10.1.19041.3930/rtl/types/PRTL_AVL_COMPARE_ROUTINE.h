/**
 * @file PRTL_AVL_COMPARE_ROUTINE.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/15   init
 */

#ifndef __MY_PRTL_AVL_COMPARE_ROUTINE_HEADER_FILE__
#define __MY_PRTL_AVL_COMPARE_ROUTINE_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
 
 
 
 
 

 
 typedef
RTL_GENERIC_COMPARE_RESULTS
__stdcall
RTL_AVL_COMPARE_ROUTINE (
     struct _RTL_AVL_TABLE *Table,
     PVOID FirstStruct,
     PVOID SecondStruct
    );

typedef RTL_AVL_COMPARE_ROUTINE *PRTL_AVL_COMPARE_ROUTINE;

 
 
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY_PRTL_AVL_COMPARE_ROUTINE_HEADER_FILE__

