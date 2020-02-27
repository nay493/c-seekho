#include <stdio.h>

int len_of_str(char *c);

int len_of_str(char *c){
	int i;
    for (i = 0; *(c+i) != '\0'; ++i);
	return i;
}

#if 0
int main() {
    //char s[] = "NAYEEM  UR \0RAHMAN", d[100];
	char s[] = "121", d[100];
    int i,len;
    len = len_of_str(s);

    printf("len of string is %d\n", len);

    for(i=0;len >= 0;i++){
    	d[i]= s[len-1];
    	len--;
    }

    printf("Reverse string: %s\n", d);

   if(strcmp(d,s) == 0)
	   printf("palindrome\n");
   else
	   printf("Not a palidrome\n");

    return 0;
}
#endif
