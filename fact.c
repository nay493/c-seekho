#include"mymacros.h"

#define recursive 1

#ifdef recursive 
facto(int n){

if(n <= 0)
  return 1;

return n*facto(n-1);
}
#endif

int main(){

int i,n,fact=1;

printf("Enter n (in n!) =");
scanf("%d", &n);

#ifdef ffact
for(i=1;i<=n;i++) {
  fact = fact * i;
}
#endif

#ifdef rfact
for(i=n;i>0;i--) {
  fact = fact * i;
}
#endif


#ifdef recursive
fact = facto(n);
#endif

printf("n! = %d\n", fact);
return 0;
}
