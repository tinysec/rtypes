/**
 * @file _SECURITY_SUBJECT_CONTEXT.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/15   init
 */
#ifndef __MY__SECURITY_SUBJECT_CONTEXT_HEADER_FILE__
#define __MY__SECURITY_SUBJECT_CONTEXT_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
  
  
  
  //
//  Data structure used to capture subject security context
//  for access validations and auditing.
//
//  THE FIELDS OF THIS DATA STRUCTURE SHOULD BE CONSIDERED OPAQUE
//  BY ALL EXCEPT THE SECURITY ROUTINES.
//

struct _SECURITY_SUBJECT_CONTEXT {

    PACCESS_TOKEN ClientToken;

    SECURITY_IMPERSONATION_LEVEL ImpersonationLevel;

    PACCESS_TOKEN PrimaryToken;

    PVOID ProcessAuditId;
};

  
  
  
  
  
  
  
  
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY__SECURITY_SUBJECT_CONTEXT_HEADER_FILE__

