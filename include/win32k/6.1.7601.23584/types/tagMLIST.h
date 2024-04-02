/**
 * @file tagMLIST.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/04/01   init
 */

#ifndef __MY_TAGMLIST_HEADER_FILE__
#define __MY_TAGMLIST_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
 
 
 
 
 
 // size = 0x018
struct tagMLIST
{
	// offset = 0x000
	struct tagQMSG* pqmsgRead;


	// offset = 0x008
	struct tagQMSG* pqmsgWriteLast;



	// offset = 0x010
	UINT32 cMsgs;


#ifdef _WIN64
	// offset = 0x014
	UINT32 offset_0x014;
#endif
	

};
 
 
 
 
 
 
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY_TAGMLIST_HEADER_FILE__

