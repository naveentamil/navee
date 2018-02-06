#include<stdio.h>
#include<conio.h>
void main()
{
int a,d,n,value,i,sum=0;
printf("enter the terms:");
scanf("%d",&n);
printf("enter the intial term:");
scanf("%d",&a);
printf("Enter the difference element:");
scanf("%d",&d);
value=a;
printf("AP series");
for(i=0;i<n;i++)
  {
printf("%d", value);
sum=sum+ value;
value=value+d;
  }
printf("sum of AP series till %d terms is=%d",n,sum);
getch();
}
