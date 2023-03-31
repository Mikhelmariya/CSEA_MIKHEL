#include<stdio.h>
#include<stdlib.h>

struct node
{
int data1;
int data2;
struct node* link;
};
void main(){

//initialization

struct node ob1;

ob1.link=NULL;
ob1.data1=10;
ob1.data2=20;
//initialization
struct node ob2;

ob2.link=&ob1;
ob2.data1=30;
ob2.data2=40;

//linking ob1 and ob2

ob1.link=&ob2;
printf("%d",ob1.link->data1);
printf("\n%d",ob1.link->data2);

}
