/**
 * @file PsGetThreadProcess.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/16   init
 */
#ifndef __MY_PSGETTHREADPROCESS_HEADER_FILE__
#define __MY_PSGETTHREADPROCESS_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
  
  
  
  
  

PEPROCESS __stdcall PsGetThreadProcess	(	 PETHREAD 	Thread	);

  
  
  
  
  
  
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY_PSGETTHREADPROCESS_HEADER_FILE__

