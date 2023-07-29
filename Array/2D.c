/*
#include<stdio.h>
int main()
{
	int a[2][3]={{4,8,7},{5,9,6}};
	for (int i=0;i<2;i++)
	{
		for (int j=0;j<3;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
*/
#include<stdio.h>
int main()
{
	int m,n;
	printf("Enter a number of rows: ");
	scanf("%d",&m);
	printf("Enter a number of columns: ");
	scanf("%d",&n);
	int arr[m][n];
	for (int i=0;i<m;i++)
	{
		for (int j=0;j<n;j++)
		{
			printf("Enter element: ");
			scanf("%d",&arr[i][j]);
		}
	}
	for (int i=0;i<m;i++)
	{
		for (int j=0;j<n;j++)
		{
			printf("%d ",arr[i][j]);

		}
		printf("\n");
	}
	return 0;
}
