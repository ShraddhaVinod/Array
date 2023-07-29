#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	int arr[n];
	for (int i=0;i<n;i++)
	{
		printf("Enter element no %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	int count=0;
	for (int i=0;i<n-1;i++)
	{
		if (arr[i+1]-arr[i]==1)
		{
			count++;
		}
	}
	if (count==n-1)
	{
		printf("Given array element is consecutive\n");
	}
	else
	{
		printf("Given array element is not consecutive\n");
	}
	return 0;
}
