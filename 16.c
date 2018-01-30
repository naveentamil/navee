#include<stdio.h>
#include<conio.h>
void main()
{
int i,n;
clrscr();
    printf("Enter n value");
    scanf("%d",&n);
   
    for(i=2;i<=n/2;i++)
    {
        if(n%i!=0)
            continue;
        else
            break;
    }
    if((n/2+1)==i)
        {
            printf("Prime");
        }
    else
    {
        printf("Not a Prime");
    }
    getch();
}

