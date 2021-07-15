#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,t;
	printf("\n enter the variable");
	scanf("%d%d",&a,&b);
	printf("\n enter the before swapping a is=%d",a);
	scanf("%d",&a);
	printf("\n enter the before swapping b is=%d",b);
	scanf("%d",&b);
	
	t=a;
	a=b;
	b=t;
	printf("\n enter the after swapping a is=%d",a);
	printf("\n enter the before swapping b is=%d",b);
	return 0;
	}
