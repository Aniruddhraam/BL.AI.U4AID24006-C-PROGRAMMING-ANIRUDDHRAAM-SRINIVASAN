#include <stdio.h>

int main() {
    int i = 1, n, sum = 0;
    printf("Enter a positive odd integer N: ");
    scanf("%d", &n);

    while (i <= n) {
        sum += i;
         i += 2;  // Increment by 2 to get only odd numbers
    }
    printf("Sum of the series is: %d\n", sum);
    return 0;
}
