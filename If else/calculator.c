#include <stdio.h>
int main()
{
	int no1,no2,result;
	char opt;
	printf("Enter first number: ");
	scanf("%d",&no1);
	printf("Enter second number: ");
	scanf("%d",&no2);
	printf("Enter operator (+,-,*,/): ");
	scanf(" %c",&opt);
	if (opt == '+')
	{
	result=no1+no2;
	}
	else if (opt == '-')
	{
	result=no1-no2;
	}
	else if (opt == '*')
	{
	result=no1*no2;
	}
	else if (opt == '/')
	{
	result=no1/no2;
	}
	else
	{
	printf("Invalid operator\n");
	}
	
	printf("Result: %d\n",result);
	
	return 0;
}
	
	
	
	
