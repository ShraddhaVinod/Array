/*
Given an array ([10,12,34,11,4,5,1]). Print the last ‘i’ elements of any given array. ‘i’ accepted from the user.
if i = 3 then your program should print last i elements they are (4,5,1)
if i = 5 then your program should print last i elements they are (34,11,4,5,1)*/
#include<stdio.h>
int main()
{
	int arr[7]={10,12,34,11,4,5,1};
	int k;
	printf("Enter k: ");
	scanf("%d",&k);
	for (int j=7-k;j<7;j++)
	{
		printf("%d ",arr[j]);
	}
	return 0;
}
