#include<stdio.h>
main()
{
    int num;

    printf("Enter the number to be checked: ");
    scanf("%d", &num);
    if(num%2==0)
    {
        printf("The number is even");
    }
    else
    {
        printf("The numberis odd");
    }
}