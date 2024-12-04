#include<stdio.h>
int main(int argc, char const *argv[])
{
    float f,c;
    printf("Input the temperature in Farenheit: \n");
    scanf("%f",&f);
    printf("\nThe temperature in Farenheit is: %f",f);
    c=(((f-32)*5)/9);
    printf("\nThe temperature in Celcius is: %f",c);
}