/**
 * @file _CALLBACKSTATUS.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/26   init
 */

#ifndef __MY__CALLBACKSTATUS_HEADER_FILE__
#define __MY__CALLBACKSTATUS_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
 
 
 
 
 
struct _CALLBACKSTATUS
{
    UINT_PTR    RetVal;
 
    DWORD       cbOutput;
 
    void*       pOutput;
};
 
 
 
 
 
 
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY__CALLBACKSTATUS_HEADER_FILE__

