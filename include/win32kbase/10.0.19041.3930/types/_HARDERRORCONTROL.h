/**
 * @file _HARDERRORCONTROL.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/27   init
 */

#ifndef __MY__HARDERRORCONTROL_HEADER_FILE__
#define __MY__HARDERRORCONTROL_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
 
 
 
enum _HARDERRORCONTROL {
    HardErrorSetup,
    HardErrorCleanup,
    HardErrorAttach,
    HardErrorAttachUser,
    HardErrorDetach,
    HardErrorAttachNoQueue,
    HardErrorDetachNoQueue,
    HardErrorQuery,
    HardErrorInDefDesktop,
} ;
 
 
 
 
 
 
 
 
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY__HARDERRORCONTROL_HEADER_FILE__

