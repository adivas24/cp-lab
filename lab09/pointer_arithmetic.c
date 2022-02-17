#include <stdio.h>

int main(){

int a=2, x=3, *b = &a, *y = &x;
char c = 'A', *d = &c, w = 'D', *z = &w;
float e = 1.00f, *f = &e, p = 88.9f, *q = &p;
//printf("%ld", y-b);Allowed
//printf("%d", d-b);  Not permitted
//printf("%d", y+b); Not permitted
//printf("%d", d+z); Not permitted
//printf("%d", y*b); Not permitted
//printf("%d", d*z); Not permitted
//printf("%d", f*q); Not permitted
//printf("%p",b+a); Allowed 
//printf("%p\n", f+e); Not permitted
printf("%p\n", 3*b);
return 0;
}
