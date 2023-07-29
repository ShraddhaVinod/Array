/*
#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	int arr[n];
	int a=1;
	int i=0;
	while (i<n)
	{
		if(a%2==0)
		{
			arr[i]=a;
			i++;
			a++;
		}
		else
		{
			a++;
		}
	}
	int j=0;
	while (j<n)
	{
		printf("%d",arr[j]);
		j++;
		printf("\n");
	}
	return 0;
}
*/

#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	int arr[n];
	int a=1;
	int i=0;
	while (i<n)
	{
		if(a%2!=0)
		{
			arr[i]=a;
			i++;
			a++;
		}
		else
		{
			a++;
		}
	}
	int j=0;
	while (j<n)
	{
		printf("%d ",arr[j]);
		j++;
	}
	return 0;
}


