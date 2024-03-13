# Windows Reversed Types.
A simple but useful project maybe help you reverse Windows. 

This project include header files that contain undocuments types can be compiled by both WDK , IDAPro , BinaryNinja.   

## 1. Use for develop
Just copy header files in the `include` directory.      

## 2. Use for IDAPro & Binary Ninja
Just Parse header files in the `include` directory.

## 3. Use for online debugging.
Install `ktypes.sys` at target guest virtual machine and setup a kernel debugger at host machine to debug it.   

## 4. Use for offline debugging
Start windbg at host machine and debug `utypes.exe` , it will auto break into the debugger.

Now you can use windbg to display any undocuments types.    
![tagWND.png](doc/tagWND.png)

## 5. Warning
1. If there is no special instructions, the type definition is reverse-engineered on the latest official version of Windows 10 x64.   
 
2. When this types applied to other versions, some type definitions may need to be adjusted.

3. Microsoft owns the full copyright of Windows.        

3. Reverse engineering of these structures is only for research and learning purposes.   
       
4. This project does not bear any legal responsibility and I am reserves the right of final interpretation.      
   