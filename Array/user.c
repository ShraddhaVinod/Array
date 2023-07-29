/*
"Given an array ([10,12,34,11,4,5,1]). Print the last ‘i’ elements of any given array. ‘i’ accepted from the user.
if i = 3 then your program should print last i elements they are (4,5,1)
if i = 5 then your program should print last i elements they are (34,11,4,5,1)"
*/

#include<stdio.h>
int main()
{
	int arr[7]={10,12,34,11,4,5,1};
	int i;
	printf("Enter the value of i: ");
	scanf("%d",&i);
	if (i>7)
	{
		printf("Invalid value of 'i'");
	}
	else
	{
		for (int j=7-i;j<7;j++)
		{
			printf("%d, ",arr[j]);
		}
		printf("\n");
	}
	return 0;
}
	
	

 
