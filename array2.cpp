#include<stdio.h>
main()
{
	int a[]={5,7,8,4,2};
	int *p;
	p=a;
	printf("%d,%d,%d,%d",*(p+2),*(p+3),*p+1);
}
