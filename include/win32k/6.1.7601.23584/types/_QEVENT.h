/**
 * @file _QEVENT.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/04/02   init
 */

#ifndef __MY__QEVENT_HEADER_FILE__
#define __MY__QEVENT_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
 
 
/*
 * dwQEvent values for QMSG structure.
 */
enum _QEVENT
{

 QEVENT_SHOWWINDOW            = 0x0001 ,

 QEVENT_CANCELMODE           = 0x0002,

 QEVENT_SETWINDOWPOS         = 0x0003,

 QEVENT_UPDATEKEYSTATE       = 0x0004,

 QEVENT_DEACTIVATE           = 0x0005,

 QEVENT_ACTIVATE             = 0x0006,

 QEVENT_POSTMESSAGE          = 0x0007,  // Chicago

 QEVENT_EXECSHELL            = 0x0008,  // Chicago

 QEVENT_CANCELMENU           = 0x0009,  // Chicago

 QEVENT_DESTROYWINDOW        = 0x000A,

 QEVENT_ASYNCSENDMSG         = 0x000B,

 QEVENT_HUNGTHREAD           = 0x000C,

 QEVENT_CANCELMOUSEMOVETRK   = 0x000D,

 QEVENT_NOTIFYWINEVENT       = 0x000E,

 QEVENT_RITACCESSIBILITY     = 0x000F,

 QEVENT_RITSOUND             = 0x0010,

 QEVENT_APPCOMMAND           = 0x0011

};
 
 
 
 
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY__QEVENT_HEADER_FILE__

