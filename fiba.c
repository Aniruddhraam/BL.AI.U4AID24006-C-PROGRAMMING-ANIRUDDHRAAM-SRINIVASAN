//Write a C program to find  the sum of first N Fibonacci terms.
#include <stdio.h>

int main() {
    int N, term1 = 0, term2 = 1, nextTerm, sum = 0;

    // Input value for N
    printf("Enter the number of terms (N): ");
    scanf("%d", &N);

    // Check if N is a valid number
    if (N <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        printf("Fibonacci Sequence: ");

        // Calculate and print Fibonacci terms, and add them to sum
        for (int i = 1; i <= N; i++) {
            printf("%d ", term1);
            sum += term1;

            // Calculate the next Fibonacci term
            nextTerm = term1 + term2;
            term1 = term2;
            term2 = nextTerm;
        }

       
