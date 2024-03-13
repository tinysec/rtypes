/**
 * @file KdPrint.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/01/23   init
 */
#ifndef __MY_KDPRINT_HEADER_FILE__
#define __MY_KDPRINT_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
 
 
 
#include <stdarg.h>

//////////////////////////////////////////////////////////////////////////

ULONG __cdecl vkprintf(__in const char* format , __in va_list ap );


ULONG __cdecl kprintf(__in const char* format , ... );


//////////////////////////////////////////////////////////////////////////

#if DBG

	#undef KdPrint

	#define KdPrint(x)		kprintf x

#else
	
	#define KdPrint(x)			

#endif // #if DBG

 
 
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY_KDPRINT_HEADER_FILE__

