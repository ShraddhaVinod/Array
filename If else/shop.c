#include <stdio.h>
int main()
{
	int quantity,unitcost=100;
	float totalcost,discount,Total;
	printf("Enter Quantity: ");
	scanf("%d",&quantity);
	totalcost=quantity*unitcost;
	discount=totalcost*10/100;
	Total=totalcost-discount;
	if (totalcost>1000)
	{
	printf("Total Cost=%f\n",Total);
	}
	else
	{
	printf("Total Cost=%f\n",totalcost);
	}
	return 0;
	}
	
	
