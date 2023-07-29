#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	int arr[n];
	int sum=0;
	for (int i=0;i<n;i++)
	{
		printf("Enter element no. %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	for (int j=0;j<n;j++)
	{
		sum=sum+arr[j];
	}
	printf("Mean of array is %d: ",sum/n);
	return 0;
}
