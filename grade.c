#include<stdio.h>
int main()
{
	int m1,m2,m3,m4,m5,per;
	printf("\n enter marks of five subject");
	scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
	
	per=(m1+m2+m3+m4+m5)/5;
	
	if(per>=75)
	printf("\n Distinction");
	
	else if(per<75 && per>=65)
	printf("\n A grade");
	
	else if(per<65 && per>=50)
	printf("\n B grade");
	
	else if(per<55 && per>=35)
	printf("\n C grade");
	
	else
	printf("\n unsuccessful");
	return 0;
}
