#include <stdio.h>

// Function declaration
void welcome();

int main() {
    printf("Before welcome\n");
    welcome();
    return 0;
}

// Function definition
void welcome() {
    printf("Welcome to C\n");
}
