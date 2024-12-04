#include<stdio.h>
int main()
{
    int x;
    printf("Enter the number till which you need the Odd numbers printed: ");
    scanf("%d",&x);
    printf("\nPrinting Even numbers\n");
    for (int i = 0; i < x; i+=2)
    {
    printf("%d\n", i);
    }
    printf("\nPrinting Odd numbers\n");
    for (int i = 1; i < x; i+=2) 
    {
    printf("%d\n", i);
    }
   
}