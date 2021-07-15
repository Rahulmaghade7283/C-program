#include<stdio.h>
void fun();
int main()
{
	int* p;
	int a=10;
	p=&a;
	printf("\n a=%d",a);
	printf("\n a=%d",*&a);
	printf("\n a=%0x",&a);
	printf("\n *p=%d",*p);
	
	return 0;
} 
