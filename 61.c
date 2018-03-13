#include <stdio.h>
#include<conio.h>

void main()
{
	int i,b;
	char a[10];
	clrscr();
	scanf("%s",a);
	b=strlen(a);
	for(i=0;i<b;i++)
	{
		printf("\n %c",a[i]);
	}
	getch();
}
