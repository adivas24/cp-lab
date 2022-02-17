#include <stdio.h>
int main() {
int a,b,c;
printf("Enter 3 numbers (no commas please):");
scanf( "%d %d %d", &a, &b, &c);
int sum = a+b+c;
int prod = a*b*c;
int pprod = (a*b)+(b*c)+ (c*a);
printf("The sum is %d\nThe product is %d\nThe pairwise product is %d\n",sum, prod, pprod);
return 0;
}
