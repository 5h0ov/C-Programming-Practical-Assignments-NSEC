#include<stdio.h>
#include<String.h>
void main()
{
    int i,x=0,j=0;
    char str[100],r[100];
    printf("Enter a string: ");
    gets(str);
    for(i=0;str[i]!='\0';i++)
        x++;
    for(i=x-1;i>=0;i--)    
    {
        r[j]=str[i];
        j++;
    }
    r[j]='\0';
    for(i=0;i<x;i++)  
    { 
        if(r[i]==str[i])
            continue;
        else
        {
            printf("The input is not a palindrome.");
            break;
        }
    }
    if(i==x)
        printf("The input is a palindrone.");
}