#include<stdio.h>
#include<stdlib.h>
struct address
{
    char city[20];
    int pin;
};
struct employee
{
    char name[20];
    struct address add;
};
void main()
{
  struct employee emp;
  printf("Enter employee information name,city,pin\n");
  scanf("%s%s%d",emp.name,emp.add.city,&emp.add.pin);
  printf("Printing employee information.......\n");
  printf("name : %s\ncity : %s\n pin : %d \n",emp.name,emp.add.city,emp.add.pin);
}