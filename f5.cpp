//wap to find area and parimeter of rectangle using UDF.UDF should returnt the values of area and parimetere to the main function.
#include<stdio.h>
void rect(int,int,int*,int*);
int main()
{
	int l,b,area,peri;
	printf("Enter sides of rectangle: ");
	scanf("%d%d",&l,&b);
	rect(l,b,&area,&peri);
	printf("area=%d and perimeter=%d",area,peri);
}
void rect(int a,int b,int *c,int *d)
{
	*c=a*b;
	*d=2*(a+b);
}
