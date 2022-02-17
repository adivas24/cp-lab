#include <stdio.h>
int main(){
	for (int r = 1; r<=20; r++){
		for (int x = 1;x<=20-r;x++) putchar(' ');
		for (int x = r; x<2*r;x++){
			printf("%d", x%10);
		}
		for (int x = 2*r-2; x>=r; x--){
			printf("%d", x%10);
		}
	putchar('\n');
	}
return 0;
}
