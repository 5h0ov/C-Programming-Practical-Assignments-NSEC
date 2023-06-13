#include<stdio.h>
#include<String.h>
void main()
{
    int i,j=0,x=0;
    char str[100],rev[100];
    printf("Enter a string: ");
    gets(str);
    for(i=0;str[i]!='\0';i++)
        x++;
    for(i= x-1 ; i>=0 ;i--)
    {
        rev[j]=str[i];    
        j++;
    }
    printf("The reversed string is: ");
    for(i=0;str[i]!='\0';i++)
        printf("%c",rev[i]);
}