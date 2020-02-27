# c-seekho
Random programming examples

timetaken.c - 
Reference:
https://www.geeksforgeeks.org/how-to-measure-time-taken-by-a-program-in-c/
https://www.geeksforgeeks.org/multiline-macros-in-c/
https://www.geeksforgeeks.org/function-pointer-in-c/


Dynamic loader:
gcc -shared -fPIC dyn_loading.c -o dloader.so
gcc -g dyn_loader.c -ldl

snprintf:

gcc snprintf.c -DSNPRINTF
	snprintf.c:3:0: warning: "SNPRINTF" redefined
 	#define SNPRINTF
--> Hence used #ifndef

gcc snprintf.c -DSPRINTF


