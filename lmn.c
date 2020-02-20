/*
https://www.geeksforgeeks.org/lmns-cc-gq/

-DXXX flag is just like adding #define XXX. So -DN=2 is just like #define N  2
https://stackoverflow.com/questions/15338289/how-to-pass-values-during-compilation-with-g-using-dn-flag

gcc lmn.c -DDIGITVAR
*/


#include<stdio.h>
//#define DIGITVAR

int main() {
printf("SOP\n");
//printf("digitvar=%d\n",DIGITVAR);
//#if 0

#ifdef DIGITVAR
int 9var=1;
printf("9var=%d\n",9var);
#endif


#ifdef UNSIGN

unsigned int ui;
unsigned long ul;
unsigned float uf;
unsigned double ud;
unsigned long double uld;

#endif

#ifdef OCT
printf("%d",090);
#endif

printf("sizeof(1.414)=%lu\n",sizeof(1.414));
printf("sizeof(1.414F)=%lu\n",sizeof(1.414F));
printf("EOP\n");
return 0;
}
