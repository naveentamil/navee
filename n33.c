#include<stdio.h>
#include<string.h>
void main()
{
    char a[20];
    int i,j=0,c;
    printf("enter any string");
    gets(a);
    c=strlen(a);
    for(i=0;i<=c;i++)
    {
    if(a[i]==' ')
    {
        j=j+1;
    }
    }
    printf("the total no of space is %d",j);
}
