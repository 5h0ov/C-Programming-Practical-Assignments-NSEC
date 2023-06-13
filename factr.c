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
    if(x==0)
        return 1;
    else
        return x*fact(x-1);
}