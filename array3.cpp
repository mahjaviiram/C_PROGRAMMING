#include<stdio.h>
main()
{
	int a[20],i,s;
	float avg;
	printf("Enter 20 numbers:");
	for(i=0;i<20;i++)
	{
		scanf("%d",&a[i]);
		s=s+a[i];
	}
	avg=s/20.0;
	printf("Avg=%f",avg);
}
