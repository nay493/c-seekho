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

pragma.c

__attribute__((constructor))
__attribute__((destructor))


Test suite and test cases on a user defined function

1. Install CUnit
sudo apt-get install libcunit1-dev
sudo apt-get install libcunit1-ncurses-dev

2. compile file with function defination
gcc -g -Wall -c palindrome.c

3. gcc -Wall -L/usr/local/lib -o palind_test palind_test.c palindrome.o -lcunit
link with dynamic library of cUnit to form executable

4. ./palind_test



