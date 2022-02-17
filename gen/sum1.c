#include <stdio.h>
int main(){
	int n; double sum = 0, num = 1;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	for (int i=0;i<=n;i++){
		sum += num;
		num*=0.5;
	}
	printf("The sum is %lf\n",sum);
	
return 0;
}
