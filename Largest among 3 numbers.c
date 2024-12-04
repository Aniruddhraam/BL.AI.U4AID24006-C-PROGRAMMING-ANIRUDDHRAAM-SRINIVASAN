#include<stdio.h>
main()
{
    float a,b,c;
    printf("Enter number 1");
    scanf("%f",&a);
    printf("Enter number 2");
    scanf("%f",&b);
    printf("Enter number 3");
    scanf("%f",&c);
    if(a>b && a>c)
    {
        printf("Number1 is the greatest");
    }
    else if(b>a && b>c)
    {
        printf("Number2 is the greatest");
    }
    else if(c>a && c>b)
    {
        printf("Number3 is the greatest");
    }
}