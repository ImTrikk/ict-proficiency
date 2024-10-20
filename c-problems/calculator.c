#include <stdio.h>

int main()
{

 int num1, num2;
 char opr;

 float result;

 printf("Enter number 1: \n");
 scanf("%d", &num1);

 printf("Enter number 2: \n");
 scanf("%d", &num2);

 printf("Enter operator ['+', '-', '/', '*']:  \n");
 scanf(" %c", &opr);

 switch (opr)
 {
 case '+':
  result = num1 + num2;
  printf("%d + %d = %.2f \n", num1, num2, result);
  break;
 case '-':
  result = num1 - num2;
  printf("%d + %d = %.2f \n", num1, num2, result);
  break;
 case '*':
  result = num1 * num2;
  printf("%d + %d = %.2f \n", num1, num2, result);
  break;
 case '/':
  result = num1 / num2;
  if (num1 <= 0)
  {
   printf("Cannot divide by zero\n");
   break;
  }
  printf("%d + %d = %.2f \n", num1, num2, result);
  break;

 default:
  break;
 }

 return 0;
}