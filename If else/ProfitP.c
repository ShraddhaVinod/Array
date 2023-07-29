#include <stdio.h>
int main()
{
	int SP,CP,profit,per;
	printf("Enter Selling Price: ");
	scanf("%d",&SP);
	printf("Enter Cost Price: ");
	scanf("%d",&CP);
	profit=SP-CP;
	per=profit*100/CP;
	if(SP>CP)
	{
	printf("Profit percentage=%d\n",per);
	}
	else
	{
	printf("Invalid\n");
	}
	return 0;
	}
