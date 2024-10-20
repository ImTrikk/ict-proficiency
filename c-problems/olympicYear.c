#include <stdio.h>

int main()
{

 int year;

 printf("Enter year: ");
 scanf("%d", &year);

 if (year < 1896)
 {
  printf("Olympics has not yet started yet! \n");
 }

 if (year % 4 == 0)
 {
  printf("%d is an Olympic year! \n", year);
 }
 else
 {
  printf("%d is not an Olympic year! \n", year);
 }

 return 0;
}
