/**
 * @file PRTL_AVL_FREE_ROUTINE.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/15   init
 */

#ifndef __MY_PRTL_AVL_FREE_ROUTINE_HEADER_FILE__
#define __MY_PRTL_AVL_FREE_ROUTINE_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
 
 
 
 
typedef
void
__stdcall
RTL_AVL_FREE_ROUTINE (
     struct _RTL_AVL_TABLE *Table,
     PVOID Buffer
    );

typedef RTL_AVL_FREE_ROUTINE *PRTL_AVL_FREE_ROUTINE;
 
 
 
 
 
 
 
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY_PRTL_AVL_FREE_ROUTINE_HEADER_FILE__

