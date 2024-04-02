/**
 * @file tagWND.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/04/01   init
 */

#ifndef __MY_TAGWND_HEADER_FILE__
#define __MY_TAGWND_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
 
#include "_THRDESKHEAD.h"

#include "_LARGE_UNICODE_STRING.h"
 
//////////////////////////////////////////////////////////////////////////


// size = 0x128
struct tagWND
{
	// offset = 0x000
	struct _THRDESKHEAD head;

	// offset = 0x028
	union
	{
		UINT32 state;

		struct
		{
			UINT32 bHasMeun         : 1; // Bitfield Pos 0, 1 Bit
			UINT32 bHasVerticalScrollbar : 1; // Bitfield Pos 1, 1 Bit
			UINT32 bHasHorizontalScrollbar : 1; // Bitfield Pos 2, 1 Bit
			UINT32 bHasCaption      : 1; // Bitfield Pos 3, 1 Bit
			UINT32 bSendSizeMoveMsgs : 1; // Bitfield Pos 4, 1 Bit
			UINT32 bMsgBox          : 1; // Bitfield Pos 5, 1 Bit
			UINT32 bActiveFrame     : 1; // Bitfield Pos 6, 1 Bit
			UINT32 bHasSPB          : 1; // Bitfield Pos 7, 1 Bit
			UINT32 bNoNCPaint       : 1; // Bitfield Pos 8, 1 Bit
			UINT32 bSendEraseBackground : 1; // Bitfield Pos 9, 1 Bit
			UINT32 bEraseBackground : 1; // Bitfield Pos 10, 1 Bit
			UINT32 bSendNCPaint     : 1; // Bitfield Pos 11, 1 Bit
			UINT32 bInternalPaint   : 1; // Bitfield Pos 12, 1 Bit
			UINT32 bUpdateDirty     : 1; // Bitfield Pos 13, 1 Bit
			UINT32 bHiddenPopup     : 1; // Bitfield Pos 14, 1 Bit
			UINT32 bForceMenuDraw   : 1; // Bitfield Pos 15, 1 Bit
			UINT32 bDialogWindow    : 1; // Bitfield Pos 16, 1 Bit
			UINT32 bHasCreatestructName : 1; // Bitfield Pos 17, 1 Bit
			UINT32 bServerSideWindowProc : 1; // Bitfield Pos 18, 1 Bit
			UINT32 bAnsiWindowProc  : 1; // Bitfield Pos 19, 1 Bit
			UINT32 bBeingActivated  : 1; // Bitfield Pos 20, 1 Bit
			UINT32 bHasPalette      : 1; // Bitfield Pos 21, 1 Bit
			UINT32 bPaintNotProcessed : 1; // Bitfield Pos 22, 1 Bit
			UINT32 bSyncPaintPending : 1; // Bitfield Pos 23, 1 Bit
			UINT32 bRecievedQuerySuspendMsg : 1; // Bitfield Pos 24, 1 Bit
			UINT32 bRecievedSuspendMsg : 1; // Bitfield Pos 25, 1 Bit
			UINT32 bToggleTopmost   : 1; // Bitfield Pos 26, 1 Bit
			UINT32 bRedrawIfHung    : 1; // Bitfield Pos 27, 1 Bit
			UINT32 bRedrawFrameIfHung : 1; // Bitfield Pos 28, 1 Bit
			UINT32 bAnsiCreator     : 1; // Bitfield Pos 29, 1 Bit
			UINT32 bMaximizesToMonitor : 1; // Bitfield Pos 30, 1 Bit
			UINT32 bDestroyed       : 1; // Bitfield Pos 31, 1 Bit
		};
	};
	

	// offset = 0x02c
	union
	{
		UINT32 state2;

