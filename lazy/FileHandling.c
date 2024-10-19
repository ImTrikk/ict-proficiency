#include <stdio.h>
#include <stdlib.h>

int main(){

 FILE* ptr;

 ptr = fopen("file.txt", "a+");

 if (ptr == NULL) {
  printf("The file is not opened. The program will now exit.");
  exit(0);
 }

 return 0;
}
