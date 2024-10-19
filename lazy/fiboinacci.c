#include <stdio.h>

void generateFibonacci(){

 int arr[10];
 int num = 0;

 for(int i = 0; i < 10; i++){
  arr[i] = num + num;
 }
 for(int i = 0; i < 10; i++){
  printf("%d,", arr[i]);
 }
}


int main(){

  generateFibonacci();
 
 return 0; 
}