#include<stdio.h>
#include<String.h>
void main()
{
    int i,c=0;
    char str[100];
    printf("Enter a string: ");
    gets(str);
    for(i=0;str[i]!='\0';i++)
        c++;   
    printf("The length of the inputted string is %d.",c);
}