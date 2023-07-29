// Print armstrong number upto n.

#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
	{
		int p=i,a;
		int d=0;
		int arm=0;
		while (p>0)
		{
			a=p%10;
			d++;
			p=p/10;
		}
		 p=i;
		 int k;
		 while (p>0)
		{
			k=p%10;
			arm+=pow(k,d);
			p=p/10;
		}
		 if (i==arm)
		{
			printf("%d ",i);
		}
	}
	return 0;
}
