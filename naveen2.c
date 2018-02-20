#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("enter the value of a ");
scanf("%d",&a);
printf("enter the value of b");
scanf("%d",&b);
printf("\n the value before swaping %d %d",a,b);
c=a;
a=b;
b=c;
printf("\n the value after swaping %d %d",a,b);
getch();
}
 
