#include<stdio.h>
#include <cstring>
int str_len(char *);
int main()
{
	int ret;
	char ch[]="hello world";
	ret=str_len(ch);
	printf("%d \n",ret);

	//char *s1=ch;
	//while(*s1!='\0')
	//{
	//	printf("%c \n",*s1);
	//	s1++;
//	}

}

