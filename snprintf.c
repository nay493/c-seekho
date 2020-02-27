#include<stdio.h>

int main(){
//char *buf;
char buf[512];
snprintf(buf,512,"%d%s%f%s",10,"_",(float)1.56,"_");
printf("buf=%s\n",buf);
return 0;
}
