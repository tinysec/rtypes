/**
 * @file PFLT_SECTION_CONFLICT_NOTIFICATION_CALLBACK.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/14   init
 */

#ifndef __MY_PFLT_SECTION_CONFLICT_NOTIFICATION_CALLBACK_HEADER_FILE__
#define __MY_PFLT_SECTION_CONFLICT_NOTIFICATION_CALLBACK_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
 
 
 
 
 
typedef NTSTATUS (__stdcall *PFLT_SECTION_CONFLICT_NOTIFICATION_CALLBACK)
(
   struct _FLT_INSTANCE* Instance,
  struct _FLT_CONTEXT* SectionContext,
  struct _FLT_CALLBACK_DATA* Data
);
 
 
 
 
 
 
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY_PFLT_SECTION_CONFLICT_NOTIFICATION_CALLBACK_HEADER_FILE__

