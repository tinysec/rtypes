/**
 * @file test_fltmgr.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/14   init
 */
#ifndef __MY_TEST_FLTMGR_HEADER_FILE__
#define __MY_TEST_FLTMGR_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
//////////////////////////////////////////////////////////////////
  
  
  
#include <precompile.h>

#include "fltmgr/types/_FLT_PARAMETERS.h"


//////////////////////////////////////////////////////////////////////////

class TestFltMgr
{
public:

	static NTSTATUS Test()
	{
		
		test_FLT_PARAMETERS();

		return 0;
	}

private:



	static void test_FLT_PARAMETERS()
	{
		_FLT_PARAMETERS _dummy;
	}	
};

  
  
  
  
  
  
  
  
//////////////////////////////////////////////////////////////////
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY_TEST_FLTMGR_HEADER_FILE__

