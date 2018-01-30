#include<stdio.h>
#include<conio.h>
void main()
{
	int sum=0,n;
	scanf("%d",&n);
	while(n!=0)
  {
		n=n/10;
		sum=sum+1;
	}
	printf("%d",sum);
  getch();
}
