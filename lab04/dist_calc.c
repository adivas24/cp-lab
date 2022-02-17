#include <stdio.h>
int main()
{
  float u, a, t, d;
  printf("Enter the initial velocity: ");
  scanf("%f", &u);
  printf("Enter the acceleration: ");
  scanf("%f", &a);
  printf("Enter the time taken: ");
  scanf("%f", &t);
  d = (u*t)+(a*t*t/2);
  printf("The distance travelled is %.4f.\n", d);
  return 0;
}

