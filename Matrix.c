#include<stdio.h>
int main(int argc, char const *argv[])
{
    for(int i=1;i<3;i++)
    {
        for(int j=1;j<4;j++)
        {
            printf("(%d,%d)\t",i,j);
        }
        printf("\n");
    }
    return 0;
}
