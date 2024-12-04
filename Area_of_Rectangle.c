#include<stdio.h>
main()
{
    float s1,s2,area;
    printf("Enter the value of the sides \n");
    scanf("\n%f%f",&s1,&s2);
    printf("\nSide1= %f",s1);
    printf("\nSide2= %f",s2);
    area=s1*s2;
    printf("\nThe area of the rectangle is: %f",area);

}