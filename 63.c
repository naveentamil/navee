#include<stdio.h>
#include<conio.h>
void main()
{
	int a,sum=0,b;
	clrscr();
	scanf("%d",&a);
	while(a!=0)
	{
		b=a%10;
		sum=sum+b;
		a=a/10;
	}
	printf("%d",sum);
	getch();
}
