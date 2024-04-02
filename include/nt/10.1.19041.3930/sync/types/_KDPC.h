/**
 * @file _KDPC.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/15   init
 */

#ifndef __MY__KDPC_HEADER_FILE__
#define __MY__KDPC_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
 

// size = 0x040
struct _KDPC
{
	union
	{
		// offset = 0x000;
		UINT32 TargetInfoAsUlong;

		// offset = 0x000;
		struct
		{
			// offset = 0x000;
			UCHAR	Type;

			// offset = 0x001;
			UCHAR	Importance;

			// offset = 0x002;
			USHORT	Number;
		};
	};

	

	// offset = 0x004;
	UINT32 offset_0x004;



	// offset = 0x008;
	struct _SINGLE_LIST_ENTRY DpcListEntry;




	// offset = 0x010;
	UINT64 ProcessorHistory;



	// offset = 0x018;
	void* DeferredRoutine;

	// offset = 0x020;
	void*  DeferredContext;


	// offset = 0x028;
	void*  SystemArgument1;


	// offset = 0x030;
	void*  SystemArgument2;

	// offset = 0x038;
	void*  DpcData;

};

 
 
 
 
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY__KDPC_HEADER_FILE__

