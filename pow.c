#include<stdio.h>
void main()
{
    int X,Y,f=1;
    printf("Enter the values of X and Y respectively below:-\n");
    scanf("%d\n%d",&X,&Y);
    for(int i=1;i<=Y;i++)
    {
        f=f*X;
    }
    printf("The Required value is %d.",f);
}