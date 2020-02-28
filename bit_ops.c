#include<stdio.h>
#include<math.h>

unsigned char swap_nibble(unsigned char);
unsigned char swap_xybits(unsigned char, unsigned char, unsigned char);
void swap_nums(int *, int *);


void swap_nums(int *x, int *y){
#if 0
  int temp;
  temp=*x;
  *x=*y;
  *y=temp;
#endif

*y=(*x ^ *y)^(*y);
*x=(*x ^ *y)^(*x);
}


unsigned char swap_xybits(unsigned char x, unsigned char a, unsigned char b){

unsigned char temp;

//  temp = x&(1<<b);
//  x&(1<<b) = x&(1<<a);
//  x&(1<<a) = temp;

//printf("x=0x%X\n",x);
temp = x&(1<<b);

  if(x&(1<<a))
    x = x | (1<<b);
  else
    x = x & ~(1<<b);

  if(temp)
    x = x | (1<<a);
  else
    x = x & ~(1<<a);

  //printf("x=0x%X\n",x); 

  return x;
}


unsigned char swap_nibble(unsigned char x){

  unsigned char ln,hn,y;
  
  ln=x&0x0F;
  hn=x&0xF0;

  //printf("ln=0x%X \t hn=0x%X \t \n",ln, hn);

  y = (ln<<4) | (hn>>4);
  //printf("y=0x%X \t \n",y);

  return y;
}

int main() {

  unsigned char x=0xAB;
  unsigned char y, swap;
  int a=3,b=2;

  printf("x=0x%X \t x<<1=0x%X \t x>>1=0x%X\n",x, x<<1, x>>1); 

  printf("x=%d \t x<<1=%d \t x>>1=%d\n",x, x<<1, x>>1);

  swap = swap_nibble(x);

  printf("swap=0x%X \n",swap);

  swap = swap_xybits(x, 4,0);
  printf("swap_xy=0x%X \n",swap);

  printf("a=%d\t b=%d\n",a,b);
  swap_nums(&a,&b);
  printf("a=%d\t b=%d\n",a,b);

printf("sqrt(3)=%f\n",sqrt((double)5));

if(printf("Hello world\n"))

  return 0;
}
