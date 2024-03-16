/**
 * @file KeUnstackDetachProcess.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/16   init
 */
#ifndef __MY_KEUNSTACKDETACHPROCESS_HEADER_FILE__
#define __MY_KEUNSTACKDETACHPROCESS_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
  
  
  
  
void __stdcall KeUnstackDetachProcess(
  struct _KAPC_STATE* ApcState
);
  
  
  
  
  
  
  
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY_KEUNSTACKDETACHPROCESS_HEADER_FILE__

