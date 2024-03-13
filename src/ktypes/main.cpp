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

EXTERN_C NTSTATUS DriverEntry( __in DRIVER_OBJECT* driver , __in UNICODE_STRING* service_path ) 
{
	return TestMain();
}
