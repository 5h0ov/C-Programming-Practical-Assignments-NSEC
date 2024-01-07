#include<stdio.h>
#include<stdlib.h>

void sort(int* arr, int n)  //Bubble Sort Method
{
    int i,j,temp;
    for (i = 0; i < n - 1; i++) 
    {
        for (j = 0; j < n - i - 1; j++) 
        {
            if (arr[j] > arr[j + 1]) 
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() 
{
    int i,x,n,low=0,high,mid, *arr=NULL;

    printf("Enter the size of the array: ");
    scanf("%d",&n);
    high=n-1;
    arr=(int *)malloc(n * sizeof(int)); //Dynamically allocated the array

    printf("Enter the elements of the array below: ");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    sort(arr,n); // Sorting The Array

    printf("Enter the element to search for: ");
    scanf("%d",&x);

    while(low<=high)  // Binary Search
    {
        mid= (low+high)/2; // Left baised
        if(x < arr[mid])
            high = mid - 1;
        else if(x > arr[mid])
            low = mid + 1;
        else
        {
            printf("Element is found and is at index %d.",mid);
            return 1;
        }
    }
    printf("Element not found.");
    return -1;
}
