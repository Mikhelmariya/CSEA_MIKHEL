#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,i;
    printf("Enter size of array\n");
    scanf("%d",&n);
    int *arr = calloc(n,sizeof(int));
    if(arr==NULL)
    {
        printf("Memory not allocated\n");
    
    }
    printf("Enter elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Initial elements are\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",*(arr +i));
    }
    for(i=1;i<n;i++)
    {
        arr[i-1] =arr[i];
    }
    arr =realloc(arr,(n-1)*sizeof(int));
    printf("After removing,  elements are\n");
    for(i=0;i<n-1;i++)
    {
        printf("%d\t",*(arr +i));
    }
    free(arr);
}