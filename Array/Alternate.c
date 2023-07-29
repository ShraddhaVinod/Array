/*
#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	int arr[n];
	for (int i=0;i<n;i++)
	{
		printf("Enter element no. %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	int j=n-1;
	while (j>=0)
	{
		printf("%d ",arr[j]);
		j-=2;
	}
	printf("\n");
	return 0;
}
*/
#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	int arr[n];
	for (int i=0;i<n;i++)
	{
		printf("Enter element no. %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	int i=0;
	while (i<n)
	{
		printf("%d ",arr[i]);
		i+=2;
	}
	printf("\n");
	return 0;
}
