#include <stdio.h>
#include <stdlib.h>

int main()
{

 int arr[] = {1, 2, 3, 4, 5, 6, 7};
 int size = sizeof(arr) / sizeof(arr[0]);
 int target;
 int temp;

 for (int i = 0; i < size; i++)
 {
  printf("%d ", arr[i]);
 }

 printf("\nTarget number to delete: ");
 scanf("%d", &target);

 for (int i = 0; i < size; i++)
 {
  if (arr[i] == target)
  {
   temp = arr[i + 1];
   arr[i + 1] = arr[i];
   arr[i] = temp;
  }
 }

 for (int i = 0; i < size - 1; i++)
 {
  printf("%d ", arr[i]);
 }

 return 0;
}