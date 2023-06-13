#include <stdio.h>
#include <ctype.h>
int main() 
{
    FILE *inputFile, *outputFile;
    char ch;
    int cs=0,cc=0,cv=0;

    // Open the input file in read mode
    inputFile = fopen("input1.txt", "r");

    if (inputFile == NULL) {
        printf("Unable to open input file.\n");
        return 1;
    }

    outputFile = fopen("output1.txt", "w");

    if (outputFile == NULL) {
        printf("Unable to open even file.\n");
        return 1;
    }
     while ((ch = fgetc(inputFile)) != EOF) 
    {
        if(isspace(ch))
            cs++;
        else
        {
            if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' || ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
            {
                cv++;
                cc++;
            }
            else
                cc++;
        }
    }
    printf("The total number of characters(excluding spaces) is %d and number of spaces and vowels are %d and %d respectively",cc,cs,cv);
    // Close the files
    fclose(inputFile);
    fclose(outputFile);
    return 0;
}
