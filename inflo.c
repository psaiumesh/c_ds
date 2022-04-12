#include<stdio.h>
int* add(int,int);
int c;
int main()
{
	int a=5;
	float b=7.5;
	int  *v=add(a,b);
	printf("%d\n",*v);
}
int* add(int a,int b)
{
	c=a+b;
	return(&c);
}


