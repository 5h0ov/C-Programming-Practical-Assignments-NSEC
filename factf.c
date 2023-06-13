#include<stdio.h>
void main()
{
    int fact(int);
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("The required factorial of %d is %d.",n,fact(n));
}
int fact(int x)
{
    int f=1,i;
    for(i=1;i<=x;i++)
        f=f*i;
    return f;
}