/*
#include<stdio.h>
int main()
{
	int n,temp;
	printf("Enter a number: ");
	scanf("%d",&n);
	int arr[n];
	for (int i=0;i<n;i++)
	{
		printf("Enter element no%d:",i+1);
		scanf("%d",&arr[i]);
	}
	for (int i=0;i<n-1;i++)
	{
		int flage=0;
		for (int j=0;j<n-1-i;j++)
		{
			if (arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				flage=flage+1;
			}
		}
		if (flage==0)
		break;
	}
	for (int k=0;k<n;k++)
	{
		printf("%d, ",arr[k]);
	}
	return 0;
}
*/
/*
#include<stdio.h>
int main()
{
	int n,temp;
	printf("Enter a number: ");
	scanf("%d",&n);
	int arr[n];
	for (int i=0;i<n;i++)
	{
		printf("Enter element no%d:",i+1);
		scanf("%d",&arr[i]);
	}
	for (int i=0;i<n-1;i++)
	{
		int flage=0;
		for (int j=0;j<n-1-i;j++)
		{
			if (arr[j]<arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				flage=flage+1;
			}
		}
		if (flage==0)
		break;
	}
	for (int k=0;k<n;k++)
	{
		printf("%d, ",arr[k]);
	}
	return 0;
}
*/

#include<stdio.h>
int main()
{
	int n,temp;
	printf("Enter a number: ");
	scanf("%d",&n);
	int arr[n];
	for (int i=0;i<n;i++)
	{
		printf("Enter element no%d:",i+1);
		scanf("%d",&arr[i]);
	}
	for (int i=0;i<n-1;i++)
	{
		int j=0;
		while (j<n-1-i)
		{
			if (arr[j]<arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				j++;
			}
			else
			{
				j++;
			}
		}
	}
	for (int k=0;k<n;k++)
	{
		printf("%d, ",arr[k]);
	}
	return 0;
}


