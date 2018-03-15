
#include <stdio.h>
#include<conio.h>
void main() 
{
	char a[10];
	clrscr();
	scanf("%s",a);
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("%c",a[i]);
	}
	getch();
}
