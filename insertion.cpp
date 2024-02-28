#include<stdio.h>
int main()
{
	int i,j,k,temp;
	int a[5]={4,8,5,3,1};
	printf("Insertion sort\n");
	printf("Array before sorting:\n");
	for(i=0;i<=4;i++)
	printf("%d\t",a[i]);
	for(i=1;i<=4;i++)
	{
		for(j=0;j<i;j++)
		{
			if(a[j]>a[i])
			{
				temp=a[j];
				a[j]=a[i];
				for(k=i;k>j;k--)
				a[k]=a[k-1];
				a[k+1]=temp;
			}
		}
	}
	printf("\nArray after sorting:\n");
	for(i=0;i<=4;i++)
	printf("%d\t",a[i]);
}
