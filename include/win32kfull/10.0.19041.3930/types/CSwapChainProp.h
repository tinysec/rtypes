/**
 * @file _SWAP_CHAIN_PROP.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/27   init
 */

#ifndef __MY__SWAP_CHAIN_PROP_HEADER_FILE__
#define __MY__SWAP_CHAIN_PROP_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
 
 
 
 
 
 
// size = 0x028 , 22000
// create at win32kfull!CSwapChainProp::CreateSwapChainProp
struct CSwapChainProp
{
	// offset = 0x000
	PVOID offset_0x000;

	// offset = 0x008
	UINT64 offset_0x008;

	// offset = 0x010
	UINT64 offset_0x010;

	// offset = 0x018
	PVOID offset_0x018;


	// offset = 0x020
	UINT32 offset_0x020;

	// offset = 0x024
	UINT32 offset_0x024;

	
};
 
 
 
 
 
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY__SWAP_CHAIN_PROP_HEADER_FILE__

