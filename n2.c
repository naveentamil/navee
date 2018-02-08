#include <stdio.h> 
 #include<conio.h>
void main()
{
  int array[100], maximum, size, a, location = 1;
  clrscr();
  printf("Enter the number of elements in array\n");
  scanf("%d", &size);
  printf("Enter %d integers\n", size);
  for (a = 0; a< size; a++)
    scanf("%d", &array[a]);
  maximum = array[0];
  for (a = 1; a < size; a++)
  {
    if (array[a] > maximum)
    {
       maximum  = array[a];
       location = a+1;
    }
  }
 
  printf("Maximum element is present at location %d and it's value is %d.\n", location, maximum);
  getch();
}
