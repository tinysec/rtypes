/**
 * @file PsGetProcessId.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/15   init
 */

#ifndef __MY_PSGETPROCESSID_HEADER_FILE__
#define __MY_PSGETPROCESSID_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
 
 
 
 
 
 
HANDLE __stdcall PsGetProcessId(struct _EPROCESS *Process);
 
 
 
 
 
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY_PSGETPROCESSID_HEADER_FILE__

