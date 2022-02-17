#include <stdio.h>
int main()
{
  float a, b, sum, prod, quo, diff;
  printf("Enter value of a ");
  scanf("%f", &a); //Reading user input for the variable a
  printf("Enter the value of b ");
  scanf("%f", &b); // Reading user input for the variable b
  sum = a + b;
  prod = a * b;
  quo = a / b;
  diff = a - b;
  printf("Sum of %.2f and %.2f is %.4f\n", a, b, sum);
  printf("Product of %.2f and %.2f is: %.4f\n", a, b, prod);
  printf("Quotient of %.2f and %.2f is %.4f\n", a, b, quo);
  printf("Difference between %.2f and %.2f is %.4f\n", a, b, diff);
  return 0;
}
