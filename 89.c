
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,m,o,i,p,flag=0;
	clrscr();
	
	scanf("%d %d",&n,&m);
	o=m*n;
	for(i=1;i<=o/2;i++)
	{
		p=i*i;
		if(p==o)
		{
			printf("yes");
			flag=1;
			break;
		}
		
		
	}
	if(flag==0)
	printf("no");
    getch();
}

