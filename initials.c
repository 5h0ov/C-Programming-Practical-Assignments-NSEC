#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int len,i,a;
    printf("Enter the name: ");
    gets(str);
    len = strlen(str);

    printf("%c.",str[0]); // print first initial

    for(i=0;i<len;i++) // get the last space
        if(str[i]==' ')
            a=i;

    for(i=0; i<a; i++) // print other initials
    {   
        if(str[i]==' ')
        printf("%c.", str[i+1]);
    }
    printf(" ");
    
    for(i=a+1; i<len; i++) // print surname
        printf("%c",str[i]);
    printf("\n");
}