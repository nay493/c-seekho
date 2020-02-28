/*
C program to find Binary Addition and Binary Subtraction.

Author: Mohammed Nayeem.

*/

#include<stdio.h>
#include<math.h>

#define PF_d(x) printf("In file:%s, func:%s, line:%d, %s=%lf\n",__FILE__,__func__,__LINE__,#x,x)
#define PF_i(x) printf("In file:%s, func:%s, line:%d, %s=%d\n",__FILE__,__func__,__LINE__,#x,x)
#define PF_lu(x) printf("In file:%s, func:%s, line:%d, %s=%lu\n",__FILE__,__func__,__LINE__,#x,x)

//Declarations
int scratch(void);
int decimal_to_binary(int);
int binary_to_decimal(char *);

int scratch(){
  PF_d(pow(2,3));

  int y = 0b1111; //15
  int z = 1111;
  PF_i(y);
  PF_i(123);
  PF_lu(sizeof(int));

  // compile to find macro expansion
  //how to find type of any data type
  //printf("%d",typeof(x));
  return 0;
}


int binary_to_decimal(char *b){
  int d=0,len=0,i,t=0;
  for(i=0; *(b+i) != '\0'; i++);
  len=i;
  PF_i(len);
  for(i=len-1;i>=0;i--){
    //PF_i(*(b+i));
    t = (*(b+i)-48);
    d = d + ((pow(2,i))*(t));
  }
  PF_i(d);
  return d;
}

int decimal_to_binary(int d){
int b=0,i;
for(i=31;i>=0;i--){
  if((i+1)%4 == 0)
    printf(" ");
  if(d&(1<<i))
    printf("1");
  else
    printf("0");
}
printf("\n");
return b;
}

int main() {

  #ifdef SCRATCH
  scratch();
  #endif

  decimal_to_binary(4);
  binary_to_decimal("1111");

  return 0;
}
