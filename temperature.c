#include <stdio.h>

void main(){
		printf("Enter the temperature in Degree Fahrenheit:-\n");
		float f;
		scanf("%f",&f);
		float c=0.0;
		c=(5.0*(f-32.0))/9.0;
		printf("%f Degree Fahrenheit to Degree Celcius is %f",f,c);
}