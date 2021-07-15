#include<stdio.h>
int main()
{
	int i,n,a,b,c,sum=0;
	printf("\n enter the range");
	scanf("%d",&n);
	
	a=0;
	b=1;
	sum=a+b;
	 
	printf("\n %d%d",a,b);
	
	for(i=1;i<=n-1;i++)
	{
		c=a+b;
		printf("\n %d",c);
		sum=sum+c;
		a=b;
		b=c;
		printf("\n sum %d",sum);
	 } 
}
