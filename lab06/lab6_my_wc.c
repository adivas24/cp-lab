#include <stdio.h>
int main(){
  int lin=0, cha = 0, ch;
  while ((ch= getchar()) != EOF){
  if (ch == '\n')
    lin++;
  cha++;
  }
  printf ("%d lines and %d characters.\n", lin, cha);
  return 0;
}
