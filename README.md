# Reverse Types.
This project include header files that contain undocuments types can be compiled by both WDK , IDAPro , BinaryNinja to help reverse Windows.   

## 1. Use for develop
Just copy header files in the `include` directory.      

## 2. Use for IDAPro & Binary Ninja
Just Parse header files in the `include` directory.

## 3. Use for online debugging.
Install `ktypes.sys` at target guest virtual machine and setup a kernel debugger at host machine to debug it.   

## 4. Use for offline debugging
Start windbg at host machine and debug `utypes.exe` , it will auto break into the debugger.


## 5. Finally
Now you can use windbg to display any undocuments types or apply types to IDAPro & Binary Ninja .     
Have a nice day!
