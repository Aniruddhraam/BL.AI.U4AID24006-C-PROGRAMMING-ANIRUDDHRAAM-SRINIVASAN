#include<stdio.h>
int main()
{
    float a,b,x;
    char ch;
    printf("Enter number 1 and 2: \n");
    scanf("%f %f",&a,&b);
    scanf(" %c",&ch);
    if (ch=='+')
    {
            printf("Addition \n");
            printf("%f",a+b);
    }
    else if (ch=='-')
    {
        printf("Subtraction \n");
        printf("%f",a-b);
    }
    else if (ch=='*')
    {
        printf("Multiplication \n");
        printf("%f",a*b);
    }
    else if (ch=='/')
    {
        printf("Division \n");
        printf("%f",a/b);
    }
    else
    {
        printf("Error");
    }
}