/**
 * @file KeStackAttachProcess.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/15   init
 */
#ifndef __MY_KESTACKATTACHPROCESS_HEADER_FILE__
#define __MY_KESTACKATTACHPROCESS_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
  
  
  
void __stdcall KeStackAttachProcess(
        struct _KPROCESS*   PROCESS,
   struct _KAPC_STATE ApcState
);
  
  
  
  
  
  
  
  
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY_KESTACKATTACHPROCESS_HEADER_FILE__

