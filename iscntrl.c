#include <stdio.h>
int is_cntrl(int c)
{
	if(0<=c && c<=31)
		return 1;
	else
		return 0;
}

