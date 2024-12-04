#include <stdio.h>

int gcd(int a, int b) {
    while (a != b) {
        if (a > b) {
            a -= b;
        } else {
            b -= a;
        }
    }
    return a;
}

int main() {
    int a, b, gcd_val, lcm;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    gcd_val = gcd(a, b);
    lcm = (a * b) / gcd_val;  // Using the formula LCM * GCD = a * b

    printf("GCD: %d\nLCM: %d\n", gcd_val, lcm);
    return 0;
}
