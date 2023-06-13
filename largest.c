#include<stdio.h>
void main()
{
    int i,j,max=0,a[5][5];
    printf("Enter the numbers for the 5X5 matrix below:-\n");
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
            scanf("%d",&a[i][j]);
    }
    printf("The matrix you entered:-\n");
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
     for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(a[i][j]>max)
                max=a[i][j];
        }
    }
    printf("The largest element from the above matrix is %d",max);
}