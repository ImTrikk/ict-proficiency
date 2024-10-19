#include <stdio.h>

void sort(int arr[], int size){
 
 int temp = 0;

 for(int i = 0; i < size-1; i++){
  for(int j = 0; j < size - i - 1; j++){
   if(arr[j] > arr[j+1]){
    temp = arr[j];
    arr[j] = arr[j+1];
    arr[j+1] = temp;
   }
  }
 }
}

int main(){

 int arr[] = {500, 3, 23, 4, 21, 100, 400};
 int size = sizeof(arr)/sizeof(arr[0]);

 for(int i = 0; i < size; i++){
  printf("%d, ", arr[i]);
 }

 sort(arr, size);

 printf("\n");
 printf("Sorted array:\n");

 for(int i = 0; i < size; i++){
  printf("%d,", arr[i]);
 }

 return 0;
}