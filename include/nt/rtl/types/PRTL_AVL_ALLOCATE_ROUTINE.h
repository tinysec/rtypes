/**
 * @file PRTL_AVL_ALLOCATE_ROUTINE.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/15   init
 */

#ifndef __MY_PRTL_AVL_ALLOCATE_ROUTINE_HEADER_FILE__
#define __MY_PRTL_AVL_ALLOCATE_ROUTINE_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
 
 
 
 
 
  
 typedef
PVOID
__stdcall
RTL_AVL_ALLOCATE_ROUTINE (
     struct _RTL_AVL_TABLE *Table,
     CLONG ByteSize
);

typedef RTL_AVL_ALLOCATE_ROUTINE *PRTL_AVL_ALLOCATE_ROUTINE;
 
 
 
 
 
 
 
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY_PRTL_AVL_ALLOCATE_ROUTINE_HEADER_FILE__

