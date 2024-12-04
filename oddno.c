#include <stdio.h>

int main() {
    int i = 1, n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    while (i <= n) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
        i++;
    }
    return 0;
}
