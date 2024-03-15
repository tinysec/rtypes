/**
 * @file test_nt.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/13   init
 */

#ifndef __MY_TEST_NT_HEADER_FILE__
#define __MY_TEST_NT_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
//////////////////////////////////////////////////////////////////
 
#include <precompile.h>

#include "nt/etw/types/EVENT_DATA_DESCRIPTOR.h"

#include "nt/wpp/types/_WPP_TRACE_CONTROL_BLOCK.h"

#include "nt/wpp/types/WPP_PROJECT_CONTROL_BLOCK.h"

//////////////////////////////////////////////////////////////////////////
 
class TestNT
{
public:

	static NTSTATUS Test()
	{
		test_EVENT_DATA_DESCRIPTOR();

		return 0;
	}

private:

	static void test_EVENT_DATA_DESCRIPTOR()
	{
		//EVENT_DATA_DESCRIPTOR _dummy;
		
		STATIC_ASSERT( sizeof(EVENT_DATA_DESCRIPTOR) == 16 );
	}

	static void test_WPP_PROJECT_CONTROL_BLOCK()
	{
		WPP_PROJECT_CONTROL_BLOCK _dummy;
	}	
};

 
 
 
 
//////////////////////////////////////////////////////////////////
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY_TEST_NT_HEADER_FILE__

