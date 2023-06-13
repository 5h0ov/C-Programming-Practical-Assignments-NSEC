#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int lexicographic_sort(const char* a, const char* b) 
{
    return strcmp(a,b);
}

int lexicographic_sort_reverse(const char* a, const char* b) 
{
    return strcmp(b,a);
}


int distinct_chars(const char *a)
{
    int dist = 0;
    int chars[26] = {0};

    while (*a != '\0') 
    {
        int chr = (*a++) - 'a';
        if (chr < 26)
            chars[chr]++;
    }
    
    for (int i = 0; i < 26; i++)
        if (chars[i])
            dist++;

    return dist;
}

int sort_by_number_of_distinct_characters(const char* a, const char* b) 
{
    int res = distinct_chars(a) - distinct_chars(b);
    return (res) ? res : strcmp(a,b);
}

int sort_by_length(const char* a, const char* b) 
{
    int d=strlen(a) - strlen(b);
    if(d!=0) return d;
    return strcmp(a,b);
}

void string_sort(char** arr,const int len,int (*cmp_func)(const char* a, const char* b))
{
    int i,j;
    for(i=0;i<len;i++)
    {
        for(j=i+1;j<len;j++)
        {
            if(cmp_func(arr[i],arr[j])>0)
            {
                char *temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}

int main() 
{
    int n;
    scanf("%d", &n);
  
    char** arr;
	arr = (char**)malloc(n * sizeof(char*));
  
    for(int i = 0; i < n; i++){
        *(arr + i) = malloc(1024 * sizeof(char));
        scanf("%s", *(arr + i));
        *(arr + i) = realloc(*(arr + i), strlen(*(arr + i)) + 1);
    }
    printf("\n");
    string_sort(arr, n, lexicographic_sort);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, lexicographic_sort_reverse);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");

    string_sort(arr, n, sort_by_length);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);    
    printf("\n");

    string_sort(arr, n, sort_by_number_of_distinct_characters);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");
}