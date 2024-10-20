#include <stdio.h>

int main()
{

 int arr[5] = {20, 30, 10, 400, 75};
 int size = sizeof(arr) / sizeof(arr[0]);

 printf("Arr [5] = %d \n", arr + 4);

 for (int i = 0; i < size; ++i)
 {
  printf("Array[%d] = %d \n", i, arr[i]);
 }

 int *xArr = arr;

 printf("xArr %d", xArr);
 printf("\n\n\n\n");

 for (int i = 0; i < size; i++)
 {
  printf("Array[%d] = %d \n", i, xArr[i]);
 }

 return 0;
}