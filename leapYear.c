#include<stdio.h>
int main()
{
	int year;
	printf("\n enter the year");
	scanf("%d",&year);
	
	if(year%4==0)
	{
	printf("\n this is leap year %d",year);
}
	
	if(year%4!=0)
	{
	printf("\n this is not leap year %d",year);
}
	return 0;
}
