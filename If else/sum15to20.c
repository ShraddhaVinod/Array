#include <stdio.h>
int main()
{
	int no1,no2,sum;
	printf("Enter Number 1: ");
	scanf("%d",&no1);
	printf("Enter Number 2: ");
	scanf("%d",&no2);
	sum=no1+no2;
	if (sum>=15&&sum<=20)
	{
	printf("20\n");
	}
	else
	{
	printf("%d\n",sum);
	}
	return 0;
	}
