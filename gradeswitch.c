#include <stdio.h>
void main(){
    int marks;
    printf("Enter your marks= ");
    scanf("%d", &marks);
    if(marks>100)
    printf("Invalid Input");
    switch(marks/10)
    {
        case 10:
        case 9:
           printf("Grade O");
           break;
        case 8:
          printf("Grade E");
          break;
        case 7:
          printf("Grade A");
          break;
        case 6:
          printf("Grade B");
          break;
        case 5:
          printf("Grade C");
          break;
        case 4:
          printf("Grade D");
          break;         
        default:
          printf("Grade F");
    }
}