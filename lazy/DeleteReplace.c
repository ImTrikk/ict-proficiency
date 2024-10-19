#include <stdio.h>
#include <stdlib.h>

void replaceIndex(int arr[], int size, int target, int num)
{

 for (int i = 0; i < size; i++)
 {
  if (arr[i] == target)
  {
   arr[i] = num;
  }
 }
}

int main()
{

 int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
 int size = sizeof(arr) / sizeof(arr[0]);
 int target;
 int num;

 printf("Enter target number: ");
 scanf("%d", &target);

 printf("Enter new Number: ");
 scanf("%d", &num);

 replaceIndex(arr, size, target, num);

 for (int i = 0; i < size; i++)
 {
  printf("%d ", arr[i]);
 }

 return 0;
}