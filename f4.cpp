#include<stdio.h>
void swap(int*,int*);        //prototype
main()
{
	int a,b;
	printf("Enter two numbers:");
	scanf("%d%d",&a,&b);
	swap(&a,&b);
	printf("After swapping a=%d,b=%d",a,b);
}
void swap(int *x,int *y)
{
	*x=*x+*y;
	*y=*x-*y;
	*x=*x-*y;
}

