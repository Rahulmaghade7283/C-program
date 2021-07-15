#include<stdio.h>
int main()
{
	int km,m,cm,mm;
	printf("\n enter the distance");
	scanf("%d",&km);
	
	m=km*1000;
	cm=m*100;
	mm=cm*10;
	
	printf("\n distance in meter is %d",m);
	printf("\n distance in centimeter is %d",cm);
	printf("\n distance in milimeter is %d",mm);
	
	return 0;
	
}
