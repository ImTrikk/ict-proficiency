#include <stdio.h>
#define max_size 100

int insertArr(int arr[], int size, int num, int pos)
{

 // shifting elements to the right
 for (int i = size - 1; i > pos; i--)
 {
  arr[i + 1] = arr[i];
 }

 
 arr[pos] = num;

 return size + 1;
}

int main()
{
 int arr[max_size] = {100, 400, 200, 1, 4};
 int size = 5;
 int num, pos;

 printf("Enter number to insert: \n");
 scanf("%d", &num);

 printf("Enter position to insert: \n");
 scanf("%d", &pos);

 size = insertArr(arr, size, num, pos);

 printf("Array after insertion: ");
 for (int i = 0; i < size; i++)
 {
  printf("%d ", arr[i]);
 }
}