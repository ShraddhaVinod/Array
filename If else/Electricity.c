#include <stdio.h>
int main()
{
	float Unit,Charge,Surcharge,Bill;
	printf("Enter electricity unit: ");
	scanf("%f",&Unit);
	if (Unit<=50)
	{
		Charge=Unit*0.50;
		Surcharge=(20*Charge)/100;
		Bill=Charge+Surcharge;
	}
	else if (Unit>50&&Unit<=150)
	{
		Charge=(50*0.50)+(Unit-50)*0.75;
		Surcharge=(20*Charge)/100;
		Bill=Charge+Surcharge;
	}
	else if (Unit>150&&Unit<=250)
	{
		Charge=(50*0.50)+(100*0.75)+(Unit-150)*1.20;
		Surcharge=(20*Charge)/100;
		Bill=Charge+Surcharge;
	}
	else
	{
		Charge=(50*0.50)+(100*0.75)+(100*1.20)+(Unit-250)*1.50;
	        Surcharge=(20*Charge)/100;
	        Bill=Charge+Surcharge;
	 }
	 printf("Total Bill=%f\n",Bill);
	 return 0;
}
