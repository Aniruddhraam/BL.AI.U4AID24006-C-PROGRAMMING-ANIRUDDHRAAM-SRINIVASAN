#include<stdio.h>
int main(int argc, char const *argv[])
{
    float s,tsa;
    printf("\nEnter the side of cube: ");
    scanf("\n%f",&s);
    printf("\nThe side of the cube is: %f",s);
    tsa=6*s*s;
    printf("\nThe Total surface area of the cube is :%f",tsa);
}
