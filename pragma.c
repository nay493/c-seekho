/*
 ============================================================================
 Name        : progma.c
 Author      : Mohammed Nayeem
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define PF printf("In func %s at %d\n",__func__,__LINE__)

#ifdef TURBOC
#pragma startup func1
#pragma exit func2
#endif

int __attribute__((constructor)) func1();
int __attribute__((destructor)) func2();

int func1(void);
int func2(void);
int func3(void);

int func1(){
	PF;
	return 0;
}

int func2(){
	PF;
	return 0;
}

int func3(){
	PF;
	return 0;
}

int main(void) {
	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */

	return EXIT_SUCCESS;
}

