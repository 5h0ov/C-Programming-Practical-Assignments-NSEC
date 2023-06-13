#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int* create_array(int size) 
{
    int* array = (int*)calloc(size,sizeof(int));
    int i;  

    for (i = 0; i < size; i++) 
        array[i] = rand() % 9901 + 100;  // Generates random number in the range 100 - 1000
    
    return array;
}

void print_array(int* array, int size) 
{
    int i;

    printf("Array elements:\n");
    for (i = 0; i < size; i++) 
        printf("%d ", array[i]);
    
    printf("\n");
}

int check_integer(int* array, int size, int num) 
{
    int i;

    for (i = 0; i < size; i++) 
        if (array[i] == num) 
            return 1;  // Number found in the array
        

    return 0;  // Number not found in the array
}

int main() {
    int size, *arr, num;

    srand(time(0));  // Seed the random number generator with the current time

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    arr = create_array(size);
    print_array(arr, size);

    printf("Enter a number to check in the array: ");
    scanf("%d", &num);
    
    if (check_integer(arr, size, num)) 
        printf("%d is present in the array.\n", num);
    else 
        printf("%d is not present in the array.\n", num);

    free(arr);  // Free the dynamically allocated memory

    return 0;
}