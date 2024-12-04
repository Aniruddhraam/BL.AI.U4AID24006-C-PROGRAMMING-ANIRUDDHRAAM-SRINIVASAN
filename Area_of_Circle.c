#include<stdio.h>
int main(int argc, char const *argv[])
{
    float r,area;
    printf("\nEnter the value of radius\n");
    scanf("%f",&r);
    printf("\nThe value of radius: %f",r);
    area=3.14*r*r;
    printf("\nThe area of the circle is :%f",area);
}
