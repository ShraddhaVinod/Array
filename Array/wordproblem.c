/*
In a certain hospital, the weights of newborn babies are recorded each month and then processed at the end of the month to determine the following:  1. mean weight of the babies 2. maximum of the weights 3. minimum the weights. Write a program to show how the weights can be stored as an array first and then processed to determine the desired outputs. Input n from the user where n is number of babies born in a particular month.*/
#include <stdio.h>

int main() {
    int n, i;
    
    printf("Enter the number of newborn babies: ");
    scanf("%d", &n);
    
    // Check if n is a valid positive number
    if (n <= 0) {
        printf("Invalid input. Number of babies must be a positive integer.\n");
        return 1;
	}

    int weight[8];
    printf("Enter the weights of the babies:\n");
    for (i = 0; i < n; i++) {
        scanf("%f", &weight[i]);
    }

    // Calculate the mean weight
    int sum = 0;
    for (i = 0; i < n; i++) {
        sum += weights[i];
    }
    int mean = sum / n;

    // Calculate the maximum weight
    int max = weights[0];
    for (i = 1; i < n; i++) {
        if (weights[i] > max) {
            max = weights[i];
        }
    }

    // Calculate the minimum weight
    int min = weights[0];
    for (i = 1; i < n; i++) {
        if (weights[i] < min) {
            min = weights[i];
        }
    }

    // Display the results
    printf("Mean weight: %.2d\n", mean);
    printf("Maximum weight: %.2d\n", max);
    printf("Minimum weight: %.2d\n", min);

    return 0;
}



  

 
