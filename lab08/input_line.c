#include <stdio.h>
#define MAX_LEN 100
int main(){
  int i,j,n;
  char line[MAX_LEN]= {0};
  printf("Enter number of lines of input[1-10]:");
  scanf("%d",&n);
  while (n<0 || n>10){
    printf("Please enter valid input [1-10]:");
    scanf("%d",&n);
  }
  getchar();
  for (j=0;j<n;j++){
    printf("Enter the line number %d:",j+1);
    scanf("%[^\n]",line);
    for (i = 0; line[i]!=0; i++){
      if (line[i] != ' '){
        printf("%c",line[i]);
      }
    }
  putchar('\n');
  getchar();
  }
return 0;
}
