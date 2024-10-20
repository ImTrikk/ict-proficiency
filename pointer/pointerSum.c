#include <stdio.h>

int *addNums(int *num1, int *num2, int *result)
{

 *result = *num1 + *num2;

 return result;
}

int main()
{

 int num1, num2, sum;

 printf("Enter number 1: ");
 scanf("%d", &num1);

 printf("Enter number 2: ");
 scanf("%d", &num2);

 int *result = addNums(&num1, &num2, &sum);

 printf("The result is: %d\n", *result);

 return 0;
}
