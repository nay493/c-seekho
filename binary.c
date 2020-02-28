#include<stdio.h>
#include<math.h>

#define PF(x) printf("In file:%s, func:%s, line:%d, #x=%lf\n",__FILE__,__func__,__LINE__,x)

int scratch(void);

int scratch(){
  PF(pow(2,3));
  return 0;
}

int main() {

  #ifdef SCRATCH
  scratch();
  #endif


  return 0;
}
