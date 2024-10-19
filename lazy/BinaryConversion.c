#include <stdio.h>
#include <stdlib.h>

void toBinary(int num){
 int binary[32];
 int decimal;

 int i = 0;
 while(num > 0){
  binary[i] = num % 2;
  num = num/2;
  i++;
 }

 for(int j = i -1; j >= 0; j--){
  printf("%d", binary[j]);
 }
}

void toDecimal(int num){
 
}

int main(){

 int num;

 printf("Enter the value for num: ");
 scanf("%d", &num);

 toBinary(num);

 return 0;
}
