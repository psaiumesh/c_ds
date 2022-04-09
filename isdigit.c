#include <stdio.h>
int is_digit(int c)
{
	printf("%d\n",c);
	if(c>=48 && c<=57)
		return 1;
	else
		return 0;
}

