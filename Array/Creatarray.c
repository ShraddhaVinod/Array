/*
#include<stdio.h>
int main()
{
	int n;
	printf("Enter the value of n; ");
	scanf("%d",&n);
	int array[n];
	for (int i=0;i<n;i++)
	{
		printf("Enter element number %d: ",i+1);
		scanf("%d",&array[i]);
	}
	for (int j=0;j<n;j++)
	{
		printf("%d ",array[j]);
	}
	printf("\n");
	
	return 0;
}
*/
/*
#include<stdio.h>
int main()
{
	int n;
	printf("Enter the value of n; ");
	scanf("%d",&n);
	int array[n];
	for (int i=0;i<n;i++)
	{
		printf("Enter element number %d: ",i+1);
		scanf("%d",&array[i]);
	}
	
	for (int j=0;j<n;j++)
	{
		if (array[j]%2==0)
		{
		printf("%d ",array[j]);
		}
	}
	
	return 0;
}
*/
/*
#include<stdio.h>
int main()
{
	char names[10][10];
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	for (int i=0;i<n;i++)
	{
		printf("Enter name no %d: ",i+1);
		scanf("%s",names[i]);
	}
	for (int i=0;i<n;i++)
	{
		printf("%s ",names[i]);
	}
	return 0;
}
*/
// Duplicate element
/*
#include<stdio.h>
int main()
{
	int n;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	int arr[n];
	for (int i=0;i<n;i++)
	{
		printf("Enter element no %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	int i=0;
	while (i<n)
	{
		int j=i+1;
		int c=1;
		while (j<n)
		{
		if (arr[i]==0)
		{
			i++;
		}
		else if (arr[i]==arr[j])
		{
		c++;
		arr[j]=0;
		}
		j++;   
		}
		if (c>1)
		{
			printf("%d ",arr[i]);
		}
		i++;
	}
}
*/
