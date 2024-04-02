/**
 * @file precompile.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2008/11/05   init
 */
#ifndef __MY_PRECOMPILE_HEADER_FILE__
#define __MY_PRECOMPILE_HEADER_FILE__
//////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////


#pragma warning (disable : 4786)	

#pragma warning (disable : 4702)	

#pragma warning (disable : 4541)	

#pragma warning (disable : 4242)

#pragma warning (disable : 4819)	

#pragma warning (disable : 4127)		// conditional expression is constant


//////////////////////////////////////////////////////////////////////////





#ifdef BUILD_R0
////////////////////////////////////////////////////////////////////

	#include <ntddk.h>

	#include <windef.h>

////////////////////////////////////////////////////////////////////
#else
////////////////////////////////////////////////////////////////////


	// Exclude rarely-used stuff from Windows headers
	#ifndef WIN32_LEAN_AND_MEAN
		#define WIN32_LEAN_AND_MEAN	
	#endif


	#ifndef STRSAFE_NO_DEPRECATE
		#define STRSAFE_NO_DEPRECATE
	#endif //#ifndef STRSAFE_NO_DEPRECATE


	#ifndef _CRT_SECURE_NO_WARNINGS
		#define _CRT_SECURE_NO_WARNINGS
	#endif // #ifndef _CRT_SECURE_NO_WARNINGS



	#ifndef WIN32_NO_STATUS
		#define WIN32_NO_STATUS
	#endif

	#include <windows.h>

	typedef LONG NTSTATUS;

	#undef WIN32_NO_STATUS

	#include <ntstatus.h>

	//////////////////////////////////////////////////////////////////////////

	#ifndef NT_SUCCESS
		#define NT_SUCCESS(Status) (((NTSTATUS)(Status)) >= 0)
	#endif

////////////////////////////////////////////////////////////////////
#endif // #ifdef BUILD_R0


//////////////////////////////////////////////////////////////////////////


#include "KdPrint.h"

#include "static_assert.h"


//////////////////////////////////////////////////////////////////////////
#endif //__MY_PRECOMPILE_HEADER_FILE__

