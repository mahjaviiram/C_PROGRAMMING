#include<stdio.h>
int fact(int);
main()
{
	int n,f;
	printf("Enter number:");
	scanf("%d",&n);
	f=fact(n);         //call
	printf("Factorial =%d",f);
}
int fact(int x)        //definition
{
	int f=1,i;
	for(i=1;i<=x;i++)
	  f=f*i;
	return f;
}
