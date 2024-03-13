/**
 * @file kdprint.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2011/11/03   init
 */

#include "precompile.h"

#ifndef BUILD_R0
	#include <dpfilter.h>
#endif //#ifndef BUILD_R0

#include <stdarg.h>


//////////////////////////////////////////////////////////////////////////


NTSYSAPI ULONG NTAPI vDbgPrintEx( __in ULONG ComponentId, __in ULONG Level, __in_z PCCH Format, __in va_list arglist );

//////////////////////////////////////////////////////////////////////////

ULONG __cdecl vkprintf(__in const char* format , __in va_list ap )
{
	return vDbgPrintEx(  DPFLTR_IHVDRIVER_ID , DPFLTR_ERROR_LEVEL , format , ap );
}

ULONG __cdecl kprintf(__in const char* format , ... )
{
	ULONG		value = 0;

	va_list		ap = NULL;

	va_start( ap , format );

	value = vDbgPrintEx( DPFLTR_IHVDRIVER_ID , DPFLTR_ERROR_LEVEL , format , ap );

	va_end( ap );

	return value;
}

