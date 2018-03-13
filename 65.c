#include<stdio.h>
#include<conio.h>
void main()
{
	int n,m,a;
	clrscr();
	scanf("%d %d",&n,&m);
	a=n*m;
	if(a%2==0)
	{
		printf("even");
	}
	else
	{
	printf("odd");
	}
	getch();
}
