//wap to check whether given year is leap or not.
#include<stdio.h>
main()
{
	int a;
	printf("enter year:");
	scanf("%d",&a);
	a%4==0?printf("this year is leap"):printf("this year is not leap");
}
