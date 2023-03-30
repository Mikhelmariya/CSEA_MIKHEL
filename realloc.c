#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    char *ptr;
    ptr= (char*)malloc(11);
    strcpy(ptr,"Programming");
    printf("Address initial : %u \n",ptr);
    printf("Initial string : %s \n",ptr);

    ptr = (char*)realloc(ptr,20);
    strcat(ptr," in C");
    printf("%d\n",strlen(ptr));
    printf("Address after reallocation : %u\n",ptr);
    printf("String after reallocation and concatination : %s\n",ptr);
    free(ptr);

}