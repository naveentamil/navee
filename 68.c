#include <stdio.h>
#include<conio.h>

void main() 
{
	int i,j,k;
	clrscr();
	scanf("%d %d",&i,&j);
	i=i^j;
	k=i^j;
	i=i^j;
	printf("%d %d",j,i);
    getch();
}
