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
	for (int i=0;i<n-1;i++)
	{
		int min=i;
		for (int j=i+1;j<n;j++)
		{
			if (arr[j]<arr[min])
			{
				min=j;
			}
		}
		if (min!=i)
		{
			temp=arr[i];
			arr[i]=arr[min];
			arr[min]=temp;
		}
	}
	for (int k=0;k<n;k++)
	{
		printf("%d ",arr[k]);
	}
	return 0;
}
	
