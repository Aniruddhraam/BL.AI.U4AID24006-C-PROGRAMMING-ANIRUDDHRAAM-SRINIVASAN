//Write a C program to find the sum of series 2 – 4X + 6X2 – 8X3 . . . 2mXN-1. 
//Sample input: m=4, N=3, X=2. Output = 18
#include <stdio.h>
#include <math.h>

int main() {
    int m, N;
    float X, sum = 0;

    // Input values for m, X, and N
    printf("Enter the value of m: ");
    scanf("%d", &m);

    printf("Enter the value of X: ");
    scanf("%f", &X);

    printf("Enter the value of N: ");
    scanf("%d", &N);

    // Calculate the sum of the series
    for (int i = 0; i < N; i++) {
        sum += (2 * (i + 1) * pow(X, i)) * (i % 2 == 0 ? 1 : -1);
    }

    // Output the result
    printf("The sum of the series is: %.2f\n", sum);

    return 0;
}

