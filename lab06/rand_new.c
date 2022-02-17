#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main ()
{
int x, n, seed;
seed = time(NULL);
srand(seed);
for (int i =0; i<5;i++)
{
x = rand()%20 +20;
printf("%d\n",x);
}
return 0;
}
