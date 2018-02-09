#include<stdio.h>
#include<conio.h>
void main()
{
int n,arr[20],i,j;
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{
    printf("\n %d %d",arr[i],i);
}
getch();
}
