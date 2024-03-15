/**
 * @file _ERESOURCE.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/15   init
 */

#ifndef __MY__ERESOURCE_HEADER_FILE__
#define __MY__ERESOURCE_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
 
 
 
 
// 0x68
struct _ERESOURCE
{
	// offset = 0x000;
	struct _LIST_ENTRY SystemResourcesList;

	// offset = 0x010;
	struct _OWNER_ENTRY* OwnerTable;


	// offset = 0x018;
	INT16 ActiveCount;

	// offset = 0x01A;
	union
	{
		// offset = 0x01A;
		UINT16 Flag;


		struct
		{
			// offset = 0x01A;
			UCHAR	ReservedLowFlags;

			// offset = 0x01B;
			UCHAR	WaiterPriority;
		};
	};

	

	// offset = 0x01c;
	UINT32 offset_0x01c;



	// offset = 0x020;
	void* SharedWaiters;


	// offset = 0x028;
	void*  ExclusiveWaiters;



	// offset = 0x030;
	UINT32 offset_0x030;

	// offset = 0x034;
	UINT32 offset_0x034;

	// offset = 0x038;
	UINT32 offset_0x038;

	// offset = 0x03c;
	UINT32 offset_0x03c;


	// offset = 0x040;
	UINT32 ActiveEntries;

	// offset = 0x044;
	UINT32 ContentionCount;

	// offset = 0x048;
	UINT32 NumberOfSharedWaiters;

	// offset = 0x04c;
	UINT32 NumberOfExclusiveWaiters;


	// offset = 0x050;
	void* Reserved2;

	// offset = 0x058;
	union
	{
		void* Address;

		UINT64 CreatorBackTraceIndex;
	};

	// offset = 0x060;
	UINT64 SpinLock;
};
 
 
 
 
 
 
 
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY__ERESOURCE_HEADER_FILE__

