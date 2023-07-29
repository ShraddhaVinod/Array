#include <stdio.h>
int main()
{
	int stu1,stu2,H,M,E,C,S,H1,M1,E1,C1,S1;
	printf("Enter Student1 marks in subject: ");
	scanf("%d%d%d%d%d",&H,&M,&E,&C,&S);
	printf("Enter Student2 marks in subject: ");
	scanf("%d%d%d%d%d",&H1,&M1,&E1,&C1,&S1);
	stu1=H+M+E+C+S;
	stu2=H1+M1+E1+C1+S1;
	if (stu1>stu2)
	{
	printf("Student1 is topper\n");
	}
	else
	{
	printf("Student2 is topper\n");
	}
	return 0;
	}
