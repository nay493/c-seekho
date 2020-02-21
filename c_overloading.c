#include<stdio.h>

void * foo(void *, void *, int);


int main() {
       
float f1, f2;
int i1, i2;
f1=1.2;
f2=3.3;
i1=1;
i2=3;
void *x;
        //printf("%p", foo(&i1, &i2, 0));
	x = (int *)foo(&i1, &i2, 0);
        printf("%d\n",x);
        //foo(&f1, &f2, 1);

	return 0;
}

void * foo(void *a, void* b, int f){

void *c;

	if(f == 0){
		c = (int)b + (int)a;
		return c;
	}
/*
	if(f == 1){
		c = (float *)*b + (float*) *a;
		return (int)*c;
	}

*/
}

