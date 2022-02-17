#include <stdio.h>
#include <string.h> 
#include <ctype.h>

int anagram4(char *, char*);

int main(){

char name1[100], name2[100];
scanf("%[^\n]",name1);
getchar();
scanf("%[^\n]",name2);
printf("%d\n",anagram4(name1, name2));

return 0;
}

int anagram4(char *a1, char *a2){
 int arr1[128] = {0}, arr2[128] = {0};
 int n1 = strlen(a1), n2 = strlen(a2);
 for (int i = 0; i<n1;i++) arr1[toupper(a1[i])]++; 
 for (int j = 0; j<n2;j++) arr2[toupper(a2[j])]++;
 int count = 1;
 for(int i = 65; i<=90; i++) count *= (arr1[i]==arr2[i]);
 return count; 
}
