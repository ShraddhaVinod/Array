/*
#include<stdio.h>
int main()
{
	int num;
	printf("Enter the number: ");
	scanf("%d",&num);
	while (num>0)
	{
		if (num>=1000)
		{
			printf("M");
			num-=1000;
		}
		else if (num>=900)
		{
			printf("CM");
			num-=900;
		}
		else if (num>=500)
		{
			printf("D");
			num-=500;
		}
		else if (num>=400)
		{
			printf("CD");
			num-=400;
		}
		else if (num>=100)
		{
			printf("C");
			num-=100;
		}
		else if (num>=90)
		{
			printf("XC");
			num-=90;	
		}
		else if (num>=50)
		{
			printf("L");
			num-=50;
		}
		else if (num>=40)
		{
			printf("XL");
			num-=40;
		}
		else if (num>=10)
		{
			printf("X");
			num-=10;
		}
		else if (num>=9)
		{
			printf("IX");
			num-=9;
		}
		else if (num>=5)
		{
			printf("V");
			num-=5;
		}
		else if (num>=4)
		{
			printf("IV");
			num-=4;
		}
		else
		{
			printf("I");
			num-=1;
		}
	}
	return 0;
}
*/
// Decimal to roman
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
		printf("Enter Decimal no. %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	for (int j=0;j<n;j++)
	{
		while (arr[j]>0)
		{
		if (arr[j]>=1000)
		{
			printf("M");
			arr[j]-=1000;
		}
		else if (arr[j]>=900)
		{
			printf("CM");
			arr[j]-=900;
		}
		else if (arr[j]>=500)
		{
			printf("D");
			arr[j]-=500;
		}
		else if (arr[j]>=400)
		{
			printf("CD");
			arr[j]-=400;
		}
		else if (arr[j]>=100)
		{
			printf("C");
			arr[j]-=100;
		}
		else if (arr[j]>=90)
		{
			printf("XC");
			arr[j]-=90;	
		}
		else if (arr[j]>=50)
		{
			printf("L");
			arr[j]-=50;
		}
		else if (arr[j]>=40)
		{
			printf("XL");
			arr[j]-=40;
		}
		else if (arr[j]>=10)
		{
			printf("X");
			arr[j]-=10;
		}
		else if (arr[j]>=9)
		{
			printf("IX");
			arr[j]-=9;
		}
		else if (arr[j]>=5)
		{
			printf("V");
			arr[j]-=5;
		}
		else if (arr[j]>=4)
		{
			printf("IV");
			arr[j]-=4;
		}
		else
		{
			printf("I");
			arr[j]-=1;
		}
	}
	printf("\n");
	}
	return 0;
}	
*/
// Roman to Decimal
#include<stdio.h>
int main()
{
	int arr[7]={'I','V','X','L','C','D','M'};
	for (int i=0;i<7;i++)
	{
		if (arr[i]=='I')
		{
			printf("1");
		}
		else if (arr[i]=='V')
		{
			printf("5");
		}
		else if (arr[i]=='X')
		{
			printf("10");
		}
		else if (arr[i]=='L')
		{
			printf("50");
		}
		else if (arr[i]=='C')
		{
			printf("100");
		}
		else if (arr[i]=='D')
		{
			printf("500");
		}
		else 
		{
			printf("1000");
		}
	printf("\n");
	}
	return 0;
}
