#include<stdio.h>
#include<conio.h>
void main()
{
int s=0,n,n1;
scanf("%d",&n);
n1=n;
while(n>0)
{
 remainder=n%10;
 s=s+remainder*remainder*remainder;
 n1=n/10;
 }
 if(n1==s)
 {
  printf("amstrong number");
  }
  else
  {
   printf("no amstrong number");
   }
   getch();
   }
