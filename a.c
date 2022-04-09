#include <stdio.h>
int islower(int);
int isupper(int);
int main()
{
	int ret;
	char ch='h' ;
	//ret=islower(ch);
	ret=isupper(ch);
		if(ret==1)
	{
		printf("it is success \n");
	}
		else
			printf("it is not success \n");
}

