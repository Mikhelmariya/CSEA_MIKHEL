//structure padding is the jump in address,allocating space,etc
//to align data in memory
#include<stdio.h>
#include<stdlib.h>
struct student
{
    int id1;
    int id2;
    char a;
};
void main()
{
    int i;
    struct student record1={1,2,'A'};
    printf("Size of structure in bytes :%d \n ",sizeof(record1));
    printf("\nAddress of id1 = %u",&record1.id1);
    printf("\nAddress of id2 = %u",&record1.id2);
    printf("\nAddress of a = %u",&record1.a);
    
}