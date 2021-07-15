#include<stdio.h>
int main()
{
	char sex,ms;
	int age;
	
	printf("\n Enter age,sex,marriage status");
	scanf("%d%c%c",&age,&sex,&ms);
	
	if(ms=='M')
	printf("\n Driver is insured");
	else
	{
		if(sex=='M')
		{
			if(age>30)
			printf("\n Driver is insured");
			else
			printf("\n driver is not insured");
		}
		else{
			if(age>25)
			printf("\n Driver is insured");
			else
			printf("\n Driver is not insured");
		}
	}
}
