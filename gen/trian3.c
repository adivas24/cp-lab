#include <stdio.h>
int main(){
	for (int i = 1; i<10; i++){
		int sum = 0;
		for (int j = 1; j<=i; j++){
			sum+=j;
			printf("%2d", j);
		}
		printf(" %d",sum);
		printf("\n");
	}

return 0;
}
