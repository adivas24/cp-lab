#include <stdio.h>
#include <string.h>

int isAnagram(char *, char*);
void sort(char *);
int main(){
char name1[] = "Radium came";
char name2[] = "Madam Curie";
printf("%d\n",isAnagram(name1, name2));
return 0;
}

void sort(char arr[]){
 int n = strlen(arr);
 for (int i = 0; i< n-1; i++)
  for (int j = i+1; j<n;j++){
   if (arr[i]<arr[j]){
    char temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
   }
  }
return;
}
int isAnagram(char *str1, char *str2){
sort(str1);
sort(str2);
return (strcmp(str1,str2)==0)?1:0;

}
