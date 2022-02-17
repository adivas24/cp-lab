#include <stdio.h>
#include <math.h>

int main(){
  double a,b,c,x1,x2;
  printf("Enter the values for a, b, c: ");
  scanf("%lf%lf%lf", &a, &b, &c);
  x1 = (-b + sqrt((b*b)-(4*a*c)))/(2*a);
  x2 = (-b - sqrt((b*b)-(4*a*c)))/(2*a);
  printf("\nThe roots are %lf and %lf\n", x1, x2);
  return 0;
}
