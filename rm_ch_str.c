#include<stdio.h>

int main(){

int i,j;
//char str[10]="cobolt";
//char str[10]="coboltoano";
char str[10]="polo";
  
for(i=0; str[i] != '\0'; i++){
  
  if(str[i]=='o') {
   for(j=i; str[j] != '\0'; j++)
    str[j] = str[j+1];
   }
}

printf("%s\n",str);
return 0;
}
