#include <stdio.h>
#include<conio.h>
 
void main()
{
   int no, sums = 0, c, array[100];
 
   scanf("%d", &no);
 
   for (c = 0; c < no; c++)
   {
      scanf9("%d", &array[c]);
      sums = sums + array[c];
   }
 
   printf(\n"Sum = %d",sums);
 
   return 0;
}
