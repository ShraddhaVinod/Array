// if element count is odd=n+1/2
// if element count is even=(n/2)+(n/2+1)

#include<stdio.h>
int main()
{
	int n,temp;
	printf("Enter a number: ");
	scanf("%d",&n);
	int arr[n];
	int sum=0;
	float median=0.00;
	for (int i=0;i<n;i++)
	{
		printf("Enter element no%d: ",i+1);
		scanf("%d",&arr[i]);
	}
	for (int i=0;i<n-1;i++)
	{
		for (int j=0;j<n-i-1;j++)
		{
			if (arr[j]>arr[j+1])
			{
			temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
			}
		}
	}
	for (int k=0;k<n;k++)
	{
		sum=sum+arr[k];
		printf("%d ",arr[k]);
	}
	printf("\n");
	if (n%2==0)
	{
		median=(arr[n/2-1]+arr[n/2])/2.0;
	}
	else
	{
		median=arr[(n/2)];
	}
	printf("Mean of series is %d\n",sum/n);
	printf("Median of series is %0.2f",median);
	return 0;
}



