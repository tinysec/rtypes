/**
 * @file PsGetProcessSessionIdEx.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/16   init
 */
#ifndef __MY_PSGETPROCESSSESSIONIDEX_HEADER_FILE__
#define __MY_PSGETPROCESSSESSIONIDEX_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
  
  
  
  
ULONG __stdcall PsGetProcessSessionIdEx(
     PEPROCESS Process
);
  
  
  
  
  
  
  
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY_PSGETPROCESSSESSIONIDEX_HEADER_FILE__

