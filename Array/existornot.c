#include<stdio.h>
int main()
{
	int arr[7]={1,2,3,4,5,6,7};
	int p;
	printf("Enter a number: ");
	scanf("%d",&p);
	int c=0;
	for (int i=0;i<7;i++)
	{
		if (arr[i]==p)
		{
			c=c+1;
		}
	}
	if (c>0)
	{
		printf("Exist in the list\n");
	}
	else
	{
		printf("Not exist in the list\n");
	}
	return 0;
}
