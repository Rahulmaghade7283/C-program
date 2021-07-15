#include<stdio.h>
int main()
{
	int cp,sp;
	printf("\n enter the cp and sp values");
	scanf("%d%d",&cp,&sp);
	
	if(cp<sp)
	printf("\n profit");
	
	if(cp>sp)
	printf("\n Loss");
	
	if(cp==sp)
	printf("\n Equal");
	
	return 0;
}
