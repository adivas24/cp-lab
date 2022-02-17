#include <stdio.h>
#include <stdlib.h>

int main(){
 
 int m,n;
 scanf("%d %d", &m, &n);
 int *mat[m];
 for (int i = 0; i<m; i++){
  mat[i] = malloc(sizeof(int)*n);
  for (int j = 0; j<n; j++){
   scanf("%d",&mat[i][j]);
  }
 }

 for (int x = 0; x<m; x++){
  for (int y = 0; y<n; ++y)
   printf("%7d",mat[x][y]);
   putchar('\n');
  }
 return 0;
}
