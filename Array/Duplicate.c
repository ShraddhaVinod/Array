
#include<stdio.h>
int main()
{
	int n;
	printf("Enter n: ");
	scanf("%d",&n);
	int arr[n];
	for (int i=0;i<n;i++)
	{
		printf("Enter element no%d: ",i+1);
		scanf("%d",&arr[i]);
	}
	int i=0;
	while (i<n)
	{
		int c=0;
		int j=0;
		while (j<n)
		{
			if (arr[i]==arr[j])
			{
				c=c+1;
			}
			j++;
		}
		if (c>1)
		{
		printf("%d ",arr[i]);
		}
		i++;
	}
	return 0;
}

/*
#include <stdio.h>

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int arr[n];
    
    // Input loop
    for (int i = 0; i < n; i++)
    {
        printf("Enter element no %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int i = 0;
    while (i < n)
    {
        int count = 0; // Variable to count occurrences of arr[i]
        int j = 0;
        while (j < n)
        {
            if (arr[i] == arr[j])
            {
                count = count + 1;
            }
            j++;
        }
        if (count > 1)
        {
            printf("%d ", arr[i]); // Print the duplicate element
        }
        i++;
    }

    return 0;
}
*/
