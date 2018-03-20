
#include<stdio.h>
#include<conio.h>
void main()
{
	char a[10];
	int i,flag=0,j;
	clrscr();
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++)
	{
		for(j=i+1;a[j]!=0;j++)
		{
			if(a[i]==a[j])
			{
				printf("no");
				flag=1;
				break;
			}
		}
		if(flag==1)
		break;
	}

if(flag==0)
{
	printf("yes");
}
	getch();
}