		struct
		{
			UINT32 bWMPaintSent     : 1; // Bitfield Pos 0, 1 Bit
			UINT32 bEndPaintInvalidate : 1; // Bitfield Pos 1, 1 Bit
			UINT32 bStartPaint      : 1; // Bitfield Pos 2, 1 Bit
			UINT32 bOldUI           : 1; // Bitfield Pos 3, 1 Bit
			UINT32 bHasClientEdge   : 1; // Bitfield Pos 4, 1 Bit
			UINT32 bBottomMost      : 1; // Bitfield Pos 5, 1 Bit
			UINT32 bFullScreen      : 1; // Bitfield Pos 6, 1 Bit
			UINT32 bInDestroy       : 1; // Bitfield Pos 7, 1 Bit
			UINT32 bWin31Compat     : 1; // Bitfield Pos 8, 1 Bit
			UINT32 bWin40Compat     : 1; // Bitfield Pos 9, 1 Bit
			UINT32 bWin50Compat     : 1; // Bitfield Pos 10, 1 Bit
			UINT32 bMaximizeMonitorRegion : 1; // Bitfield Pos 11, 1 Bit
			UINT32 bCloseButtonDown : 1; // Bitfield Pos 12, 1 Bit
			UINT32 bMaximizeButtonDown : 1; // Bitfield Pos 13, 1 Bit
			UINT32 bMinimizeButtonDown : 1; // Bitfield Pos 14, 1 Bit
			UINT32 bHelpButtonDown  : 1; // Bitfield Pos 15, 1 Bit
			UINT32 bScrollBarLineUpBtnDown : 1; // Bitfield Pos 16, 1 Bit
			UINT32 bScrollBarPageUpBtnDown : 1; // Bitfield Pos 17, 1 Bit
			UINT32 bScrollBarPageDownBtnDown : 1; // Bitfield Pos 18, 1 Bit
			UINT32 bScrollBarLineDownBtnDown : 1; // Bitfield Pos 19, 1 Bit
			UINT32 bAnyScrollButtonDown : 1; // Bitfield Pos 20, 1 Bit
			UINT32 bScrollBarVerticalTracking : 1; // Bitfield Pos 21, 1 Bit
			UINT32 bForceNCPaint    : 1; // Bitfield Pos 22, 1 Bit
			UINT32 bForceFullNCPaintClipRgn : 1; // Bitfield Pos 23, 1 Bit
			UINT32 FullScreenMode   : 3; // Bitfield Pos 24, 3 Bits
			UINT32 bCaptionTextTruncated : 1; // Bitfield Pos 27, 1 Bit
			UINT32 bNoMinmaxAnimatedRects : 1; // Bitfield Pos 28, 1 Bit
			UINT32 bSmallIconFromWMQueryDrag : 1; // Bitfield Pos 29, 1 Bit
			UINT32 bShellHookRegistered : 1; // Bitfield Pos 30, 1 Bit
			UINT32 bWMCreateMsgProcessed : 1; // Bitfield Pos 31, 1 Bit

		};
	};
	


	// offset = 0x030
	union
	{
		UINT32 ExStyle;

