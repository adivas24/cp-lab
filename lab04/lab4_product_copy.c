#include <stdio.h>
int main()
{
  float a, b, prod;
  printf("Enter value of a ");
  scanf("%f", &a); //Reading user input for the variable a
  printf("Enter the value of b ");
  scanf("%f", &b); // Reading user input for the variable b
  prod = a * b;
  printf("Product of %.2f and %.2f is: %.4f\n", a, b, prod);
  return 0;
}
