/**
 * @file main.cpp
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2008/03/13   init
*/

#include <precompile.h>

#include "tests/test_nt.h"

#include "tests/test_win32kbase.h"

#include "tests/test_win32kfull.h"

#include "tests/test_msrpc.h"


//////////////////////////////////////////////////////////////////////////


NTSTATUS TestMain()
{	
	NTSTATUS	status = STATUS_UNSUCCESSFUL;

	NTSTATUS	final_status = STATUS_UNSUCCESSFUL;

	do 
	{
		status = TestNT::Test();
		if ( !NT_SUCCESS(status) )
		{
			final_status = status;
			break;
		}

		status = TestWin32kBase::Test();
		if ( !NT_SUCCESS(status) )
		{
			final_status = status;
			break;
		}

		status = TestWin32kFull::Test();
		if ( !NT_SUCCESS(status) )
		{
			final_status = status;
			break;
		}

		status = TestMSRPC::Test();
		if ( !NT_SUCCESS(status) )
		{
			final_status = status;
			break;
		}

		final_status = STATUS_SUCCESS;

	} while (FALSE);

	return final_status;
}

