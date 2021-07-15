#include<stdio.h>
int main()
{
	float a,b,c;
	printf("\n enter three number");
	scanf("%f%f%f",&a,&b,&c);
	
	if(a>b && a>c)
	printf("\n is the largest number a=%f",a);
	
	if(b>a && b>c)
	printf("\n is the largest number b=%f",b);
	
	if(c>a && c>b)
	printf("\n is the largest number c=%f",c);
	
	return 0;
	
	
}
