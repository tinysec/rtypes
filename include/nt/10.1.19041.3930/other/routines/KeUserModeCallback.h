/**
 * @file KeUserModeCallback.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/26   init
 */

#ifndef __MY_KEUSERMODECALLBACK_HEADER_FILE__
#define __MY_KEUSERMODECALLBACK_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
 
 
 
NTSTATUS __stdcall KeUserModeCallback(

	 UINT32		APINumber,

	 void*		InputBuffer,

	 UINT32		InputLength,

	 void**		ppOutputBuffer,

	 UINT32*	pOutputLength
);
 
 
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY_KEUSERMODECALLBACK_HEADER_FILE__

