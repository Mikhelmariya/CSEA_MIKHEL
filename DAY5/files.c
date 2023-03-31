#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    FILE *fp;
    char ch;
    fp= fopen("file1.txt","w");
        ch=getchar();

    while(ch!='O')
    {
        ch=getchar();
        fputc(ch,fp);
        printf("%c",ch);
    }
}