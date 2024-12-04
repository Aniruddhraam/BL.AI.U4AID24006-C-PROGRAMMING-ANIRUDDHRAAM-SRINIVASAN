#include<stdio.h>
int main(int argc, char const *argv[])
{
    float dist,kmpl,avgsp,fuel_cost,time,cprl,litre;
    printf("Enter the distance to be travelled:\n");
    scanf("%f",&dist);
    printf("Enter the avg. speed of travel (in km/h)\n:");
    scanf("%f",&avgsp);
    printf("Enter the avg fuel consumption \n:");
    scanf("%f",&kmpl);
    printf("Enter Fuel cost per litre \n:");
    scanf("%f",&cprl);
    litre=dist/kmpl;
    fuel_cost=cprl*litre;
    printf("\nThe fuel cost is\n: %f",fuel_cost);
    time=dist/avgsp;
    printf("\nThe time taken in hrs is\n: %f",time);
}
