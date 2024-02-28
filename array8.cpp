#include<stdio.h>
main()
{
	int n,max,i,loc;
	printf("Enter size of array:");
	scanf("%d",&n);
	int a[n];
	printf("Enter all numbers:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	loc=0;
	for(i=1;i<n;i++)
	{
		if(max<a[i])
		max=a[i];
		loc=i;
	}
	 printf("largest number:%d \nand its location is %d",max,loc);
}
            
