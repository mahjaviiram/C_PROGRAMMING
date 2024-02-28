//use of realloc function
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,*p,i,min,n1;
	char choice;
	printf("How many numbers are there:");
	scanf("%d",&n);
	 p=(int *)calloc(n,sizeof(int));
	 printf("Enter all numbers");
	 for(i=0;i<n;i++)
	 {
	 	scanf("%d",p+i);
}
	 printf("Do you want to store more data?");
	 scanf(" %c",&choice);
	 if(choice=='y')
	 {
	 	printf("how many additional elements are there?");
	 	scanf("%d",&n1);
	 	p=(int *)realloc(p,(n+n1)*sizeof(int));
	 	printf("Enter all additional numbers");
	 	for(i=0;i<n+n1;i++)
	 	{
	 		scanf("%d",p+i);
		}
		printf("List of all the elements\n");
		for(i=0;i<n+n1;i++)
		{
			printf("%d",*(p+i));
		}
	 }
}
