#include <stdio.h>
int main()
{
	int a,b,c,M,Max;
	printf("Enter the value of a,b,c: ");
	scanf("%d%d%d",&a,&b,&c);
	if (a>b){
		M=a;
	}
	else{
		M=b;
	}
	if (M>c){
		Max=M;
	}
	else{
		Max=c;
	}
	printf("Max=%d\n",Max);
	return 0;
}
