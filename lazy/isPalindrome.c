#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void checkPalindrome(char string[]){
 int left = 0;
 int right = strlen(string) - 1;

 while (left < right){
  if(string[left] != string[right]){
   printf("Not a palindrome");
   return;
  }
  left++;
  right--;
 }
 printf("Palindrome");
}

int main(){

 char string[50];

 printf("Enter a string to check for palindrome: \n");
 gets(string);

 checkPalindrome(string);
 return 0; 
}