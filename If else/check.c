#include <stdio.h>
int main()
{
	int side1,side2;
	printf("Enter side1: ");
	scanf("%d",&side1);
	printf("Enter side2: ");
	scanf("%d",&side2);
	if (side1==side2)
	{
	printf("It is square\n");
	}
	else
	{
	printf("It is rectangle");
	}
	return 0;
	}
