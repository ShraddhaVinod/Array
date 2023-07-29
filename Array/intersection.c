
// Enter array element in assending order.
#include<stdio.h>
int main()
{
	int m;
	printf("Enter size of 1st array: ");
	scanf("%d",&m);
	int arr[m];
	for (int i=0;i<m;i++)
	{
		printf("Enter element no. %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	int n;
	printf("Enter size of 2nd array: ");
	scanf("%d",&n);
	int brr[n];
	for (int j=0;j<n;j++)
	{
		printf("Enter element no. %d: ",j+1);
		scanf("%d",&brr[j]);
	}
	int i=0,j=0;
	while (i<m && j<n)
	{
		if (arr[i]<brr[j])
		{
			i++;
		}
		else if (arr[i]>brr[j])
		{
			j++;
		}
		else
		{
			printf("%d ",arr[i]);
			i++;
			j++;
		}
	}
	return 0;
}
	
