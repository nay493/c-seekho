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
