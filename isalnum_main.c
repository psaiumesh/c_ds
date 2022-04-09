#include <stdio.h>
int is_alnum(int );
int main()
{
	char  c='&';
	int ret=is_alnum(c);
	if (ret==1)
	{
		printf("it is digit or alphabet\n");

	}
	if(ret==0)

		printf("it is neither  digit nor alphabet \n");
}


