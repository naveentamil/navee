 #include<stdio.h>
 #include<conio.h>
    int main()
    {
    char s[10]={2};
    int i,count=0;
    clrscr();
    for(i=0;s[i]!=0;i++)
    {
    if(s[i]=='0'||s[i]=='1'||s[i]=='2'||s[i]=='3'||s[i]=='5'||s[i]=='6'||s[i]=='7'||s[i]=='8'||s[i]=='9')
    {
    count=count+1;
    count++;
    }
    }
    if(count==0)
    printf("not");
    else
    printf(" Yes ");
    }
