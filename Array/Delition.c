#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	int arr[n];
	for (int i=0;i<n;i++)
	{
		printf("Enter element no. %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	int pos;
	printf("Enter position: ");
	scanf("%d",&pos);
	for (int j=pos;j<n-1;j++)
	{
		arr[j]=arr[j+1];
	}
	for (int k=0;k<n-1;k++)
	{
		printf("%d ",arr[k]);
	}
	return 0;
}
