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
		printf("%d=%d",arr[i],c);
		printf("\n");  
		i++;
	}
	return 0;
}

