/**
 * @file FltInitExtraCreateParameterLookasideList.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/16   init
 */
#ifndef __MY_FLTINITEXTRACREATEPARAMETERLOOKASIDELIST_HEADER_FILE__
#define __MY_FLTINITEXTRACREATEPARAMETERLOOKASIDELIST_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
  
  
  
  
void __stdcall FltInitExtraCreateParameterLookasideList(
	struct _FLT_FILTER *               Filter,
	PVOID                     Lookaside,
	ULONG  Flags,
	SIZE_T                    Size,
	ULONG                     Tag
);
  
  
  
  
  
  
  
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY_FLTINITEXTRACREATEPARAMETERLOOKASIDELIST_HEADER_FILE__

