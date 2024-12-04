#include<stdio.h>
main()
{
    float h,w,bmi;
    printf("Enter your height in meters: ");
    scanf("%f",&h);
    printf("Enter your weight in kilograms: ");
    scanf("%f",&w);
    bmi=w/(h*h);
    printf("\nYour bmi is: %f",bmi);
    printf("\n");
    if(bmi<18.5)
    {
        printf("You are Underweight, Try finding a foodie as a friend\n");
    }
    else if(bmi>=25)
    {
        printf("You are overweight\n");
    }
    else
    {
        printf("\nPerfect!!! Just perfect\n\n");
    }
}