#include <stdio.h>

int main()
{

 int year;

 printf("Enter the year: ");
 scanf("%d", &year);

 if (year < 1896)
 {
  printf("No olympics before 1856");
 }

 if (year % 4 == 0)
 {
  printf("The year %d is an olympic year", year);
 }
 else
 {
  printf("The year %d is not an olympic year", year);
 }
 return 0;
}