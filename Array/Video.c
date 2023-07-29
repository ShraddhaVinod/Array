// Take marks from user of students, if the mark of any student is less than 35 print its roll number.[roll number here refers to the index of the array].
/*
#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	int arr[n];
	int i=0;
	while (i<n)
	{
		printf("Enter marks of roll no. %d: ",i);
		scanf("%d",&arr[i]);
		i++;
	}
	int j=0;
	while (j<n)
	{
		if (arr[j]<35)
		{
			printf("%d ",j);
		}
		j++;
	}
}
*/
// If marks is given
/*
#include<stdio.h>
int main()
{
	int arr[6]={23,54,45,30,89,77};
	for (int i=0;i<6;i++)
	{
		if (arr[i]<35)
		{
			printf("%d ",i);
		}
	}
	return 0;
}
*/
//

// Address of array element
/*
#include<stdio.h>
int main()
{
	int arr[5]={1,3,2,1,5,};
	printf("%p\n",&arr[0]);
	printf("%p\n",&arr[1]);
	printf("%p\n",&arr[2]);
	printf("%p\n",&arr[3]);
	printf("%p\n",&arr[4]);
	return 0;
}
*/
// Count the number of triplets whoes sum is equal to the given value of x.
/*
#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	int arr[n];
	for (int i=0;i<n;i++)
	{
		printf("Enter element no %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	int Triplets=0;
	for (int i=0;i<n;i++)
	{
		for (int j=i+1;j<n;j++)
		{
			for (int k=j+1;k<n;k++)
			{
				if (arr[i]+arr[j]+arr[k]==n)
				{
					Triplets++;
					printf("(%d, %d, %d)\n",arr[i],arr[j],arr[k]);
				}
			}
		}
	}
	printf("Total Triplets=%d",Triplets);
	return 0;
}
*/
/*
#include<stdio.h>
int main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int Triplets=0;
	for (int i=0;i<10;i++)
	{
		for (int j=i+1;j<10;j++)
		{
			for (int k=j+1;k<10;k++)
			{
				if (arr[i]+arr[j]+arr[k]==10)
				{
					Triplets++;
					printf("(%d, %d, %d)\n",arr[i],arr[j],arr[k]);
				}
			}
		}
	}
	printf("Total Triplets=%d",Triplets);
	return 0;
}
*/
/*
#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	int arr[n];
	for (int i=0;i<n;i++)
	{
		printf("Enter element no %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	int max=arr[0];
	int sm=0;
	for (int i=1;i<=n;i++)
	{
		if (max<arr[i])
		{
			sm=max;
			max=arr[i];
		}
		else if (sm<arr[i] && max!=arr[i])
		{
			sm=arr[i];
		}
	}
	printf("Max=%d\n",max);
	printf("Second max=%d\n",sm);
	return 0;
}
*/
/*
#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	int arr[n];
	for (int i=0;i<n;i++)
	{
		printf("Enter element no %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	int max=arr[0];
	int sm=0;
	int Tm=0;
	for (int i=1;i<=n;i++)
	{
		if (max<arr[i])
		{
			Tm=sm;
			sm=max;
			max=arr[i];
		}
		else if (sm<arr[i])
		{
			Tm=sm;
			sm=arr[i];
		}
		else
		{
			Tm=arr[i];
		}
	}
	printf("Third max=%d\n",Tm);
	printf("Max=%d\n",max);
	printf("Second max=%d\n",sm);
	return 0;
}
*/
// Write a program to copy the contents of one array into another array in reverse order.
/*
#include<stdio.h>
int main()
{
	int arr[8]={1,2,3,4,5,6,7,8};
	int brr[8];
	for (int i=0;i<8;i++)
	{
		brr[i]=arr[8-i-1];
	}
	for (int i=0;i<8;i++)
	{
		printf("%d ",brr[i]);
	}
	return 0;
}
*/
// Write a program to reverse the array without using any extra array
/*
#include<stdio.h>
void reverse (int arr[7])
{
	int i=0;
	int j=6;
	while (i<j)
	{
		int temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
		i++;
		j--;
	}
	return;
}
int main()
{
	int arr[7]={1,2,3,4,5,6,7};
	reverse(arr);
	for (int i=0;i<7;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
*/

