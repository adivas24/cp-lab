#include <stdio.h>
#include <stdlib.h>
int main(){
  int arr[10];
  for (int i =0; i<10; i++){
    arr[i] = rand();
    printf("%d ",arr[i]);
  }
  putchar('\n');
return 0;
}
