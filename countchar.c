#include<stdio.h>
#include<String.h>
void main()
{
    int i,l=0,cs=0,cw=1,cc=0;
    char s[100];
    printf("Enter a string: ");
    gets(s);
    for(i=0;s[i]!='\0';i++)
        l++;
    for(i=0;i<l;i++)
    {
        if(s[i]==' ')
        {
            cs++;
            cw++;
        }
        else
        {
            if(s[i]=='\0')
                break;
            cc++;
        }
    }
    printf("The inputted string has %d space(s), %d word(s) and %d character(s) in it.",cs,cw,cc);
}