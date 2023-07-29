#include <stdio.h>
int main()
{
	int age,m,f,day,Wage;
	printf("Enter Age: ");
	scanf("%d",&age);
	char gender;
	printf("Enter Gender: ");
	scanf(" %c",&gender);
	printf("Enter day: ");
	scanf("%d",&day);
	if (age>=18 && age<30)
	{
	  if (gender=='m')
	  {
	  	Wage=day*700;
	  	printf("Wage=%d\n",Wage);
	  }
	  else
	  {
	  	Wage=day*750;
	  	printf("Wage=%d\n",Wage);
	  }
	}
      else if (age>=30 && age<=40)
      {
        if (gender=='m')
        {	
        	Wage=day*800;
        	printf("Wage=%d\n",Wage);
        }
        else 
        {
        	Wage=day*850;
        	printf("Wage=%d\n",Wage);
        }
      }
      else 
      {	
      	      printf("Enter appropriate age\n");
      }
      return 0;
}

      
        
      
