#include <stdio.h>
#include <string.h>
int isPalind_1(char *);
int isPalind_2(char *);
int isPalind_3(char *);
void strrev(char *);
int main(){
char word[25];
scanf("%s",word);
printf("%d\n",isPalind_3(word));
return 0;
}

int isPalind_1(char *w){
int len = strlen(w);
char arr[len];
for (int i = 0; i <len ; i++){
arr[i] = w[len-(i+1)];
}
if (strcmp(arr,w)==0)
return 1;
else 
return 0;
}

int isPalind_2(char *w){
char *p = &(*w);
int x = strlen(w);
for (int i =0; i<x/2; i++){
if (*(p+i) != *(p+(x-(1+i)))){
return 0;
}
}
 return 1;
}
void strrev(char *a){
char *b, temp;
b = a+ strlen(a)-1;
for (;a<b; a++, b--){
temp = *a;
*a = *b;
*b = temp;
}
return;
}
int isPalind_3(char *a){
char b[25];
strcpy(b,a);
strrev(a);
if (strcmp(a,b)==0)
return 1;
else 
return 0;
}
