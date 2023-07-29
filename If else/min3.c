#include <stdio.h>
int main()
{
	int a,b,c,M,Min;
	printf("Enter the value of a,b,c: ");
	scanf("%d%d%d",&a,&b,&c);
	if (a<b){
		M=a;
	}
	else{
		M=b;
	}
	if (M<c){
		Min=M;
	}
	else{
		Min=c;
	}
	printf("Min=%d\n",Min);
	return 0;
}
