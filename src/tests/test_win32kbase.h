/**
 * @file test_win32kbase.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/13   init
 */

#ifndef __MY_TEST_WIN32KBASE_HEADER_FILE__
#define __MY_TEST_WIN32KBASE_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
//////////////////////////////////////////////////////////////////
 

#include <precompile.h>

#include "win32kbase/types/DEVCAPS.h"

//////////////////////////////////////////////////////////////////////////

 
class TestWin32kBase
{
public:

	static NTSTATUS Test()
	{
		test_DEVCAPS();

		return 0;
	}


	static void test_DEVCAPS()
	{
		DEVCAPS _dummy;
	}
};
 
 
 
 
 
 
 
 
 
//////////////////////////////////////////////////////////////////
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY_TEST_WIN32KBASE_HEADER_FILE__

