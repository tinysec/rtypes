/**
 * @file _WINDOW_MESSAGE.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/25   init
 */

#ifndef __MY_WINDOW_MESSAGE_HEADER_FILE__
#define __MY_WINDOW_MESSAGE_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////

 
 
enum _WINDOW_MESSAGE
{
	WM_CREATE                       = 0x0001 ,

	WM_PAINT                        = 0x000F,

	WM_CLOSE                        = 0x0010,

	WM_ERASEBKGND                  = 0x0014 ,

	WM_SETCURSOR                    =0x0020 ,

	WM_SYSCOLORCHANGE             = 0x0015,

	WM_FULLSCREEN = 0x3A,

	WM_WINDOWPOSCHANGING            =0x0046,

	WM_INPUTLANGCHANGE              =0x0051,

	WM_SETICON                      = 0x0080,

	WM_NCLBUTTONDOWN                = 0x00A1,

	WM_SYSCOMMAND = 0x0112,

	WM_TIMER                       =  0x0113,
	WM_HSCROLL                      = 0x0114,
	WM_VSCROLL                      = 0x0115,
	WM_INITMENU                     = 0x0116,
	WM_INITMENUPOPUP                = 0x0117,


	WM_UPDATEUISTATE                = 0x0128,

	WM_LBUTTONDBLCLK                = 0x0203,



	WM_PARENTNOTIFY = 0x0210 ,

	WM_TOUCH = 0x0240 ,

	WM_NCPOINTERUPDATE              = 0x0241 ,
	WM_NCPOINTERDOWN                = 0x0242 ,
	WM_NCPOINTERUP                  = 0x0243 ,
	WM_POINTERUPDATE                = 0x0245 ,
	WM_POINTERDOWN                  = 0x0246 ,
	WM_POINTERUP                    = 0x0247 ,
	WM_POINTERENTER                 = 0x0249 ,
	WM_POINTERLEAVE                 = 0x024A ,
	WM_POINTERACTIVATE              = 0x024B ,
	WM_POINTERCAPTURECHANGED        = 0x024C ,
	WM_TOUCHHITTESTING              = 0x024D ,
	WM_POINTERWHEEL                 = 0x024E ,
	WM_POINTERHWHEEL                = 0x024F ,
	DM_POINTERHITTEST               = 0x0250 ,
	WM_POINTERROUTEDTO              = 0x0251 ,
	WM_POINTERROUTEDAWAY            = 0x0252 ,
	WM_POINTERROUTEDRELEASED        = 0x0253 ,






};
 
 

 
 
 
 
 
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY_WINDOW_MESSAGE_HEADER_FILE__

