#include<stdio.h>
#include<conio.h>
void main()
{
int a,i;
char b[10];
clrscr();
for(i=0;i<=7;i++)
{
scanf("%c",&b[i]);
}
scanf("%d",&a);
for(i=0;i<7;i++)
{
printf("%s",b);
}
getch();
}
