#include <stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
	char a[100];
	int alp=0,num=0;
	clrscr();
	scanf("%s",a);
	int i,m;
	m=strlen(a);
	for(i=0;i<m;i++)
	{
		if(('a'<=a[i] && a[i]<='z') || ('A'<=a[i] && a[i]<='Z'))
		{
			alp=1;
		}
		if('0'<=a[i] && a[i]<='9')
		{
			num=1;
		}
	}
	if(num==1 && alp==1)
	{
		printf("yes");
	}
	else
		printf("no");
		getch();
}
