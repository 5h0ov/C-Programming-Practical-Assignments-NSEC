#include<stdio.h>
void main()
{
    int i,j,a[5][5];
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(i==j)
                a[i][j]=1;
            else
                a[i][j]=0;
        }
    }
    printf("The required 5X5 array pattern is:\n");
     for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
}