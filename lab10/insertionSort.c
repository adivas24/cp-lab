#include <stdio.h>

void insertionSort(int *, int);

int main (){
 int arr[5] = {8,5,3,9,4};
 insertionSort(arr,5);
 for (int i=0;i<5;i++)
  printf("%d\n", arr[i]);

}

void insertionSort(int arr[], int num){
 for (int i = 1; i<num; i++){
  int k = arr[i], j = i-1;
  while (j>=0 && arr[j] > k){
   arr[j+1] = arr[j];
   j =j-1;
  }
  arr[j+1] = k;
 }
 return;
}
