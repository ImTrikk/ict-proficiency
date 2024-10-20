#include <stdio.h>

int *multiplyNumbers(int *num1, int *num2, int *product)
{
 *product = *num1 * *num2;

 return &product;
}

int main()
{

 int num1, num2, product;

 printf("Enter num1: \n");
 scanf("%d", &num1);

 printf("Enter num2: \n");
 scanf("%d", &num2);

 int *result = multiplyNumbers(&num1, &num2, &product);

 printf("The product of %d * %d is %d", num1, num2, *result);

 return 0;
}