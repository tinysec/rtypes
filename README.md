# rtypes
Windows Reverse Helper.   
Contains header files that can be compiled by both Visual Stduion , IDAPro , BinaryNinja to help reverse Windows.   

## 1. Use for develop
Just copy header files in the `include` directory.      

## 2. Use for reverse
`rtypes.pdb` produced by `rtypes.sys` or `rtypes.exe` can help reverse Windows.   
Can be apply in two ways.
1. Install `rtypes.sys` at target guest virtual machine and setup a kernel debugger at host machine to debug it.   
2. Start windbg at host machine and debug `rtypes.exe` , it will auto break to the debugger.

Now you can use windbg to display any undocuments types.

Have a nice day!
