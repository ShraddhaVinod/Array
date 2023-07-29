#include<stdio.h>
int main()
{
	int Y,D,M;
	printf("Enter Year: ");
	scanf("%d",&Y);
	printf("Enter Month: ");
	scanf("%d",&M);
	printf("Enter Date: ");
	scanf("%d",&D);
	if (Y>0 && 0>M<=12 && 0>D<=31)
	{
		printf("Valid Year\n");
	}
	else
	{
		printf("Invalid Year\n");
	}
	return 0;
}
