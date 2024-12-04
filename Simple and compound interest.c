#include<stdio.h>
#include<math.h>
int main()
//use terminal and type gcc <file_name> -lm(link math) to run the file in terminal without errors
{
    float p,r,t,n,si,ci,c,g,x;
    printf("Enter the principal amount: ");
    scanf("%f",&p);
    printf("Enter the rate of interest: ");
    scanf("%f",&r);
    printf("Enter the time in years: ");
    scanf("%f",&t);
    printf("Enter the time in months: ");
    scanf("%f",&n);
    si=(p*r*t)/n;
    printf("The simple interest here is: %f",si);
    c=1+(r/n);
    g=(n*t);
    x=pow(c,g);
    ci=p*x;
    printf("\nThe compound interest here is: %f",ci);
}