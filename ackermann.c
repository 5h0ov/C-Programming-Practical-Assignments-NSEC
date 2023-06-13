#include<stdio.h>
#include<stdlib.h>
void main()
{
    long A(int,int);
    int a,b;
    printf("Enter two numbers below:-\n");
    scanf("%d%d",&a,&b);
    printf("The required Ackermann value: %ld",A(a,b));
}
long A(int m,int n)
{
    if(m==0)
        return n+1;
    else if(m>0 && n==0)
        return A(m-1,1);
    else if(m>0 && n>0)
        return A(m-1,A(m,n-1));
    else
    {
        printf("Invalid Input!");
        exit(1);
    }
}