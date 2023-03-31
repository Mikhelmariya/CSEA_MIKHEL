#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
   char str[50];
   int count=1;
   printf("Enter the string\n");
   gets(str);
   int len = strlen(str);
   for(int i=0;i<len;i++)
   { 
    if(str[i]==' ' )
    {
        if(str[i+1]!=' ')
        {
        count=count +1;

        }
        
    }

   }
   if(str[len-1]==' ')
   {
    count=count -1;
   }

   printf("No of words in string is %d\n",count);

}