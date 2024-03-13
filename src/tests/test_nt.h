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

#include "nt/EVENT_DATA_DESCRIPTOR.h"

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
};

 
 
 
 
//////////////////////////////////////////////////////////////////
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY_TEST_NT_HEADER_FILE__

