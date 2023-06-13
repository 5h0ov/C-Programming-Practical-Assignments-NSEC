#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
    int n,i;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=2;i <= sqrt(n);i++)
    {
        if(n%i==0)
        {
            printf("Not Prime");
            exit(1);
        }
        else
            continue;
    }
    printf("Prime");
}