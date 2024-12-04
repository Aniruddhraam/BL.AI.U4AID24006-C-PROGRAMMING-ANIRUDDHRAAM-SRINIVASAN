
#include<stdio.h>
#include<math.h>

int main() {
    float a, b, c, g, h;
    int d;

    // Input values for the quadratic equation ax^2 + bx + c
    printf("Enter the value of a, b, c in ax^2 + bx + c: \n");
    scanf("%f %f %f", &a, &b, &c);

    // Calculate discriminant
    double x = (b * b) - (4 * a * c);
    printf("Discriminant: %f\n", x);

    // Determine the nature of the roots based on the discriminant
    if (x > 0) {
        d = 1;  // Real and unequal roots
    } else if (x == 0) {
        d = 2;  // Real and equal roots
    } else {
        d = 3;  // No real roots
    }

    // Switch-case to handle different cases
    switch(d) {
        case 1:
            printf("\nThe given quadratic equation has real and unequal roots.\n");
            g = (-b + sqrt(x)) / (2 * a);
            h = (-b - sqrt(x)) / (2 * a);
            printf("Root 1: %f\n", g);
            printf("Root 2: %f\n", h);
            break;

        case 2:
            printf("\nThe given quadratic equation has real and equal roots.\n");
            g = -b / (2 * a);
            printf("Root: %f\n", g);
            break;

        case 3:
            printf("\nThe given quadratic equation does not have any real roots.\n");
            break;

        default:
            printf("Error in computation.\n");
    }

    return 0;
}
