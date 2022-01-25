1. Reverse Rootkit in IDA
2. Open the rootkit in hex editor and extract the encrypted shell code to a file
3. Write a program to open the encrypted shell code file
4. After opening it, load the file to heap, decrypt it, and finally call create thread to execute it
5. Now run the program as admin. The shell code will execute and unpack a PE file in memory
6. Attach cheat engine to the program process and search for text "This program". This should reveal the location of the PE file in memory.
7. Now attach x64dbg to program process and dump the memory region with the PE file. 
8. Open the memory region file in hex editor and remove any all bytes from top until we get to the PE header, i.e., MZ and save it.
9. Now open the saved PE file in dnSpy and we'll have .NET code.ll