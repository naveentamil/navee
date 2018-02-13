#include <stdio.h>
#include<conio.h>
void main()
{
	int a,b=0,h,m;
	clrscr();
	scanf("%d",&a);
	if(a<=0)
	{
		printf("%d",b);
	}
	else
	{
		h=a/60;
		m=a%60;
		printf("%d",h);
		printf(" %d",m);
	}
	getch;
}
