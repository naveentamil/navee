#include <stdio.h>
 #include<conio.h>
 

void main() 
{
	int i,n,a[5],c;
	clrscr();
	scanf("%d\n",&n);
	for(i=0;i<=n;i++)
	{
	scanf("%d\n",&a[i]);

	}
	c=a[0];
	for(i=0;i<=n;i++)
	{
	if(a[i]<c)
{
	c=a[i];
}
}
printf(" min=%d\n",c);

	
	
	getch();
}
