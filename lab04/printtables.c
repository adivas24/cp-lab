#include <stdio.h>
int main() 
{
  int a;
  printf("Enter an integer between 2 and 20: ");
  scanf("%d",&a);
  if (a>1 && a< 21){
    for (int i =1;i<=10;i++){
      int prod = a*i;
      printf("%d x %d = %d\n", a, i, prod);
    }
  }
  else {
  printf("Number not valid. Try running it again.\n");
  }
  return 0;
}
