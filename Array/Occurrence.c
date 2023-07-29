/*
#include<stdio.h>
int main()
{
	int n;
	printf("Enter n: ");
	scanf("%d",&n);
	int arr[n];
	for (int i=0;i<n;i++)
	{
		printf("Enter element no%d: ",i+1);
		scanf("%d",&arr[i]);
	}
	int k;
	printf("Enter a number: ");
	scanf("%d",&k);
	int c=0;
	for (int j=0;j<n;j++)
	{
		if (arr[j]==k)
		{
		c=c+1;
		}
	}
	printf("%d",c);
	return 0;
}
*/
#include<stdio.h>
int main()
{
	int n;
	printf("Enter n: ");
	scanf("%d",&n);
	int arr[n];
	for (int i=0;i<n;i++)
	{
		printf("Enter element no%d: ",i+1);
		scanf("%d",&arr[i]);
	}
	for (int i=0;i<n;i++)
	{
		int c=0;
		for (int j=0;j<n;j++)
		{
			if (arr[j]==i)
			{
				c=c+1;
			}
		}
		printf("%d = %d",i,c);
		printf("\n");
	}
	return 0;
}
