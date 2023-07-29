#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	int arr[n];
	for (int i=0;i<n;i++)
	{
		printf("Enter element no%d: ",i+1);
		scanf("%d",&arr[i]);
	}
	int p=0,N=0;
	for (int i=0;i<n;i++)
	{
		if (arr[i]>0)
		{
			p=p+1;
		}
		else
		{
			N=N+1;
		}
	}
	printf("Positive:%d\n ",p);
	printf("Negative:%d\n ",N);
	return 0;
}
