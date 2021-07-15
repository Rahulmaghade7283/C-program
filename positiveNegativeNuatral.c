#include<stdio.h>
int main()
{
int num;
	printf("\n enter the number");
	scanf("%d",&num);
	
	if(num>0) 
	{
	printf("\n this is positive number %d",num);
    }
    
	if(num<0)
	{
	printf("\n this is negative number %d",num);
    }
	
	if(num==0)
	{
	printf("\n this is neutral number %d",num);
	}

	return 0;
}
