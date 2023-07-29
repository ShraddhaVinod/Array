#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	int arr[n];
	int s=0;
	for (int i=0;i<n;i++)
	{
		printf("Enter element no. %d: ",i+1);
		scanf("%d",&arr[i]);
		s=s+arr[i];
	}
	printf("Sum=%d\n",s);
	printf("Average=%d\n",s/n);
	return 0;
}
