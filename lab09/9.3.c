#include <stdio.h>

int computeSumOfDeposits(int row[], int size);
int abs(int n);
int computeMaxTransac(int row[], int size);
int main(){
  int row, col, i, j, k,m;
  scanf("%d %d",&row, &col);
  int mat[row][col];
  for (i=0; i<row;i++)
    for (j=0;j<col; j++)
      scanf("%d", &mat[i][j]);
  int max_dep = computeSumOfDeposits(mat[0],col);
  int max_num = 0;
  for (k=1; k<row; ++k)
   if (computeSumOfDeposits(mat[k],col)>max_dep){
     max_dep = computeSumOfDeposits(mat[k],col);
     max_num = k;
     }
  printf("The maximum total deposits(%d) occured in branch no %d\n", max_dep, max_num +1);
  int max_tr = computeMaxTransac(mat[0],col);
  int max_no;
  for (m=1; m<row; ++m)
   if (computeMaxTransac(mat[m],col)>max_tr){
     max_tr = computeMaxTransac(mat[m],col);
     max_no = m;
     }
  printf("The maximum transaction(%d) occured in branch no %d\n", max_tr, max_no +1);
return 0;
}

int computeSumOfDeposits(int row[], int size){

int sum=0;
for (int i = 0; i<size; i++)
  if (row[i]>0)  
    sum += row[i];
return sum;
}

int computeMaxTransac(int row[], int size){
int a;
int max_t = abs(row[0]);
for (a = 1; a<size; ++a)
  if (max_t< abs(row[a]))
    max_t = abs(row[a]);
return max_t;

}
int abs(int n){
int num = (n<0)?(-1*n):n;
return num;
}