		struct
		{
			UINT32 bWS_EX_DLGMODALFRAME : 1; // Bitfield Pos 0, 1 Bit
			UINT32 bUnused1         : 1; // Bitfield Pos 1, 1 Bit
			UINT32 bWS_EX_NOPARENTNOTIFY : 1; // Bitfield Pos 2, 1 Bit
			UINT32 bWS_EX_TOPMOST   : 1; // Bitfield Pos 3, 1 Bit
			UINT32 bWS_EX_ACCEPTFILE : 1; // Bitfield Pos 4, 1 Bit
			UINT32 bWS_EX_TRANSPARENT : 1; // Bitfield Pos 5, 1 Bit
			UINT32 bWS_EX_MDICHILD  : 1; // Bitfield Pos 6, 1 Bit
			UINT32 bWS_EX_TOOLWINDOW : 1; // Bitfield Pos 7, 1 Bit
			UINT32 bWS_EX_WINDOWEDGE : 1; // Bitfield Pos 8, 1 Bit
			UINT32 bWS_EX_CLIENTEDGE : 1; // Bitfield Pos 9, 1 Bit
			UINT32 bWS_EX_CONTEXTHELP : 1; // Bitfield Pos 10, 1 Bit
			UINT32 bMakeVisibleWhenUnghosted : 1; // Bitfield Pos 11, 1 Bit
			UINT32 bWS_EX_RIGHT     : 1; // Bitfield Pos 12, 1 Bit
			UINT32 bWS_EX_RTLREADING : 1; // Bitfield Pos 13, 1 Bit
			UINT32 bWS_EX_LEFTSCROLLBAR : 1; // Bitfield Pos 14, 1 Bit
			UINT32 bUnused2         : 1; // Bitfield Pos 15, 1 Bit
			UINT32 bWS_EX_CONTROLPARENT : 1; // Bitfield Pos 16, 1 Bit
			UINT32 bWS_EX_STATICEDGE : 1; // Bitfield Pos 17, 1 Bit
			UINT32 bWS_EX_APPWINDOW : 1; // Bitfield Pos 18, 1 Bit
			UINT32 bWS_EX_LAYERED   : 1; // Bitfield Pos 19, 1 Bit
			UINT32 bWS_EX_NOINHERITLAYOUT : 1; // Bitfield Pos 20, 1 Bit
			UINT32 bUnused3         : 1; // Bitfield Pos 21, 1 Bit
			UINT32 bWS_EX_LAYOUTRTL : 1; // Bitfield Pos 22, 1 Bit
			UINT32 bWS_EX_NOPADDEDBORDER : 1; // Bitfield Pos 23, 1 Bit
			UINT32 bUnused4         : 1; // Bitfield Pos 24, 1 Bit
			UINT32 bWS_EX_COMPOSITED : 1; // Bitfield Pos 25, 1 Bit
			UINT32 bUIStateActive   : 1; // Bitfield Pos 26, 1 Bit
			UINT32 bWS_EX_NOACTIVATE : 1; // Bitfield Pos 27, 1 Bit
			UINT32 bWS_EX_COMPOSITEDCompositing : 1; // Bitfield Pos 28, 1 Bit
			UINT32 bRedirected      : 1; // Bitfield Pos 29, 1 Bit
			UINT32 bUIStateKbdAccelHidden : 1; // Bitfield Pos 30, 1 Bit
			UINT32 bUIStateFocusRectHidden : 1; // Bitfield Pos 31, 1 Bit
		};
	};
	

	// offset = 0x034
	union
	{
		UINT32 style;

		struct
		{
			UINT32 bReserved1       : 16; // Bitfield Pos 0, 16 Bits
			UINT32 bWS_MAXIMIZEBOX  : 1; // Bitfield Pos 16, 1 Bit
		};

		struct
		{
			UINT32 bReserved2       : 16; // Bitfield Pos 0, 16 Bits
			UINT32 bWS_TABSTOP      : 1; // Bitfield Pos 16, 1 Bit
		};
		
		struct
		{
			UINT32 bReserved3       : 16; // Bitfield Pos 0, 16 Bits
			UINT32 bUnused5         : 1; // Bitfield Pos 16, 1 Bit
			UINT32 bWS_MINIMIZEBOX  : 1; // Bitfield Pos 17, 1 Bit
		};

		struct
		{
			UINT32 bReserved4       : 1; // Bitfield Pos 0, 16 Bits
			UINT32 bUnused6         : 1; // Bitfield Pos 16, 1 Bit
			UINT32 bWS_GROUP        : 1; // Bitfield Pos 17, 1 Bit
		};

		struct
		{

			UINT32 bReserved5       : 16; // Bitfield Pos 0, 16 Bits
			UINT32 bUnused7         : 2; // Bitfield Pos 16, 2 Bits
			UINT32 bWS_THICKFRAME   : 1; // Bitfield Pos 18, 1 Bit
		};

		struct
		{
			UINT32 bReserved6       : 16; // Bitfield Pos 0, 16 Bits
			UINT32 bUnused8         : 1; // Bitfield Pos 16, 2 Bits
			UINT32 bWS_SIZEBOX      : 1; // Bitfield Pos 18, 1 Bit
		};

		struct
		{
			UINT32 bReserved7       : 16; // Bitfield Pos 0, 16 Bits
			UINT32 bUnused9         : 3; // Bitfield Pos 16, 3 Bits
			UINT32 bWS_SYSMENU      : 1; // Bitfield Pos 19, 1 Bit
			UINT32 bWS_HSCROLL      : 1; // Bitfield Pos 20, 1 Bit
			UINT32 bWS_VSCROLL      : 1; // Bitfield Pos 21, 1 Bit
			UINT32 bWS_DLGFRAME     : 1; // Bitfield Pos 22, 1 Bit
			UINT32 bWS_BORDER       : 1; // Bitfield Pos 23, 1 Bit
			UINT32 bMaximized       : 1; // Bitfield Pos 24, 1 Bit
			UINT32 bWS_CLIPCHILDREN : 1; // Bitfield Pos 25, 1 Bit
			UINT32 bWS_CLIPSIBLINGS : 1; // Bitfield Pos 26, 1 Bit
			UINT32 bDisabled        : 1; // Bitfield Pos 27, 1 Bit
			UINT32 bVisible         : 1; // Bitfield Pos 28, 1 Bit
			UINT32 bMinimized       : 1; // Bitfield Pos 29, 1 Bit
			UINT32 bWS_CHILD        : 1; // Bitfield Pos 30, 1 Bit
			UINT32 bWS_POPUP        : 1; // Bitfield Pos 31, 1 Bit
		};
	};
	

