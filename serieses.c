#include<stdio.h>
int main()
{
	int i,n,sum=0,t;
	printf("\n enter the range");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		t=2*i;
		printf("%d + ",t);
		sum=sum+t;
	}
	printf("\n sum of series=%d",sum);
	return 0; 		
}
