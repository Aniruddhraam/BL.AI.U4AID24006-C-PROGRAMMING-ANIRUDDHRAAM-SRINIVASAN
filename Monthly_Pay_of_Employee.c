#include<stdio.h>
int main(int argc, char const *argv[])
{
    float hrs,rate,weeks,pay;
    weeks=4;
    printf("Enter the rate per hour \n");
    scanf("%f",&rate);
    printf("Enter the number of hours \n");
    scanf("%f",&hrs);
    pay=weeks*hrs*rate;
    printf("Pay to the employee %f",pay);
}
