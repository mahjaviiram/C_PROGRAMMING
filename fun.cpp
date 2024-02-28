//function
#include<stdio.h>
float sum(float,float,float);
float sum(float a,float b,float c)
{
	float s;
	s=a+b+c;
	return (s);
	//printf(" sum:%d ",s);
}
main()
{
	float x,y,z,s;
	printf("enter three numbers:");
	scanf("%f%f%f",&x,&y,&z);
	s=sum(x,y,z);
	printf("sum =%f",s);//function call
}
