#include <stdio.h>
int main()
{
	int RH,TH;
	float COC;
	printf("Enter Rockwell Hardness: ");
	scanf("%d",&RH);
	printf("Enter Carbon content: ");
	scanf("%f",&COC);
	printf("Enter Tensil strength: ");
	scanf("%d",&TH);
	if (RH>50 && COC>0.7 && TH>5600)
	{
		printf("Grade 10\n");
	}
	else if (RH>50 && COC>0.7)
	{
		printf("Grade 9\n");
	}
	else if (COC>0.7 && TH>5600)
	{
		printf("Grade 8\n");
	}
	
	else if (RH>50 && TH>5600)
	{
		printf("Grade 7\n");
	}
	else 
	{
		printf("Grade 0\n");
	}
	return 0;
}

