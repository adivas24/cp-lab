#include <stdio.h>
int main() {
  int num,x, count=0;
  printf("Enter the number of integers: ");
  scanf("%d",&num);
  int arr[num];
  for (int i =0; i<num; i++){
    printf("Enter the %d element: ",i);
    scanf("%d", &arr[i]);
  }
  printf("Enter the number you want to find: ");
  scanf("%d", &x);
  for (int i = 0;i<num; i++){
    if (arr[i]==x)
      count++;
  }
  printf("The number %d occurs %d time(s).\n", x, count); 
return 0;
}
