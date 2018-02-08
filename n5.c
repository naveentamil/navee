#include <stdio.h>
#include<conio.h>
int main()
{
  int array[100], median, size, c, location = 1,maximum;
  clrscr();
  printf("Enter the number of elements in array\n");
  scanf("%d", &size);
  printf("Enter %d integers\n", size);
  for (c = 0; c < size; c++)
    scanf("%d", &array[c]);
  median= array[0];
  for (c = 1; c < size; c++)
  {
    if (array[c] > maximum)
    {
       median  = array[c];
       location = c+1;
    }
  }
 
  printf("Median element is present at location %d and it's value is %d.\n", location, median);
  getch()
