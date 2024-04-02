/**
 * @file _WINDOW_FUNCTION_ID.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/04/02   init
 */

#ifndef __MY__WINDOW_FUNCTION_ID_HEADER_FILE__
#define __MY__WINDOW_FUNCTION_ID_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
 
 
 
 
enum _WINDOW_FUNCTION_ID
{
FNID_START                   = 0x0000029A ,

FNID_WNDPROCSTART           = 0x0000029A,


FNID_SCROLLBAR              = 0x0000029A ,     // xxxSBWndProc;

FNID_ICONTITLE              = 0x0000029B ,     // xxxDefWindowProc;

FNID_MENU                   = 0x0000029C ,     // xxxMenuWindowProc;

FNID_DESKTOP                = 0x0000029D ,     // xxxDesktopWndProc;

FNID_DEFWINDOWPROC          = 0x0000029E ,     // xxxDefWindowProc;

FNID_MESSAGEWND             = 0x0000029F ,     // xxxDefWindowProc;

FNID_SWITCH                 = 0x000002A0 ,     // xxxSwitchWndProc


FNID_WNDPROCEND             = 0x000002A0 ,     // see PatchThreadWindows

FNID_CONTROLSTART           = 0x000002A1,


FNID_BUTTON                 = 0x000002A1 ,     // No server side proc

FNID_COMBOBOX               = 0x000002A2,      // No server side proc

FNID_COMBOLISTBOX           = 0x000002A3,      // No server side proc

FNID_DIALOG                 = 0x000002A4,      // No server side proc

FNID_EDIT                  =  0x000002A5 ,     // No server side proc

FNID_LISTBOX                = 0x000002A6 ,     // No server side proc

FNID_MDICLIENT              = 0x000002A7 ,     // No server side proc

FNID_STATIC                =  0x000002A8 ,     // No server side proc


FNID_IME                    = 0x000002A9 ,     // No server side proc

FNID_CONTROLEND             = 0x000002A9,


FNID_HKINLPCWPEXSTRUCT      = 0x000002AA,

FNID_HKINLPCWPRETEXSTRUCT   = 0x000002AB,

FNID_DEFFRAMEPROC           = 0x000002AC ,     // No server side proc

FNID_DEFMDICHILDPROC        = 0x000002AD ,     // No server side proc

FNID_MB_DLGPROC             = 0x000002AE ,     // No server side proc

FNID_MDIACTIVATEDLGPROC     = 0x000002AF ,     // No server side proc

FNID_SENDMESSAGE            = 0x000002B0,


FNID_SENDMESSAGEFF          = 0x000002B1,

FNID_SENDMESSAGEEX          = 0x000002B2,

FNID_CALLWINDOWPROC         = 0x000002B3,

FNID_SENDMESSAGEBSM         = 0x000002B4,

FNID_TOOLTIP                = 0x000002B5,

FNID_GHOST                  = 0x000002B6,


FNID_SENDNOTIFYMESSAGE      = 0x000002B7,

FNID_SENDMESSAGECALLBACK    = 0x000002B8,


FNID_END                    = 0x000002B8


};
 
 
 
 
 
 
 
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY__WINDOW_FUNCTION_ID_HEADER_FILE__

