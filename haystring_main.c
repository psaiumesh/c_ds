#include <stdio.h>
char** strstr(char *,char *);
char *v;
int main()
{
	char haystring[100]="my name is umesh";
	char needle[100]="is umesh";
	//char **p=NULL;
	char**p=strstr(&haystring[0],&needle[0]);
	if(p!=NULL)
	{
		printf("%p\n",*p);
		printf(" in main %c\n",**p);
	}

}


