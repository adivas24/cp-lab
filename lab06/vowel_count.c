#include <stdio.h>
int main(){
  int vow = 0, cons = 0, ch;
  while (((ch = getchar())>='A' && ch <= 'Z') ||(ch >= 'a' && ch <= 'z')){
    switch (ch){
      case 'A':
      case 'a':
      case 'e':
      case 'E':
      case 'I':
      case 'i':
      case 'O':
      case 'o':
      case 'U':
      case 'u':
        vow++;
        break;
      default :
        cons++;
        break;
      } 
    }
  printf("The first word contains %d vowels and %d consonants.\n", vow, cons); 
  return 0;
}
