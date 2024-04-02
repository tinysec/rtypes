/**
 * @file _SHOW_WINDOW_COMMAND.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/04/02   init
 */

#ifndef __MY__SHOW_WINDOW_COMMAND_HEADER_FILE__
#define __MY__SHOW_WINDOW_COMMAND_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
 
 
 
 
 /*
 * ShowWindow() Commands
 */

enum _SHOW_WINDOW_COMMAND
{
	SW_HIDE             = 0,
	SW_SHOWNORMAL       = 1,
	SW_NORMAL           = 1,
	SW_SHOWMINIMIZED    = 2,
	SW_SHOWMAXIMIZED    = 3,
	SW_MAXIMIZE         = 3,
	SW_SHOWNOACTIVATE   = 4,
	SW_SHOW             = 5,
	SW_MINIMIZE         = 6,
	SW_SHOWMINNOACTIVE  = 7,
	SW_SHOWNA           = 8,
	SW_RESTORE          = 9,
	SW_SHOWDEFAULT      = 10,
	SW_FORCEMINIMIZE    = 11,
	SW_MAX              = 11
};


 
 
 
 
 
 
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY__SHOW_WINDOW_COMMAND_HEADER_FILE__

