#include <stdio.h>
int is_cntrl(int);
int main()
{
	char ch='a';
	int ret=is_cntrl(ch);
	if (ret==1)
		printf("it is control character \n");
	if(ret==0)
		printf("it is not control character \n");
}

