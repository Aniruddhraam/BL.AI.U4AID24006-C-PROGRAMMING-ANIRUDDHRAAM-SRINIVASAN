#include <stdio.h>

int main() {
    int start, end, i, num;
    unsigned long long factorial;  // Factorial can get large, so we use unsigned long long

    // Taking input for range
    printf("Enter the start of the range: ");
    scanf("%d", &start);
    printf("Enter the end of the range: ");
    scanf("%d", &end);

    // Loop through each number in the range
    while (start < end) 
    {
        num = start;
        i = 1;
        factorial = 1;  // Initialize factorial for each number

        // Calculate factorial using while loop
        while (i < num) 
        {
            factorial *= i;
            i++;
        }

        // Print factorial of the current number
        printf("Factorial of %d is %llu\n", num, factorial);
        start++;
    }
        
    return 0;
}
