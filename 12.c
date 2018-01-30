#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	int c=0;
	printf("enter the number");
	scanf("%d",&a);
	while(a>0)
	{
		b=a%10;
		c=c*10+b;
		a=a/10;
	}
	
	if(c==a)
	printf("%d is a palindrome",a);
	else
	printf("%d is not a palindrome",a);
}
