//wap to find average of given five integer numbers.
#include<stdio.h>
main()
{
	int a,b,c,d,e;
	float avg;
	printf("Enter fives integer number");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	avg=(a+b+c+d+e)/5.0;
	printf("Avearage of all numbers=%f",avg);
	
}
