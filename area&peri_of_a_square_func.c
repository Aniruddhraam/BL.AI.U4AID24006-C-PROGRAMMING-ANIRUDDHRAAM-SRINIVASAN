#include<stdio.h>
int area(float);
int perimeter(float);
int main()
{
    float s,areax,perimeterx;
    printf("Enter the length of side of the square: ");
    scanf("%f",&s);
    areax=area(s);
    perimeterx=perimeter(s);
    printf("\nThe area of the square is: %f\n",areax);
    printf("The perimeter of the square is: %f\n\n",perimeterx);
    }
area(float x)
{
    return(x*x);
}
perimeter(float x)
{
    return 4*x;
}