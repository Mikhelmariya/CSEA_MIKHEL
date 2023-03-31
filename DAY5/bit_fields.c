#include<stdio.h>
#include<stdlib.h>
struct {
    unsigned int width;
    unsigned int height;

}status1;
//using bit fields
struct {
    unsigned int width:1;
    unsigned int height:1;

}status2;

void main()
{
    printf("Memory size occupied by status1 %d\n",sizeof(status1));
    printf("Memory size occupied by status2 %d\n",sizeof(status2));
    
}