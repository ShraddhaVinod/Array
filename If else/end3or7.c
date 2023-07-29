#include <stdio.h>
int main()
{
	int no,l;
	printf("Enter the number: ");
	scanf("%d",&no);
	l=no%10;
	if (l%3==0)
	{
	printf("End with 3\n");
	}
	else if (l%7==0)
	{
	printf("End with 7\n");
	}
	else
	{
	printf("last digit=%d\n",l);
	}
	return 0;
	}
