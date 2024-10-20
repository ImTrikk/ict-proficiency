#include <stdio.h>

int main()
{

 int x = 4;
 int *xPtr = x;
 int y = &xPtr;

 printf("%d", y);

 return 0;
}