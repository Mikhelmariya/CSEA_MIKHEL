#include<stdio.h>
#include<stdlib.h>
union Data{
    int i;
    char str[10];
};
void main()
{
    union Data data;
    printf("Memory space occupied by data %d",sizeof(data));
}