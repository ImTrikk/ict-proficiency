#include <stdio.h>

int main()
{

 int num;
 int rows;

 printf("Enter number: \n");
 scanf("%d", &rows);

 for (int i = 1; i <= rows; ++i)
 {
  printf("+ \n");
  for (int j = 1; j <= i; ++j)
  {
   printf("- ");
  }
  printf("+ ");
  printf("\n");
 }
 return 0;
}