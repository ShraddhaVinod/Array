#include<stdio.h>
int main()
{
	int arr[6]={1,2,3,4,5,6};
	int brr[6]={7,8,9,10,11,12};
	int crr[12];
	for (int i=0;i<6;i++)
	{
		crr[i]=arr[i];
	}
	int i=6;
	for (int j=0;j<6;j++)
	{
		crr[i]=brr[j];
		i++;
	}
	
	for (int k=0;k<12;k++)
	{
		printf("%d ",crr[k]);
	}
	return 0;
}
