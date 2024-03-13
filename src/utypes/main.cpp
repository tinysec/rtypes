/**
 * @file main.cpp
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2008/03/13   init
*/

#include <precompile.h>

#include "tests.h"

//////////////////////////////////////////////////////////////////////////

EXTERN_C int __cdecl main( __in int argc , __in char** argv)
{
	NTSTATUS status = STATUS_UNSUCCESSFUL;

	status = TestMain();
	if ( !NT_SUCCESS(status) )
	{
		return -1;
	}

	// break into debugger.
	__debugbreak();

	return 0;
}

