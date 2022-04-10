#include<stdio.h>
int is_alnum(int c)
{
	printf("%d\n",c);
	printf("%c \n",c);

	if((65<=c&&c<=90) || (97<=c && c<=122 ) || (48<=c && c<=57))
		return 1;

	return 0;
}

