#include<stdio.h>
main()
{
    float a,b,c,d,e,avg;
    printf("Enter the grade of subject1\n");
    scanf("%f",&a);
    printf("Enter the grade of subject2\n");
    scanf("%f",&b);
    printf("Enter the grade of subject3\n");
    scanf("%f",&c);
    printf("Enter the grade of subject4\n");
    scanf("%f",&d);
    printf("Enter the grade of subject5\n");
    scanf("%f",&e);
    avg=(a+b+c+d+e)/5;
    printf("Your average mark is: %f",avg);
    if(avg>80)
    {
        printf("\nCongratulations!!! You got A grade");
    }
    else if(avg>60 && avg<80)
    {
        printf("\nYou got B grade");
    }
    else if(avg>40 && avg <60)
    {
        printf("\nYou got C grade");
    }
    else
    {
        printf("\nYou FAILED!!! FAILIURE\n");
    }
}