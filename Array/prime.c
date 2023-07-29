// print prime number upto n.
#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	int arr[100];
	int c=0;
	int k=0;
	for (int i=2;i<=n;i++)
	{
		for (int j=1;j<=sqrt(i);j++)
		{
			if (i%j==0)
			{
				c=c+1;
			}
		}
		if (c==1)
		{
			arr[k]=i;
			k++;
		}
		c=0;
	}
	for (int s=0;s<k;s++)
	{
		printf("%d ",arr[s]);
	}
	return 0;
}

/*
#include <stdio.h>
#include <stdbool.h>

bool is_prime(int num) {
    if (num <= 1) return false;

    // Check for divisors from 2 to sqrt(num)
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

void print_primes_up_to_n(int n) {
    printf("Prime numbers up to %d:\n", n);
    for (int i = 2; i <= n; i++) {
        if (is_prime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    print_primes_up_to_n(n);
    return 0;
}
*/
