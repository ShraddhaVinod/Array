#include <stdio.h>
int main()
{
	int salary,Bonus;
	printf("Enter Salary: ");
	scanf("%d",&salary);
	if (salary>3000)
	{
		Bonus=300;	
	}
	else if (salary>1600 && salary<=3000)
	{
		Bonus=salary*10/100;
	
	   if (Bonus>240)
	   {
	   	Bonus=240;
	   }
	}
       else 
       {
       	   Bonus=salary*15/100;
       
           if (Bonus<100)
           {
          	Bonus=100;
           }
       }
   
           printf("Bonus=%d\n",Bonus);
           return 0;
}
          
          
