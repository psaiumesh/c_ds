#include <stdio.h>
int str_len(char *s)
{
	int count=0;
	while(*s!='\0')
	{
		count=count +1;
		s++;
	}
	return count;
}


