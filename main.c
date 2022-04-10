#include <stdio.h>
int is_alnum(int );
int is_alpha(int);

void test_is_alnum(void)
{
	char  c='&';
	int ret = 0;

	ret = is_alnum(c);
	if (ret==1)
	{
		printf("it is digit or alphabet\n");
	}

	if(ret==0)
		printf("it is neither  digit nor alphabet \n");
}

void test_isalpha(void)
{
	char ch='*';
	int ret;

	ret=is_alpha(ch);
	if(ret==1)
		printf("it is alphabet \n");
	else
		printf("it is not alphabet \n");
}

int main()
{
	test_is_alnum();
	test_is_alpha();
}


