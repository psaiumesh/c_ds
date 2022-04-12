#include<stdio.h>
int* add(int **,void **);
int c;
int main()
{
	 int a=5;
	 int b=10;
	//printf("%d\n",var);
	 int  *p=&a;
	 void *q=&b;
	//printf("%d\n",*p);
	int*ret=add(&p,&q);
	printf(" in main addition %d\n",*ret);
	//int b=5;
	//int *p=&b;
	//printf("%d\n",*p);
	//var=10;
	//printf("%d\n",var);
}
int c;
int* add(int **v,void **m)
{
	//int c;
	c= (**v) + (**(int **)m); 
	//printf("%d\n",c);
	return (&c);
}


