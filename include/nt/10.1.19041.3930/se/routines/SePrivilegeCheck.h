/**
 * @file SePrivilegeCheck.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/15   init
 */
#ifndef __MY_SEPRIVILEGECHECK_HEADER_FILE__
#define __MY_SEPRIVILEGECHECK_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
  
  
  
  
  
  
BOOLEAN __stdcall  SePrivilegeCheck(

struct _PRIVILEGE_SET*            RequiredPrivileges,

struct _SECURITY_SUBJECT_CONTEXT* SubjectSecurityContext,

KPROCESSOR_MODE           AccessMode
);
  
  
  
  
  
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY_SEPRIVILEGECHECK_HEADER_FILE__

