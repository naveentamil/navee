
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i;
	clrscr();
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			printf("\n%d",i);
		}
	}
	getch();
}
