#include<stdio.h>
int a,b;
void main()
{
    void swap(int,int);
    printf("Enter the two numbers below:-\n");
    scanf("%d%d",&a,&b);
    swap(a,b);
}
void swap(int x,int y)
{
    x*=y;
    y=x/y;
    x/=y;
    printf("The swapped values are:-\n%d\n%d",x,y);
}