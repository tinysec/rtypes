/**
 * @file FltAllocateContext.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/14   init
 */
#ifndef __MY_FLTALLOCATECONTEXT_HEADER_FILE__
#define __MY_FLTALLOCATECONTEXT_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
  
  
  
  
NTSTATUS __stdcall FltAllocateContext(
   struct _FLT_FILTER*      Filter,
    USHORT ContextType,
    SIZE_T           ContextSize,
    POOL_TYPE        PoolType,
   struct _FLT_CONTEXT** ReturnedContext
);
  
  
  
  
  
  
  
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY_FLTALLOCATECONTEXT_HEADER_FILE__

