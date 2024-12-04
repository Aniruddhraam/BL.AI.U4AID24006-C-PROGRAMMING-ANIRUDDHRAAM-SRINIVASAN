#include<stdio.h>

int main() 
{
    float num;
    
    printf("Enter the number to be checked: ");
    scanf("%f", &num);
    
    if(num > 0)
    {
        printf("The number is positive\n");
    }
    else if(num < 0)
    {
        printf("The number is negative\n");
    }
    else
    {
        printf("The number is 0 lol\n");
    }

    return 0;
}
