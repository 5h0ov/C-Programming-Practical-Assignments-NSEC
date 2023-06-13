#include<stdio.h>
#include<stdlib.h>
void main() //insertion sort       
{
    int i,j,min,x,choice,temp;
    printf("Enter 1 for Sorting in Ascending order\nEnter 2 for Sorting in Descending Order\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    printf("Enter the size of the array: ");
    scanf("%d",&x);
    int a[x];
    printf("Enter the numbers to be sorted in the array below:-\n");
    for(i=0;i<x;i++)
        scanf("%d",&a[i]);
    for(i=1;i<x;i++)
    {
        temp=a[i];
        if(choice==1)
        {
        for(j=i-1;j>=0 && a[j] > temp ; j--)
            a[j+1]=a[j];
        }
        else if(choice==2)
        {
            for(j=i-1;j>=0 && a[j] < temp ; j--)
            a[j+1]=a[j];
        }
        else
        {   
            printf("Invalid Input");
            exit(1);
        }
        a[j+1]=temp;
    }
    if(choice==1)
    {
    printf("The sorted array in ascending order: ");
     for(i=0;i<x;i++)
        printf("%d ",a[i]);
    }
    if(choice==2)
    {
    printf("The sorted array in descending order: ");
     for(i=0;i<x;i++)
        printf("%d ",a[i]);
    }
}