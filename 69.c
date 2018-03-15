#include <stdio.h>
#include<conio.h>
void main()
{
	int a[10],max=-999,n,i;
	clrscr();
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	    if(a[i]>max)
	    {
	        max=a[i];
	    }
	}
	printf("%d",max);
	getch();
}
