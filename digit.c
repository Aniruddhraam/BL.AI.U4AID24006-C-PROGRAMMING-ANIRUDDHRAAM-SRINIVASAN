#include <stdio.h>
int main()
{
    int num, sum=0, firstDigit, lastDigit;
    printf("Enter any number to find sum of first and last digit: ");
    scanf("%d", &num);
    lastDigit = num % 10;
    firstDigit = num;
    while(num >= 10)
    {
        num = num / 10;
    }
    firstDigit = num;
    if(firstDigit == lastDigit)
       printf(“First digit and last digits are same”);
    else
       printf(“First and last digits are not same”);
   }
