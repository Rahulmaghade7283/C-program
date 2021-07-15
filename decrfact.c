#include<stdio.h>
int main()
{
 long int n,i,f=1;
	printf("\n enter number");
	scanf("%d",&n);
	
	for(i=1;i>=n;i--)
	
		f=f*i;
	
printf("\n factorial number %d%d",n,f);
}
