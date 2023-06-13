#include <stdio.h>

int main(){
	printf("Enter the radius of Circle :");
	float r=0.0;
	scanf("%f",&r);
	printf("The Perimeter or Circumference of Circle with radius %f is %f\n",r,(2.0*r*(22.0/7)));
	printf("The area of the circle is %f",(22.0/7)*r*r);	
}

