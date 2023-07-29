#include<stdio.h>
int main()
{
	int n,temp;
	printf("Enter a number: ");
	scanf("%d",&n);
	int arr[n];
	for (int i=0;i<n;i++)
	{
		printf("Enter element no%d: ",i+1);
		scanf("%d",&arr[i]);
	}
	for (int i=1;i<n;i++)
	{
		temp=arr[i];
		int j=i-1;
		while (j>=0 && arr[j]>temp)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=temp;
	}
	for (int j=0;j<n;j++)
	{
		printf("%d ",arr[j]);
	}
	return 0;
}
