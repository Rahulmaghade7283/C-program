#include<stdio.h>
int main()
{
	int a[5]={11,22,33,44,55},i;
	 for(i=0;i<5;i++)
	 printf(" %d ",a[i]);
	 printf("\n enter any 10 value \n");
	 
	 for(i=0;i<5;i++)
	 scanf(" %d",&a[i]);
	 
	 for(i=0;i<5;i++)
	 printf(" %d",a[i]);
	 
	 return 0;

}
