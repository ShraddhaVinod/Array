#include <stdio.h>
int main()
{
	int a,b,c;
	printf("Enter three angles: ");
	scanf("%d%d%d",&a,&b,&c);
	if (a+b+c==180)
	{
	   if (a==b && b==c && c==a)
	   {
	   	printf("Equilatral triangle\n");
	   }
	   else if (a==90 || b==90 || c==90)
	   {
	   	printf("Right angle triangle\n");
	   }
	   else if (a>90 || b>90 || c>90)
	   {
	   	printf("Obtuse angle triangle\n");
	   }
	   else if (a<90 || b<90 || c<90)
	   {
	   	printf("Acute angle triangle\n");
	   }
	 }
	   else
	   {
	   	printf("Invalid triangle\n");
	   }
	
	return 0;
}
