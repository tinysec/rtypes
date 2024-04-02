/**
 * @file FltSetInstanceContext.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/16   init
 */
#ifndef __MY_FLTSETINSTANCECONTEXT_HEADER_FILE__
#define __MY_FLTSETINSTANCECONTEXT_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
  
  
  
  
  
  
NTSTATUS __stdcall FltSetInstanceContext(
	struct _FLT_INSTANCE *             Instance,
	enum _FLT_SET_CONTEXT_OPERATION Operation,
	PVOID      NewContext,
	PVOID*	OldContext
);
  
  
  
  
  
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY_FLTSETINSTANCECONTEXT_HEADER_FILE__

