#include <stdio.h>
#include <ctype.h>
void convertLower(char *);
void convertLower2(char *);
int main(){
char line[] = "Greatest of All Time";
printf("%s\n", line);
convertLower(line);
printf("%s\n", line);
char line1[] = "Butter fly, Flutter by";
printf("%s\n", line1);
convertLower2(line1);
printf("%s\n", line1);

return 0;
}


void convertLower(char *p){
int i;
for (i = 0;p[i] != 0;i++){
  if (p[i] >= 'A' && p[i] <= 'Z')
    p[i] += ('a'-'A');
  }

return;
}
void convertLower2(char *p){
int i;
for (i = 0;p[i] != 0;i++){
 p[i] = tolower(p[i]);
  }
return;
}



