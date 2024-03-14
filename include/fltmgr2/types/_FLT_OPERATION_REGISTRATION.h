/**
 * @file _FLT_OPERATION_REGISTRATION.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/14   init
 */

#ifndef __MY__FLT_OPERATION_REGISTRATION_HEADER_FILE__
#define __MY__FLT_OPERATION_REGISTRATION_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
 
#include "PFLT_PRE_OPERATION_CALLBACK.h"

#include "PFLT_POST_OPERATION_CALLBACK.h"


//////////////////////////////////////////////////////////////////////////

 struct _FLT_OPERATION_REGISTRATION 
 {

	UCHAR MajorFunction;

	ULONG  Flags;

	PFLT_PRE_OPERATION_CALLBACK PreOperation;

	PFLT_POST_OPERATION_CALLBACK PostOperation;


	PVOID Reserved1;
} ;

 
 
 
 
 
 
 
 
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY__FLT_OPERATION_REGISTRATION_HEADER_FILE__

