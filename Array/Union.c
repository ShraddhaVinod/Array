// Union in two sorted array

#include<stdio.h>
int main()
{
	int m,n;
	printf("Enter the size of 1st array: ");
	scanf("%d",&m);
	int arr[m];
	printf("Enter 1st array element\n");
	for (int i=0;i<m;i++)
	{
		printf("Enter element no %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	printf("Enter the size of 2nd array: ");
	scanf("%d",&n);
	int brr[n];
	printf("Enter 2nd array element\n");
	for (int j=0;j<n;j++)
	{
		printf("Enter element no %d: ",j+1);
		scanf("%d",&brr[j]);
	}
	int i=0;
	int j=0;
	while (i<m && j<n)

		{
			if (arr[i]<brr[j])
			{
				printf("%d ",arr[i]);
				i++;
			}
			else if (arr[i]>brr[j])
			{
				printf("%d ",brr[j]);
				j++;
			}
			else
			{
			printf("%d ",arr[i]);
				j++;
				i++;	
			}
		}
	while (i<m)
	{
		printf("%d ",arr[i]);
		i++;
	}
	while (j<n)
	{
		printf("%d ",brr[j]);
		j++;
	}
	
	return 0;
}




  
