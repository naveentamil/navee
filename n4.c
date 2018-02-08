#include<stdio.h>
#include<conio.h>
int main()
{
int a[20],i,j,n,temp;
clrscr();
printf("Enter the size of an array:");
scanf("%d",&n);
printf("Enter the elements in an array:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
printf("The sorted array is:");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
getch();
}
