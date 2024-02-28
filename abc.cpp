//ONE D array
#include<stdio.h>
 int main()
{
	int i,a[5];
	printf("Enter array element\n");
	for(i=0;i<5;i++)
	{
		printf("Enter a[%d]=",i);
		scanf("%d",&a[i]);	
	}
	printf("\n printing elements of array\n");
	for(i=0;i<5;i++)
	{
		printf("%d");
	}
}
