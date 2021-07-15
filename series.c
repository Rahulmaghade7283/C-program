#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("\n enter the range");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d + ",i);
		sum=sum+i;
	}
	printf("\n sum of series=%d",sum);
	return 0; 		
}
