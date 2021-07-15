#include<stdio.h>
int main()
{
	int a,b,c;
	printf("\n enter the choice");
	scanf("%d",&c);
	
	switch(c)
	{
		case 1:
			printf("\n enter the number ",a,b);
			scanf("%d%d",&a,&b);
			if(a>b)
			printf("\n a is greater");
			else
			printf("\n b is greater");
		break;
		
		case 2:
		printf("\n enter the number ",a,b);
		scanf("%d%d",&a,&b);
		
		if(a==b)
		printf("\n the number is equal");
		else
		printf("\n the number is not equal");
		break;
		
		default:
		
		printf("\n cases are successfully implimented");
	}
    
}
