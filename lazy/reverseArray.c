#include  <stdio.h>
#include <stdlib.h>


void reverse(int arr[], int size){ 
 int left = 0;
 int right = size-1;
 int temp=0;

 while(left < right){

  temp = arr[left];
  arr[left] = arr[right];
  arr[right] = temp;
  
  left++;
  right--;
 }

 for(int i = 0; i < size; i++){
  printf("%d", arr[i]);
 }

}


int main(){
 int arr[] = {1,2,3,4,5,6};

 int size = sizeof(arr)/sizeof(arr[0]);

 reverse(arr, size);

 return 0;
 }
