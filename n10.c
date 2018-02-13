
#include<stdio.h>
#include<conio.h>
void main()
{
	int min,max,i,sum1=0,sum2=0;
  clrscr();
	printf("ENTER THE RANGE :\n");
	scanf("%d",&min);
	scanf("%d",&max);
	for(i=1;i<=min;i++)
	{
		sum1=sum1+i;
	}
	printf("\nTHE SUM OF NOS FROM THE RANGE 1 AND %d IS %d",min,sum1);
	for(i=min;i<=max;i++)
	{
		if((i%2)!=0)
		{
			sum2=sum2+i;
		}
		
	}
	printf("\nTHE SUM OF ODD NOS FROM THE RANGE %d AND %d IS %d",min,max,sum2);
  getch();
}
