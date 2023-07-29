#include <stdio.h>
int main()
{
	int salary,year,bonus;
	printf("Enter salary: ");
	scanf("%d",&salary);
	printf("Enter year: ");
	scanf("%d",&year);
	bonus=salary*5/100;
	if (year>5)
	{
	printf("Net Bonus=%d\n",bonus);
	}
	else
	{
	printf("Not eligible for bonus\n");
	}
	return 0;
	}
	
