/**
 * @file PsGetProcessWow64Process.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/15   init
 */
#ifndef __MY_PSGETPROCESSWOW64PROCESS_HEADER_FILE__
#define __MY_PSGETPROCESSWOW64PROCESS_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
  
  
struct _PEB32* __stdcall PsGetProcessWow64Process(struct _EPROCESS * Process);
  
  
  
  
  
  
  
  
  
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY_PSGETPROCESSWOW64PROCESS_HEADER_FILE__

