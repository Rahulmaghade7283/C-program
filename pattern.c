#include<stdio.h>
//#include<iostream.h>
int main()
{
	int i,j,k;
	char ch=65;
	
	for(i=1;i<=26;i++,ch++)
	{
		for(j=1;j<=i;j++)
		{
			
			 printf("%c ",ch);
		
		}
		printf("\n");
	}
	return 0;
}
