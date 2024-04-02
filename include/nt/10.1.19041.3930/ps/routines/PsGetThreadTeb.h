/**
 * @file PsGetThreadTeb.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/16   init
 */
#ifndef __MY_PSGETTHREADTEB_HEADER_FILE__
#define __MY_PSGETTHREADTEB_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
  
  
  
  
struct _TEB* __stdcall PsGetThreadTeb	(	 PETHREAD 	Thread	);

  
  
  
  
  
  
  
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY_PSGETTHREADTEB_HEADER_FILE__

