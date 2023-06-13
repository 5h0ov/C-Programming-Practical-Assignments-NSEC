#include <stdio.h>

int main() 
{
    FILE *inputFile, *evenFile, *oddFile;
    int num;

    // Open the input file in read-mode
    inputFile = fopen("input.txt", "r");

    if (inputFile == NULL) {
        printf("Unable to open input file.\n");
        return 1;
    }

    // Open the even file in write-mode
    evenFile = fopen("even.txt", "w");

    if (evenFile == NULL) {
        printf("Unable to open even file.\n");
        return 1;
    }

    // Open the odd file in write-mode
    oddFile = fopen("odd.txt", "w");

    if (oddFile == NULL) {
        printf("Unable to open odd file.\n");
        return 1;
    }

    // Read each number from the input file
    while (fscanf(inputFile, "%d", &num) == 1) 
    {
        // Check if the number is even or odd
        if (num % 2 == 0) {
            // Write even number to even file
            fprintf(evenFile, "%d\n", num);
        } else {
            // Write odd number to odd file
            fprintf(oddFile, "%d\n", num);
        }
    }

    printf("Numbers separated successfully.\n");

    // Close the files
    fclose(inputFile);
    fclose(evenFile);
    fclose(oddFile);

    return 0;
}
