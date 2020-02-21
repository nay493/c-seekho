#include"mymacros.h"

#define rfact 1

int facto(int);
int factorial(int);

#ifdef recursive
facto(int n){

if(n <= 0)
  return 1;

return n*facto(n-1);
}
#endif

factorial(int n){

int fact=1;

#ifdef ffact
int i;
for(i=1;i<=n;i++) {
  fact = fact * i;
}
#endif

#ifdef rfact
int i;
for(i=n;i>0;i--) {
  fact = fact * i;
}
#endif


#ifdef recursive
fact = facto(n);
#endif

return fact;
}

int main(){

int i,n,f=0;

printf("Enter n (in n!) =");
scanf("%d", &n);
TIMETAKEN1(factorial,n);
//TIMETAKEN(factorial(n));
//printf("n! = %d\n", f);
return 0;
}
