#include <stdio.h>
int main()
{
	int side1,side2,side3,side4;
	printf("Enter length of four side: ");
	scanf("%d%d%d%d",&side1,&side2,&side3,&side4);
	int angle;
	printf("Enter angle: ");
	scanf("%d",&angle);
	if (side1==side2 &&side2==side3 && side3==side4)
	{
		if (angle==90)
		{
			printf("Square\n");
		}
		else
		{
			printf("Rhombus\n");
		}
	}
	else if (side1==side3 && side2==side4)
	{
		if (angle==90)
		{
			printf("Rectangle\n");
		}
		else
		{
			printf("Parallelogram\n");
		}
	}
	else
	{
		printf("Irregular quadrilateral");
	}
	return 0;
}
		
			
