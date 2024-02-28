#include<stdio.h>
int main()
{
	int BEG,END,a[500],mid,item,n,i;
	printf("Enter size of array:");
	scanf("%d",&n);
	printf("Enter all elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the element to be searched:");
	scanf("%d",item);
	BEG=0;END=n
	-1;mid=(BEG+END)/2;
	while(item!=a[mid]&&BEG<=END)
	{
		if(item>a[mid])
		  BEG=mid+1;
		else
		END=mid-1;
		mid=(BEG+END)/2;	
	}
	if(item==a[mid])
	printf("location=%d",mid);
	else
	printf("item not found");

}
