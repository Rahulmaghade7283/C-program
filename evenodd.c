#include<stdio.h>
int main()
{
	int num;
	printf("\n enter nunber");
	scanf("%d",&num);
	
	if(num%2==0)
	{
		printf("\n is an even number",num);
	}
	if(num%2!=0)
	{
		printf("\n is an odd number");
	}
	return 0;
}
