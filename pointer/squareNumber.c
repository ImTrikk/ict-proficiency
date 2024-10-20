#include <stdio.h>

// function prototype
void squareNumber();

int main()
{

 int num;

 printf("Enter number to store: \n");
 scanf("%d", &num);

 squareNumber(&num);
 printf("Square number is: %d\n", num);

 return 0;
}

void squareNumber(int *num)
{
 int square;

 square = *num * *num;
 *num = square;
}