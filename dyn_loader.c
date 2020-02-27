#include<stdio.h>
#include <dlfcn.h>

int main(){

void *p;
void (*q)(void);
void (*r)(void);

p = dlopen("dloader.so", RTLD_LOCAL | RTLD_LAZY);
//p = dlopen("dloader.so", RTLD_GLOBAL);
if(p == NULL)
  printf("ERROR in dlopen\n");
q = (void(*)(void))dlsym(p, "func1");	
r = (void(*)(void))dlsym(p, "func2");	
if(q == NULL)
  printf("ERROR\n");
(*q)();
(*r)();
dlclose(p);

  printf("END OF PROGRAM\n");
return 0;
}
