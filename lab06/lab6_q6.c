#include <stdio.h>
int main(){

//block1
/*
int know=3;
switch (know)
{
  case 1:
        printf("one\n");
        break;
  default:printf("bye\n");
  case 3:
        printf("three\n");
  case 1+1+1:
        printf("hi\n");
        break;
}
*/
//*******************************
// block2
/*
float know=3.2;
switch (know)
{
  case 1:
        printf("one\n");
	break;
  case 3.2:
        printf("three\n");
  case 1+1+1: 
        printf("hi\n");
	break;
  default: printf("bye\n");
}

//*******************************
*/
//block3

int factor, know=1;
do
{
   for (factor=1; ; factor++)
	{
	  if (factor >2) 
break;
	  if (know == factor)
		continue;
	  printf("%d%d\n", know, factor);
	}
 know++;
} while (know <3);

}

