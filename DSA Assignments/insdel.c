#include <stdio.h>
#include <stdlib.h>

// Function to insert an element at a specified index in the array
int* insert(int* arr, int* size, int index, int element) 
{
    (*size)++;
    arr = (int*)realloc(arr, (*size) * sizeof(int));
    
    // Shift elements to the right to make space for the new element
    for (int i = (*size) - 1; i > index; i--) 
        arr[i] = arr[i - 1];
    arr[index] = element;

    return arr;
}

// Function to delete an element from a specified index in the array
int* delete(int* arr, int* size, int index) 
{
    if (index >= 0 && index < (*size)) 
        // Shift elements to the left to overwrite the element at the specified index
        for (int i = index; i < (*size) - 1; i++) 
            arr[i] = arr[i + 1];

    (*size)--;
    arr = (int*)realloc(arr, (*size) * sizeof(int));

    return arr;
}

void main() 
{
    int i,size=0,ch, element, index;

    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int *arr=(int*)malloc(size * sizeof(int)); // Dynamically allocated the array

    printf("Enter the elements of the array: ");
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);

    printf("\nEnter 1 for Inserting an element and 2 for Deleting an element\n");
    printf("Enter your choice: ");
    scanf("%d", &ch);

    switch (ch) 
    {
        case 1:  //insertion
            printf("Enter the index(0,1,2,...) where you want to insert the element: ");
            scanf("%d", &index);
            if (index >= 0 && index <= size) 
            {
                printf("Enter the element to insert: ");
                scanf("%d", &element);
                arr = insert(arr, &size, index, element);

                for(i=0;i<size;i++)
                    printf("%d ",arr[i]);
            } 
            else 
                printf("Invalid index. Insertion failed.\n");
            break;

        case 2:  //deletion
                printf("Enter the index(0,1,2,...) of the element you want to delete: ");
                scanf("%d", &index);

                if (index >= 0 && index < size)
                { 
                    arr = delete(arr, &size, index);

                    for(i=0;i<size;i++)
                        printf("%d ",arr[i]);
                }
                else 
                    printf("Invalid index. Deletion failed.\n");

                break;
        default:
            printf("Invalid choice. Please try again.\n");
    }

    // Free the dynamically allocated memory
    free(arr);
}
