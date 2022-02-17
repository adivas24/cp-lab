#include <stdio.h>
#include <ctype.h>
#include <string.h>

void sort(char *);
int isAnagram2(char *, char *);
int main(){
 char name1[] = "hElLO";
 char name2[] = "HelLo";
 printf("%d\n", isAnagram2(name1, name2));
 return 0;
}

int isAnagram2(char a1[], char a2[]){

 int n1 = strlen(a1);
 int n2 = strlen(a2);
 for (int i = 0; i<=n1+1; i++)
  a1[i] = tolower(a1[i]);
 for (int j = 0; j<=n2+1; j++)
  a2[j] = tolower(a2[j]);
 sort(a1);
 sort(a2);
 if (!strcmp(a1,a2))
  return 1;
 else 
  return 0;

}

void sort(char a1[]){
 int n = strlen(a1);
 for (int i = 0; i<n-1; i++)
  for (int j = i+1; j<n; ++j)
   if (a1[i]>a1[j]){
    char temp = a1[i];
    a1[i] = a1[j];
    a1[j] = temp;
   }
 return;
}
