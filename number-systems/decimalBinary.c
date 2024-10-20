#include <stdio.h>

void toBinary(int decimal)
{
 int binary[32];

 for (int i = 0; i < decimal; i++)
 {
  binary[i] = decimal % 2;
  decimal = decimal / 2;
 }

 for (int i = 32; i > 0; i--)
 {
  printf("%d ", binary[i]);
 }
}

int main()
{

 int decimal;

 printf("Enter decimal: \n");
 scanf("%d", &decimal);

 toBinary(decimal);

 return 0;
}