#include <stdio.h>

int main() {
    int n, t1 = 0, t2 = 1, nextTerm, count = 1;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
    } else if (n == 1) {
        printf("Fibonacci series: %d\n", t1);
    } else {
        printf("Fibonacci series: %d, %d", t1, t2);
        count = 2;
        while (count < n) {
            nextTerm = t1 + t2;
            printf(", %d", nextTerm);
            t1 = t2;
            t2 = nextTerm;
            count++;
        }
        printf("\n");
    }

    return 0;
}
