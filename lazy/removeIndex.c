#include <stdio.h>
#include <stdlib.h>

void removeIndex(int arr[], int size, int target){

 int temp;
 
 
 for(int i = 0; i < size; i++){
  if(arr[i] == target){
   temp = arr[i+1];
   arr[i+1] = arr[i];
   arr[i] = temp; 
  }
 }

 for(int i = 0; i < size-1; i++){
  printf("%d", arr[i]);
 }
}

int main(){
 int arr[] = {1,2,3,4,5};
 int size = sizeof(arr)/sizeof(arr[0]);
 int target;

 printf("Num to remove: ");
 scanf("%d", &target);

 removeIndex(arr, size, target);

 return 0;
}