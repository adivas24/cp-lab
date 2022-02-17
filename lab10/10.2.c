#include <stdio.h>
#include <stdlib.h>
int computeSumOfDeposits(int row[]);
int abs(int n);
int computeMaxTransac(int row[]);
int main(){
  int row, col, i, j, k,m;
  scanf("%d",&row);
  int *mat[row];
//  int mat[row][col];
  for (i=0; i<row;i++){
    scanf("%d", &col);
    mat[i] = malloc(sizeof(int)*(col+1));
    mat[i][0] = col;
    for (j=1;j<col+1; j++)
      scanf("%d", &mat[i][j]);
  }
  int max_dep = computeSumOfDeposits(mat[0]);
  int max_num = 0;
  for (k=1; k<row; ++k)
   if (computeSumOfDeposits(mat[k])>max_dep){
     max_dep = computeSumOfDeposits(mat[k]);
     max_num = k;
     }
  printf("The maximum total deposits(%d) occured in branch no %d\n", max_dep, max_num +1);
  int max_tr = computeMaxTransac(mat[0]);
  int max_no;
  for (m=1; m<row; ++m)
   if (computeMaxTransac(mat[m])>max_tr){
     max_tr = computeMaxTransac(mat[m]);
     max_no = m;
     }
  printf("The maximum transaction(%d) occured in branch no %d\n", max_tr, max_no +1);
return 0;
}

int computeSumOfDeposits(int row[]){
int size = row[0];
int sum=0;
for (int i = 1; i<size+1; i++)
  if (row[i]>0)  
    sum += row[i];
return sum;
}

int computeMaxTransac(int row[]){
int a, size = row[0];
int max_t = abs(row[1]);
for (a = 2; a<size+1; ++a)
  if (max_t< abs(row[a]))
    max_t = abs(row[a]);
return max_t;

}
int abs(int n){
int num = (n<0)?(-1*n):n;
return num;
}
