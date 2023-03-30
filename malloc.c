#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *numbers = (int*)malloc(4*sizeof(int));
    numbers[0]=0;
    numbers[1]=1;
    numbers[2]=2;
    for(int i=0;i<3;i++)
    {
        printf("numbers[%d] :%d\n",i,numbers[i]);
    }
    free(numbers);

}


