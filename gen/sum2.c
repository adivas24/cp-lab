#include <stdio.h>
int main(){
	int n; double sum = 0, num = 1,answer;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	for (int i=0;i<=n;i++){
		answer = (3+2*i)*num;
		num*=0.5;
		sum += answer;
	}
	printf("The sum is %lf\n",sum);
	
return 0;
}
