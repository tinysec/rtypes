/**
 * @file knew.cpp
 * @author tinysec
 * @brief kernel memory allocator
 * @version 0.0.1
    * 2017/11/02   init
 */

#ifdef BUILD_R0
//////////////////////////////////////////////////////////////////////////
#include <ntddk.h>
//////////////////////////////////////////////////////////////////////////

void* __cdecl operator new( __in size_t size)
{
	void* memory = NULL;

	if ( 0 != size )
	{
		memory = ExAllocatePoolWithTag( NonPagedPool , size , 'tiny');

		if ( NULL != memory )
		{
			RtlZeroMemory( memory , size);
		}
	}

	return memory;
}

void __cdecl operator delete( __in_opt void* memory)
{
	if ( NULL != memory)
	{
		ExFreePool(memory);
	}
}

//////////////////////////////////////////////////////////////////////////
#endif // #ifdef BUILD_R0
//////////////////////////////////////////////////////////////////////////


  
  
