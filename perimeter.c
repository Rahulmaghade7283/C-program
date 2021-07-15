#include<stdio.h>
int main()
{
	int l,w,ps,pr;
	printf("\n enter the value of square and rectangle");
	scanf("%d%d",&l,&w);
	
	ps=4*l;
	pr=2*(l+w);
	
	 printf("\n perimeter of square %d",ps);
	 printf("\n perimeter of rectangle %d",pr);
	 
	 return 0;
	
}
