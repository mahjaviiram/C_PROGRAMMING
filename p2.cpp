//WAP to find average of 5 number.
#include<stdio.h>
main()
{
	int a,b,c,d,e,s;
	printf("Enter 5 number");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	s=(a+b+c+d+e)/5;
	printf("Average of 5 numbers %d",s);
	return 0;
}
