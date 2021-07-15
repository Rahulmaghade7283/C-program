#include<stdio.h>
int main()
{
	int i,num;
	printf("\n enter any number");
	scanf("%d",&num);
	
	for(i=2;i<num;i++)
	{
		if(num%2==0)
		{
			printf("%d is not a prime number",num);
			break;
		}
		
	}
	if(num==i)
	printf("\n %d is a prime number",num);
	
}
