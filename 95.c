
#include<stdio.h>
#include<conio.h>
void main()
{
	char a[10];
	int i,n;
	clrscr();
	scanf("%s",a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		if(i%2==0)
		{
			printf("%c",a[i]);
		}
		
	}
	printf("\t");
	for(i=0;i<n;i++)
	{
		if(i%2!=0)
		{
			printf("%c",a[i]);
		}
		
	}
	
	getch();
}
