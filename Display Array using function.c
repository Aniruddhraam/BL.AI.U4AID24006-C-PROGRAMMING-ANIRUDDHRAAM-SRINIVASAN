#include<stdio.h>
int display(int marks[]);
int main()
{
int marks[5]={99, 90, 96, 93, 95};
display(marks);
}
int display(int marks[])
{
    int i=0;
    for(i=0;i<=4;i++);
    printf("\n%d\n",marks[i]);
}