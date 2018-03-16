
#include <stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	int c;
	clrscr();
	scanf("%d %d",&a,&b);
	c=a-b;
	if(c%2==0)
	{
		printf("even");
	}
	else
	{
	printf("odd");
	}
	getch();
}
