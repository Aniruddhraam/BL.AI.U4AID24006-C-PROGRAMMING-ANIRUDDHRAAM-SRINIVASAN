#include <stdio.h>

int main() {
    int rows, i = 0, space, stars;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Loop through each row
    while (i < rows) 
    {
        stars = 0;
        // Print stars (2*i + 1 stars in each row)
        while (stars < 2 * i + 1) {
            printf("*");
            stars++;
        }
        printf("\n");
        i++;
    }

    return 0;
}