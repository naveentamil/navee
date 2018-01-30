#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i;
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            printf("no");
            break;
        }
    }
    if(i==n)
    {
        printf("yes");
     }
    getch();
    }
