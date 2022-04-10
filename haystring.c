#include <stdio.h>
#include <stdlib.h>
char *v;
char** strstr( char *haystr,char *need)
{
	//int count=0;
	//int i=0;
	char *ptr;
	ptr=need;
	//printf("needle before address =%p\n",need);
	//while(*need !='\0')
//	{
//		while((*(need)!=' ') &&( *(need)!='\0'))
//		{
//			printf("%c\n",*(need));
//			need=need+1;
//		}
//		count=count+1;
//		if(*(need)!='\0')
//			need=need+1;
		
//	}
//	printf("needle after address =%p\n",need);
//	printf("count=%d\n",count);
//	need=ptr;
//	printf("needle after changing to normal=%p\n",need);
	//i=0;
	//int j=0;
//	int wcount=0;
	//char *v;
//	int a;
	//while(*needle!='\0')
//	{
//		printf("%c\n",*(needle));
//		needle=needle+1;
//	}
//	printf("\n");
//	while(*haystring!='\0')
//	{
//		printf("%c\n",*(haystring));
//		haystring=haystring+1;
//	}

//	printf("haystring address=%p\n",haystr);
	int rcount=0;
	while(*haystr!='\0')
	{
		//while(*haystring!=' ')
	//	{
			if(*haystr == *(need))
			{
				if(rcount==0)
				{
					v=haystr;
					printf("haystr address =%p\n",haystr);
				}
				while((*(need)!='\0')	&& (*haystr == *need))
				{
					haystr=haystr+1;
					need=need+1;
					rcount=rcount+1;
				//i=i+1;
				//continue;
				}
			}
			if(*need=='\0')
			{

				printf("hello\n");
				return (&v);
			}
			if(*haystr!=*need)
			{
				haystr=haystr+1;
				need=ptr;
			}

			//else
			//{
				//i=0;
			//	a=0;
			//	haystring=haystring+1;
			//	needle=ptr;
		//	}
	   // }
		//if(((*haystring==' ') && (*needle=='\0')) || ((*haystring==' ') && (*needle==' ')))
	//	{
	//		wcount=wcount+1;
	//		printf("word count=%d\n",wcount);
	//	}
	//	haystring=haystring+1;
	//	needle=ptr;
	}
	//printf("wcount= %d\n",wcount);
	//if(wcount==count)
	//	return (&v);
	//else
	printf("no substring found\n");
	return NULL;
}

			
