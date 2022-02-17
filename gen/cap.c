#include <stdio.h>
int main()
{
char ch;
while ((ch = getchar()) != '\n' && ch != ' ')
{
	if (ch>= 'A' && ch<= 'Z')
		putchar(ch-'A'+'a');
	else 
		putchar(ch);
}
putchar('\n');
return 0;
}
