# Welcome to 0x18-dynamic_libraries where we will learn how to create and use dynamic librairies
| Task | Description |
| ---- | ----------- |
| task 0 | How to create a dynamic librarie: <br/>1- We compile the c file with : `gcc -c -fPIC *.c` <br/> 2- Then we create dynamic librarie we this command: `gcc -shared -o libname.so *.o` with name is the library name. |
| 1-create_dynamic_lib.sh | Shell script that create a dynamic library |
