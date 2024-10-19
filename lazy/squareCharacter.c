#include <stdio.h>
#include <string.h>

int main()
{

 char sign = '*';
 int size = 0;

 printf("Enter the square size: \n");
 scanf("%d", &size);

 printf("Square Size: %d\n", size);

 for (int i = 0; i < size; i++)
 {
  for (int j = 0; j < size; j++)
  {
   printf("%c  ", sign);
  }
  printf("\n");
 }

 return 0;
}
