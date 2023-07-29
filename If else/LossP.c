#include <stdio.h>
int main()
{
	int CP,SP,loss,Per;
	printf("Enter cost price: ");
	scanf("%d",&CP);
	printf("Enter selling price: ");
	scanf("%d",&SP);
	loss=CP-SP;
	Per=(loss*100)/CP;
	printf("Loss percentage=%d\n",Per);
	return 0;
	}
	
	
