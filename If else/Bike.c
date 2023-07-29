#include <stdio.h>
int main()
{
	int price,Tax;
	printf("Enter Bike Price: ");
	scanf("%d",&price);
	if (price>100000)
	{
		Tax=price*15/100;
	}
	else if (price>50000&&price<=100000)
	{
		Tax=price*10/100;
	}
	else 
	{
		Tax=price*5/100;
		
	}
	printf("Tax=%d\n",Tax);
	
	return 0;
}
