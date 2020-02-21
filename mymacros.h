#include<stdio.h>
#include<time.h>

typedef void*p(void *);
typedef int*q(int);

#if 1
#define TIMETAKEN(p) {\
  clock_t start, end;\
  double cpu_time;\
  start = clock();\
  p();\
  end = clock();\
  cpu_time=((double) (end - start)) / CLOCKS_PER_SEC;\
  printf("time taken = %f sec\n", cpu_time);\
}
#endif

#if 1
#define TIMETAKEN1(q,n) {\
  clock_t start, end;\
  int f;\
  double cpu_time;\
  start = clock();\
  f=q(n);\
  end = clock();\
  cpu_time=((double) (end - start)) / CLOCKS_PER_SEC;\
  printf("n! = %d \ntime taken = %f sec \n", f, cpu_time);\
}
#endif
