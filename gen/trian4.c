#include <stdio.h>
int main(){
	
	int num = 11;
	for (int j = 1; j<10; j++){
	for (int i= 1; i<=j; i++){
		printf("%d ", num);
		num +=2;
	}
	putchar('\n');
	}


return 0;
}
