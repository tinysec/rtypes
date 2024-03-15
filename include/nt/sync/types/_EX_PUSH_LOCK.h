/**
 * @file _EX_PUSH_LOCK.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/15   init
 */

#ifndef __MY__EX_PUSH_LOCK_HEADER_FILE__
#define __MY__EX_PUSH_LOCK_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
 
 
 
 
 struct _EX_PUSH_LOCK
 {
	 union
	 {	
		UINT64 Value;

		void* Ptr;
	 };
 };
 
 
 
 
 
 
 
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY__EX_PUSH_LOCK_HEADER_FILE__

