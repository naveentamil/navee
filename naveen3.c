#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("enter the value of a ");
scanf("%d",&a);
printf("enter the value of b");
scanf("%d",&b);
printf("\n the value before swaping %d %d",a,b);
a=a^b;
b=a^b;
a=a^b;
printf("\n the value after swaping %d %d",a,b);
getch();
}
