#include <stdio.h>
#include <string.h>
#include<conio.h>
 
void main()
{
    char s[200];
    int c=0,i;
    clrscr();
    scanf("%[^\n]s", s);
    for (i = 0;s[i] != '\0';i++)
    {
        if (s[i] == ' ')
            c++;    
    }
    printf("%d\n", c + 1);
    getch();
}
