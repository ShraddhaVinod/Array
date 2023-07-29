#include <stdio.h>
int main()
{
	int course,written,total;
	printf("Enter Coursework Marks: ");
	scanf("%d",&course);
	printf("Enter Written exam Marks: ");
        scanf("%d",&written);
        total=course+written;
        if (course>20 && written<20)
        {
        	printf("Technical Fail\n");
        }
        else if (course<20 && written>20)
        {
        	printf("Technical Fail\n");
        }
        else if (total>=45)
        {
        	printf("Pass\n");
        }
        else if (total>=44)
        {
        	printf("Pass\n");
        }
        else
        {
        	printf("Fail\n");
        }
        
	return 0;
}
	
