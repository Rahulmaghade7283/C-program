#include<stdio.h>
int main()
{
	int n,f;
	printf("\n enter any number");
	scanf("%d",&n);
	
	 f=fact(n);
	 
	 printf("\n factorial of %d=%d",n,f);
	 int fact(int n);
	 {
	 	int f;
	 	if(n>0)
	 	f=n*fact(n-1);
	 	else 
	 	return 0;
	 	return f;
	 }
}
