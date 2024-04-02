/**
 * @file main.cpp
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2008/03/13   init
*/

#include <precompile.h>

#include "win32k/6.1.7601.23584/types/tagWND.h"

//////////////////////////////////////////////////////////////////////////

EXTERN_C NTSTATUS DriverEntry( __in DRIVER_OBJECT* driver , __in UNICODE_STRING* service_path ) 
{
	tagWND _dummy;

	// break into debugger.
	__debugbreak();

	return 0;
}
