/**
 * @file DEVCAPS.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/13   init
 */

#ifndef __MY_DEVCAPS_HEADER_FILE__
#define __MY_DEVCAPS_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////

 
typedef struct _DEVCAPS
{
    ULONG ulVersion;
    ULONG ulTechnology;
    ULONG ulHorzSizeM;
    ULONG ulVertSizeM;
    ULONG ulHorzSize;
    ULONG ulVertSize;
    ULONG ulHorzRes;
    ULONG ulVertRes;
    ULONG ulBitsPixel;
    ULONG ulPlanes;
    ULONG ulNumPens;
    ULONG ulNumFonts;
    ULONG ulNumColors;
    ULONG ulRasterCaps;
    ULONG ulAspectX;
    ULONG ulAspectY;
    ULONG ulAspectXY;
    ULONG ulLogPixelsX;
    ULONG ulLogPixelsY;
    ULONG ulSizePalette;
    ULONG ulColorRes;
    ULONG ulPhysicalWidth;
    ULONG ulPhysicalHeight;
    ULONG ulPhysicalOffsetX;
    ULONG ulPhysicalOffsetY;
    ULONG ulTextCaps;
    ULONG ulVRefresh;
    ULONG ulDesktopHorzRes;
    ULONG ulDesktopVertRes;
    ULONG ulBltAlignment;
    ULONG ulPanningHorzRes;
    ULONG ulPanningVertRes;
    ULONG xPanningAlignment;
    ULONG yPanningAlignment;
    ULONG ulShadeBlendCaps;
    ULONG ulColorManagementCaps;
} DEVCAPS, *PDEVCAPS;
 
 
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY_DEVCAPS_HEADER_FILE__

