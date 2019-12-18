#include<stdio.h>
#include<time.h>

typedef void*p(void *);

#define TIMETAKEN(p) {\
  clock_t start, end;\
  double cpu_time;\
  start = clock();\
  p();\
  end = clock();\
  cpu_time=((double) (end - start)) / CLOCKS_PER_SEC;\
  printf("time taken = %f sec\n", cpu_time);\
}

func() {
  int i;
  for(i=0;i<100;i++);
  printf("Oofunc\n");
}

int main() {
  TIMETAKEN(func);
  return 0;
}
