#include<stdio.h>
#include<stdlib.h>
struct point{
struct{
    int x;
    int y;
     };
};

void main()
{
    struct point pt;
    pt.x=10;
    pt.y=11;
    printf("pt.x : %d\npt.y : %d \n",pt.x,pt.y);
}