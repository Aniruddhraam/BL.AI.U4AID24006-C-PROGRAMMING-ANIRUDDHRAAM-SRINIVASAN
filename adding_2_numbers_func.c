#include <stdio.h>

float sum(float, float);

int main()
{
    float x, y, ans;
    printf("Enter the 2 numbers: \n");
    scanf("%f %f", &x, &y);
    ans = sum(x, y);
    printf("Sum of both the numbers is %f \n", ans);
    return 0;
}

float sum(float x, float y)
{
    return x + y;
}
