#include <stdio.h>
int main(){
  char word[1000];
  int key;
  printf("Please enter the word: ");
  scanf("%s", word);
  printf("Please enter an encryption key: ");
  scanf("%d", &key);
  while (key<-10 || key> 10){
    printf("Please enter valid key (-10,10): ");
    scanf("%d", &key);
  }
  for (int i =0; word[i]; i++){
    word[i]+=key;
  }
  printf("The encrypted word is %s.\n", word);
return 0;
}
