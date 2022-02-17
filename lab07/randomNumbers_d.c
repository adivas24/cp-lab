#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int findMax(int arr[]){
  int max= arr[0];
  for (int i =1; i<10; i++){
    max = (arr[i]>max)?arr[i]:max;
  }
  return max;
}
int findMin(int arr[]){
  int min= arr[0];
  for (int i =1; i<10; i++){
    min = (arr[i]<min)?arr[i]:min;
  }
  return min;
}

int findMax(int arr[]);
int findMin(int arr[]);


int main(){
  int n, seed, arr[10];
  seed = time(NULL);
  srand(seed);
  for (int i =0; i<10; i++){
    arr[i] = rand()%20 +20;
    printf("%d ",arr[i]);
  }
  putchar('\n');
  printf("The minimum and maximum are %d and %d respectively\n", findMin(arr), findMax(arr));
return 0;
}
