/**
 * @file PDRIVER_DISPATCH.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/14   init
 */

#ifndef __MY_PDRIVER_DISPATCH_HEADER_FILE__
#define __MY_PDRIVER_DISPATCH_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
 
 
 
 

typedef NTSTATUS __stdcall DRIVER_DISPATCH 
(
 struct _DEVICE_OBJECT *DeviceObject,
 struct _IRP *Irp
);

typedef DRIVER_DISPATCH *PDRIVER_DISPATCH;

 
 
 
 
 
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY_PDRIVER_DISPATCH_HEADER_FILE__

