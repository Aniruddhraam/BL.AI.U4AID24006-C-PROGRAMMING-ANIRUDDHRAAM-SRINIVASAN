#include<stdio.h>
float a,b,c;
int main()
{
    scanf("%f %f %f",&a,&b,&c);
    if (a > b && a > c)
    {
        printf("\nFirst number is the greatest\n");
    }
    else if (b>a && (b>c))
    {
        printf("\nSecond number is the greatest\n");
    }
    else if (c>a && c>b)
    printf("\nThird number is the greatest\n");

    else
    printf("\nAll numbers are equal\n");
}