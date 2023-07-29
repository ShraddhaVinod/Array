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
	int pos,num;
	printf("Enter position: ");
	scanf("%d",&pos);
	printf("Enter element: ");
	scanf("%d",&num);
	for (int i=n-1;i>=pos;i--)
	{
		arr[i+1]=arr[i];
	}
	arr[pos]=num;
	for (int i=0;i<n+1;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
