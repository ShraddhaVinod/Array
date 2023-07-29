
#include <stdio.h>
int main() 
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Enter element no %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    int k;
    printf("Enter k: ");
    scanf("%d", &k);

    // Perform the rotation
    k %= n; // To handle cases where k > n

    int temp;
    int start = 0;
    int end = n - k - 1;

    // Reverse the first 'k' elements
    while (start < end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    // Reverse the remaining elements
    start = n - k;
    end = n - 1;
    while (start < end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    // Reverse the whole array
    start = 0;
    end = n - 1;
    while (start < end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    // Print the rotated array
    for (int j = 0; j < n; j++) {
        printf("%d ", arr[j]);
    }

    return 0;
}

