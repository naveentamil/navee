
#include <stdio.h>
#include<conio.h>
void main()
{
	int n;
	clrscr();
	scanf("%d",&n);
	while(n!=0)
	{
		if(n%10==0)
		{
			printf("%d",n);
			break;
		}
		n++;
	}
	getch();
}

