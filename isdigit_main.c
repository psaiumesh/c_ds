#include <stdio.h>
int is_digit(int );
int main()
{
	int c='8';
	int ret=is_digit(c);
	if (ret==1)
	{
		printf("it is digit \n");

	}
	else
		printf("it is not digit \n");
}


