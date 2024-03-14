/**
 * @file test_win32kfull.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/13   init
 */

#ifndef __MY_TEST_WIN32KFULL_HEADER_FILE__
#define __MY_TEST_WIN32KFULL_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
//////////////////////////////////////////////////////////////////
 
#include <precompile.h>

#include "win32kfull/types/tagWND.h"

//////////////////////////////////////////////////////////////////////////



class TestWin32kFull
{
public:

	static NTSTATUS Test()
	{
		test_tagWND();

		return 0;
	}

	static void test_tagWND()
	{
		tagWND _dummy;
	}
};
 
 
 
 
 
 
 
 
 
//////////////////////////////////////////////////////////////////
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY_TEST_WIN32KFULL_HEADER_FILE__

