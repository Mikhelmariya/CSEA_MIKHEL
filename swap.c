#include<stdio.h>
#include<stdlib.h>
void main(){
    int a=5,b=6;
    int *ptra;
    ptra=&a;
    printf("a : %d\n b : %d\n After swapping\n",*ptra,b);
    *ptra= *ptra + b;
    b=*ptra-b;
    *ptra=*ptra -b;
    printf("a : %d\n b : %d",a,b);
}
