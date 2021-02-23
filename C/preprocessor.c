/* Preprocessor code : Area of a circle */

#include <stdio.h>
#define PI 3.14 // defining the value of constant mean it can't be changed

int main(){
	double radius,perimeter,area;
	
	printf("Enter the radius of cirlce = ");
	scanf("%lf",&radius);
	perimeter = 2*PI*radius;
	area = PI*radius*radius;
	
	printf("Radius of circle is %.2lf \n the perimeter is %.2lf \n the area of the circle is %.2lf",radius,perimeter,area);
}
