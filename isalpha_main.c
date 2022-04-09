#include <stdio.h>
int is_alpha(int);
int main()
{
	char ch='*';
	int ret;
	ret=is_alpha(ch);
	if(ret==1)
		printf("it is alphabet \n");
	if(ret==0)
		printf("it is not alphabet \n");
}

