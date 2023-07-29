/*Maximum element
#include<stdio.h>
int main()
{
	int arr[6]={1,4,8,3,2,10};
	int max=arr[0];
	for (int i=0;i<6;i++)
	{
		if (max<arr[i])
		{
			max=arr[i];
		}
	}
	printf("maximum element: %d\n",max);
	return 0;
}
*/
/*
#include<stdio.h>
int main()
{
	int n;
	printf("Enter element no.: ");
	scanf("%d",&n);
	int arr[n];
	for (int i=0;i<n;i++)
	{
		printf("Enter element no %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	int max=arr[0];
	for (int i=0;i<n;i++)
	{
		if (max<arr[i])
		{
			max=arr[i];
		}
	}
	printf("maximum element: %d\n",max);
	return 0;
}
*/
//Minimum element
/*
#include<stdio.h>
int main()
{
	int n;
	printf("Enter element no.: ");
	scanf("%d",&n);
	int arr[n];
	for (int i=0;i<n;i++)
	{
		printf("Enter element no %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	int min=arr[0];
	for (int i=0;i<n;i++)
	{
		if (min>arr[i])
		{
			min=arr[i];
		}
	}
	printf("maximum element: %d\n",min);
	return 0;
}
*/



