#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
  int n, seed, arr[10];
  seed = time(NULL);
  srand(seed);
  for (int i =0; i<10; i++){
    arr[i] = rand();
    printf("%d ",arr[i]);
  }
  putchar('\n');
return 0;
}
