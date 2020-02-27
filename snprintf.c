#include<stdio.h>

#ifndef SNPRINTF 
#define SNPRINTF
#endif

int main(){
//char *buf;
char buf[512];

#ifdef SNPRINTF
snprintf(buf,512,"%d%s%f%s%s",10,"_",(float)1.56,"_","sn_printf");
#endif

#ifdef SPRINTF
sprintf(buf,"%d%s%f%s%s",10,"_",(float)1.56,"_","sprintf");
#endif
printf("buf=%s\n",buf);
return 0;
}
