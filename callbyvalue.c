#include<stdio.h>
void swap (int,int);
int main()
{
	int a=10,b=20;
	printf("\n before swap a=%d b=%d",a,b);
	swap(a,b);
	
	printf("\n after swap a=%d b=%d",a,b);
}
void swap(int a,int b)
{
	int t;
	t=a;
	b=a;
	b=t;
}

