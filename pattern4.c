#include<stdio.h>
void main()
{
    int i,j,n;
    printf("Enter the number of lines: ");
    scanf("%d",&n);
    char ch='a';
    for(i=1;i<=n;i++)
    {
        ch='a';
        for(j=1;j<=i;j++)
        {
            printf("%c",ch);
            ch++;
        }
        printf("\n");
    }
}