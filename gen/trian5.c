#include <stdio.h>
int main(){
	for (int i = 1; i<5; i++){
		(i%2==0)?printf("01010101\n"):printf("00000000\n");
	}
	printf("Width = 8, Height = 4\n");

return 0;
}
