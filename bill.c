#include<stdio.h>
main()
{
    float p1,p2,p3,p4,total;
    printf("Enter the value of 4 items\n");
    scanf("%f%f%f%f",&p1,&p2,&p3,&p4);
    total=p1+p2+p3+p4;
    printf("\nThe value of item1: %f",p1);
    printf("\nThe value of item2: %f",p2);
    printf("\nThe value of item3: %f",p3);
    printf("\nThe value of item4: %f",p4);
    printf("\nThe total amount: %f",total);
}