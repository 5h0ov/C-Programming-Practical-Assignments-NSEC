#include<stdio.h>
void main()
{
    int i,j,n,m;
    printf("Enter the values of N and M for the size of the matrix N X M below:\n");
    scanf("%d%d",&n,&m);
    int a[n][m],b[n][m];
    printf("Enter the numbers for the 4X4 matrix below:-\n");
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            scanf("%d",&a[i][j]);
    printf("The matrix you entered:-\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
    printf("The required transpose of the above matrix is:-\n");
    for(j=0;j<m;j++)
    {
        for(i=0;i<n;i++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
}