	// offset = 0x038
	PVOID hModule;

	// offset = 0x040
	UINT16 hMod16;

	// offset = 0x042
	UINT16 fnid;


#ifdef _WIN64
	// offset = 0x044
	UINT32 offset_0x044;
#endif
	

	// offset = 0x048
	struct tagWND* spwndNext;

	// offset = 0x050
	struct tagWND* spwndPrev;

	// offset = 0x058
	struct tagWND* spwndParent;

	// offset = 0x060
	struct tagWND* spwndChild;

	// offset = 0x068
	struct tagWND* spwndOwner;


	// offset = 0x070
	RECT rcWindow;

	// offset = 0x080
	RECT rcClient;


	// offset = 0x090
	PVOID lpfnWndProc;


	// offset = 0x098
	struct tagCLS* pcls;


	// offset = 0x0a0
	struct HRGN__* hrgnUpdate;

	// offset = 0x0a8
	struct tagPROPLIST* ppropList;



	// offset = 0x0b0
	struct tagSBINFO* pSBInfo;


	// offset = 0x0b8
	struct tagMENU* spmenuSys;

	// offset = 0x0c0
	struct tagMENU* spmenu;



	// offset = 0x0c8
	struct HRGN__* hrgnClip;

	// offset = 0x0d0
	struct HRGN__* hrgnNewFrame;


	// offset = 0x0d8
	struct _LARGE_UNICODE_STRING strName;

	// offset = 0x0e8
	INT32 cbwndExtra;

#ifdef _WIN64
	// offset = 0x0ec
	UINT32 offset_0x0ec;
#endif // #ifdef _WIN64

	// offset = 0x0f0
	struct tagWND* spwndLastActive;

	// offset = 0x0f8
	struct HIMC__* hImc;



	// offset = 0x100
	UINT64 dwUserData;



	// offset = 0x108
	struct _ACTIVATION_CONTEXT* pActCtx;



	// offset = 0x110
	struct _D3DMATRIX* pTransform;


	// offset = 0x118
	struct tagWND* spwndClipboardListenerNext;

	// offset = 0x120
	union
	{
		UINT32 ExStyle2;

		union
		{
			UINT32 bClipboardListener : 1; // Bitfield Pos 0, 1 Bit
			UINT32 bLayeredInvalidate : 1; // Bitfield Pos 1, 1 Bit
			UINT32 bRedirectedForPrint : 1; // Bitfield Pos 2, 1 Bit
			UINT32 bLinked          : 1; // Bitfield Pos 3, 1 Bit
			UINT32 bLayeredForDWM   : 1; // Bitfield Pos 4, 1 Bit
			UINT32 bLayeredLimbo    : 1; // Bitfield Pos 5, 1 Bit
			UINT32 bHIGHDPI_UNAWARE_Unused : 1; // Bitfield Pos 6, 1 Bit
			UINT32 bVerticallyMaximizedLeft : 1; // Bitfield Pos 7, 1 Bit
			UINT32 bVerticallyMaximizedRight : 1; // Bitfield Pos 8, 1 Bit
			UINT32 bHasOverlay      : 1; // Bitfield Pos 9, 1 Bit
			UINT32 bConsoleWindow   : 1; // Bitfield Pos 10, 1 Bit
			UINT32 bChildNoActivate : 1; // Bitfield Pos 11, 1 Bit

		};
	};
	
#ifdef _WIN64
	// offset = 0x124
	UINT32 offset_0x124;
#endif // #ifdef _WIN64


};

 
 
 
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY_TAGWND_HEADER_FILE__

