//wap to check whether given number is armstrong or not.
#include<stdio.h>
#include<math.h>
int main()
{
	int n,sum=0,d,n1;
	printf("enter number:");
	scanf("%d",&n);
	n1=n;
	while(n!=0){
		d=n%10;
		sum=sum+pow(d,3);
		n=n/10;	
	}
	if(sum==n1)
	printf("it is armstrong");
	else
	printf("it is not armstrong");
}
