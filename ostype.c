#include<stdio.h>

int main(void){
     switch(sizeof(void*)){
        case 4: printf("32\n");
        break;
        case 8: printf("64\n");
        break;
    }
}
