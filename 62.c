#include <stdio.h>
#include<conio.h>
void main() 
{
	int a;
	clrscr();
	printf("\n enter the number from 1 to 10");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
		printf("\n one");
		break;
		case 2:
		printf("\n two");
		break;
		case 3:
		printf("\n three");
		break;
		case 4:
		printf("\n four");
		break;
		case 5:
		printf("\n five");
		break;
		case 6:
		printf("\n six");
		break;
		case 7:
		printf("\n seven");
		break;
		case 8:
		printf("\n eight");
		break;
		case 9:
		printf("\n nine");
		break;
		case 10:
		printf("\nten");
		break;
		default:
		printf("\n enter only 1 to 10");
	}
 
	getch();
}
