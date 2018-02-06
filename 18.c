#include<stdio.h>
#include<conio.h>
void main()
{
  int s=0,n1,n,remainder;
  scanf("%d",&n);
  while(n>10)
  {
   remainder=n%10;
   s=s+remainder*remainder*remainder;
   n=n%10;
   if(n1==s)
   {
    printf("amstrong number");
    }
    else
    {
     printf("not amstrong number");
     }
     }
     getch();
  }   
