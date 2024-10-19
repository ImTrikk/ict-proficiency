#include <stdio.h>
#include <stdlib.h>

void merge(int arr1[], int arr2[], int size1, int size2, int newArr[], int newArrSize)
{
 // Merge the two arrays
 int i = 0, j = 0, k = 0;

 while (i < size1)
 {
  newArr[k++] = arr1[i++];
 }

 while (j < size2)
 {
  newArr[k++] = arr2[j++];
 }
}

void findMedian(int newArr[], int newArrSize)
{
 double median;

 if (newArrSize % 2 == 1)
 {
  median = newArr[newArrSize / 2]; // will result im then accesses the value in the array
  printf("\nMedian: %.1f", median);
 }
 else
 {
  median = (newArr[(newArrSize / 2) - 1] + newArr[newArrSize / 2]) / 2.0;
  printf("\nMedian: %.1f", median);
 }
}

int main()
{

 int arr1[] = {1, 2, 3};
 int arr2[] = {4, 5, 6, 7, 8};

 int size1 = sizeof(arr1) / sizeof(arr1[0]);
 int size2 = sizeof(arr2) / sizeof(arr2[0]);

 int newArr[8];
 int newArrSize = size1 + size2;

 merge(arr1, arr2, size1, size2, newArr, newArrSize);

 // Print the merged array
 for (int i = 0; i < newArrSize; i++)
 {
  printf("%d, ", newArr[i]);
 }

 findMedian(newArr, newArrSize);

 return 0;
}