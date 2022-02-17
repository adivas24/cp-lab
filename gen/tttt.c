#include <stdio.h>
int main(){
char ch = 10, *pchar = &ch;
short si,  *pshort;
si = ch;
pshort = pchar;
printf("%d\n", si);
printf("%d\n", *pshort);


return 0;
}
