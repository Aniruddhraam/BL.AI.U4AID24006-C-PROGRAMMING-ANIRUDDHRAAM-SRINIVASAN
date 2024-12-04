#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    int points = 0;

    // Prompt user to enter a character
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if the character is a vowel
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        points = 5;
    }
    // Check if the character is a digit
    else if (isdigit(ch)) {
        points = 10;
    }
    // For any other character
    else {
        points = 0;
    }

    // Display the points
    printf("Points scored: %d\n", points);

    return 0;
}