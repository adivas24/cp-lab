#include <stdio.h>
#include <string.h>
int my_str(char p[]);
long unsigned int my_strlen1(char p[]);
int main(){
  char n[100]={0};
  printf("Enter line:\n");
  scanf("%[^\n]",n);
  printf("The length of the string, '%s' is %d\n",n , my_str(n));
  printf("The length of the string, '%s' is %lu\n",n , my_strlen1(n));
  return 0;
}
int my_str(char p[]){
  char *q = p;
  while (*q)
    q++;
  return q-p;

}
long unsigned int my_strlen1(char a[]){
  return strlen(a);
}
