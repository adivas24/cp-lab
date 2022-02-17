#include <stdio.h>
#include <string.h>
#define MAXCOL 10000

void storeSubstr(char *str ,char substr[][MAXCOL]);
int main(){


}

void storeSubstr(char *str ,char substr[][MAXCOL]){
 int k =0; char *temp;
 for (int i = 0; i<strlen(str); i++)
  for (int j = i+1; j<=strlen(str);j++){
   temp = str+i;
   strncpy(substr[k],temp,j-i);
  }
 return;
}
