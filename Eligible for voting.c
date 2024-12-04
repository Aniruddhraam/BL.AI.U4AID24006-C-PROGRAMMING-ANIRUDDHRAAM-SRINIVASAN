#include<stdio.h>
main()
{
    float num;
    printf("Enter your age: ");
    scanf("%f",&num);
    if(num>=18)
    {
        printf("Congratulations!!! You are eligible to vote");
    }
    else
    {
        printf("Sorry! You are not eligible to vote");
    }
}