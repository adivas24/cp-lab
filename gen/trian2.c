#include <stdio.h>
int main(){
	for (int i = 1; i<10; i++){
		for (int j = 1;j<=i;j++){
			printf("%2d",i);
		}
		putchar('\n');
	}

return 0;
}
