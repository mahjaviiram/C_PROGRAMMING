//WAP to find area and perimeter of rectangle.
#include<stdio.h>
main()
{
	float a,b,l,p;
	printf("enter the value of b and l:");
	scanf("%f%f",&b,&l);
	a=b*l;
	printf("area=%f",a);	
	p=(b+l)+(b+l);
	printf("\nparameter=%f",p);		
}
