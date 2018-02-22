#include <stdio.h>
#include<conio.h>
void main()
{
	int i,temp;
	
	int b[10];
	for(i=0;i<10;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<10;i++)
	{
		
		
			if(b[i]>b[i+1])
			{
				temp=b[i];
				b[i]=b[i+1];
				b[i+1]=temp;
			}
	}
	printf("%d",b[i]);
	getch();
}
