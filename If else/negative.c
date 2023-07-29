#include <stdio.h>
int main()
{
	int no;
	printf("Enter the Number: ");
	scanf("%d",&no);
	if (no>0)
	{
	printf("Positive Number\n");
	}
	else if (no<0)
	{
	printf("Negative Number\n");
	}
	else
	{
	printf("Zero\n");
	}
	return 0;
	}
