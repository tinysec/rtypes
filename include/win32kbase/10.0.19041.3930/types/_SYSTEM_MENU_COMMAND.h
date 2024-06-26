/**
 * @file _SYSTEM_MENU_COMMAND.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/26   init
 */

#ifndef __MY_SYSTEM_MENU_COMMAND_HEADER_FILE__
#define __MY_SYSTEM_MENU_COMMAND_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
 
 
 /*
 * System Menu Command Values
 */
enum _SYSTEM_MENU_COMMAND
{
	SC_SIZE          = 0xF000,
	SC_MOVE         =0xF010,
	SC_MINIMIZE     =0xF020,
	SC_MAXIMIZE     =0xF030,
	SC_NEXTWINDOW   =0xF040,
	SC_PREVWINDOW   =0xF050,
	SC_CLOSE        =0xF060,
	SC_VSCROLL      =0xF070,
	SC_HSCROLL      =0xF080,
	SC_MOUSEMENU    =0xF090,
	SC_KEYMENU      =0xF100,
	SC_ARRANGE      =0xF110,
	SC_RESTORE      =0xF120,
	SC_TASKLIST     =0xF130,
	SC_SCREENSAVE   =0xF140,
	SC_HOTKEY       =0xF150,


	SC_DEFAULT      =0xF160,
	SC_MONITORPOWER =0xF170,
	SC_CONTEXTHELP  =0xF180,
	SC_SEPARATOR    =0xF00F
};
 
 
 
 
 
 
 
 
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY_SYSTEM_MENU_COMMAND_HEADER_FILE__

