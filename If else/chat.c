#include <stdio.h>

int main() {
    int s1, s2, s3;
    printf("Enter the sides of the triangle: ");
    scanf("%d %d %d", &s1, &s2, &s3);

    if (s1 + s2 + s3 == 180) {
        if (s1 == s2 && s2 == s3) {
            printf("Equilateral triangle\n");
        } else if (s1 != s2 && s2 != s3 && s3 != s1) {
            printf("Scalene triangle\n");
        } else if (s1 == s2 && s2 != s3 || s2 == s3 && s3 != s1 || s3 == s1 && s1 != s2) {
            printf("Isosceles triangle\n");
        } else if (s1 * s1 + s2 * s2 == s3 * s3 || s2 * s2 + s3 * s3 == s1 * s1 || s3 * s3 + s1 * s1 == s2 * s2) {
            printf("Right-angled triangle\n");
        }
    } else {
        printf("Invalid triangle\n");
    }

    return 0;
}

