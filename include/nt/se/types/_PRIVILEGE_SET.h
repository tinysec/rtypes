/**
 * @file _PRIVILEGE_SET.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/15   init
 */
#ifndef __MY__PRIVILEGE_SET_HEADER_FILE__
#define __MY__PRIVILEGE_SET_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
  
  
  
  
struct _PRIVILEGE_SET {

    ULONG PrivilegeCount;

    ULONG Control;

     LUID_AND_ATTRIBUTES Privilege[1];

} ;
  
 
  
  
  
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY__PRIVILEGE_SET_HEADER_FILE__

