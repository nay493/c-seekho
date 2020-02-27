#include<stdio.h>

void func1(void);
void func2(void);

void func1(){
printf("In func: %s\n",__func__);
}

void func2(){
printf("In func: %s\n",__func__);
}

int main(){
	func1();
 	func2();

	return 0;
}
