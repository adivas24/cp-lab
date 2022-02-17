#include <stdio.h>
#include <string.h> 
int main(){
  char s1[50] = "BITS", s2[] = "Pilani", s3[50];
  printf("%lu %lu\n", strlen(s1), sizeof(s1));
  strcat(s1," ");
  strcat(s1,s2);
  strcat(s1, ", ");
  strcpy(s3, "Pilani campus");
  strcat(s1, s3);
  puts(s1);

  if (!strcmp(s2,s3))
    puts("Both strings are the same!\n");
  else 
  if (strcmp(s2,s3) > 1)
    printf("%s is greater than %s\n", s2, s3);
  else 
 printf("%s is greater than %s\n", s3, s2);

return 0;
}
