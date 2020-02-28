#include"mystr.h"

int mystrcmp(char *, char *);

int mystrcmp(char *c1, char *c2){
  int i;
  for(i=0; *(c1+i) != '\0'; i++){

  if(*(c1+i) != *(c2+i))
    return 1;
  }
  return 0;
}

int main(){
char s1[20],s2[20];
printf("Enter 2 strings:\n");
scanf("%s %s", &s1, &s2);

if(mystrcmp(s1,s2) == 0)
  PF_s("Equal");
else
  PF_s("not Equal");
  return 0;
}
