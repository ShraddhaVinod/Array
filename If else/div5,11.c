#include <stdio.h>
int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	if (n%5==0)
	{
		if (n%11==0)
		{
			printf("Both\n");
		}
		else
		{
			printf("Divisible by 5\n");
		}
	}
	else if (n%11==0)
	{
		printf("Divisible by 11\n");
	}
	else
	{
		printf("None\n");
	}
	return 0;
}
