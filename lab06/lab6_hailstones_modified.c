#include <stdio.h>

int main()
{
int val, term, count, r_low, r_high, a, b;

printf("Enter a +ve integer to generate the hailstone sequence: ");
   scanf("%d",&val);
while (val <= 0) 
{
   printf("Hailstone sequences only for +ve numbers. Please enter valid input:");
   scanf("%d",&val);
}
printf("Enter the upper and lower bounds for the limiting range: ");
scanf("%d%d", &a, &b);
r_low = (a>b)?b:a;
r_high = (a>b)?a:b; 

count = 1;	
printf("%d\n", val);
term = val;
while (term!=1 && (term >r_high || term <= r_low) ){
   if (term % 2 == 0) 
      term = term / 2;
   else 
      term = (3 * term) + 1;
   printf("%d\n", term);
   count++;
}
 if (term != 1){
printf("Operation terminated as %d was within the range [%d,%d).\n", term, r_low, r_high);
printf("Number of terms so far = %d\n",count);
} else
printf("Number of terms = %d\n",count);


return 0;
}
