#include<stdio.h>
void main()
{
   int marks;
   printf("Enter your marks= ");
    scanf("%d", &marks);
   if(marks>100)
    printf("Invalid Input");
   else if(marks>=90 && marks<=100)
   {
    printf("Grade O");
   }
   else if(marks>=80 && marks<=89){
    printf("Grade E");
   }
    else if(marks>=70 && marks<=79){
    printf("Grade A");
   }
    else if(marks>=60 && marks<=69){
    printf("Grade B");
   }
    else if(marks>=50 && marks<=59){
    printf("Grade C");
   }
    else if(marks>=40 && marks<=49){
    printf("Grade D");
   }
    else{
    printf("Grade F");
   }
}
