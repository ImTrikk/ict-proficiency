#include <stdio.h>

int main()
{

 int *x = 4;
 int *xPtr = &x;
 int y = *xPtr;

 // prints the value of 4

 printf("%d", y);

 return 0;
}