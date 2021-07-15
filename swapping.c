#include<stdio.h>
int main()
{
	int a,b,t;
	
	printf("\n enter a two variable");
	scanf("%d%d",&a,&b);
	
	printf("\n enter the before swapping a is =%d",a);
	
		scanf("%d",&a);
	printf("\n enter the  before swapping  b is =%d",b);
	
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b; 
	 
	 printf("\n enter after swapping value a=%d",a);
	 	 printf("\n enter after the swapping value b=%d",b);
	 
	  return 0;
}
