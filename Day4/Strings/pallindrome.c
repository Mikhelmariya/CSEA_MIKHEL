#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
   char str[50];
   int j,flag=0;
   printf("Enter the string\n");
   gets(str);
   int len = strlen(str);
   for(int i=0,j=len-1;i<len,j>=0;i++,j--)
   { 
     if(str[i]!=str[j])
     {
        flag=1;
        break;
     }
   }
   if(flag==0)
   {
    printf("pallindrome\n");
   }
   else
   {
    printf("Not pallindrome\n");
   }
 }