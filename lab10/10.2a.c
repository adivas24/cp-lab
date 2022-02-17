#include <stdio.h>
#include <stdlib.h>

int main(){
  
 int m,n;
 scanf("%d",&m);
 int *mat[m];
 for (int i = 0; i<m; i++){
  scanf("%d",&n);
  mat[i] = malloc(sizeof(int)*(n+1));
  mat[i][0] = n;
  for (int j = 1; j<n+1;j++)
   scanf(" %d", &mat[i][j]);
 }
 for (int x = 0; x<m; ++x){
  for (int y = 0; y<=mat[x][0]; ++y)
   printf("%7d", mat[x][y]);
  putchar('\n');
 }
 return 0;
}
