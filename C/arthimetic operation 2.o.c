#include <stdio.h>
int main(){
	double a, b, result;
	printf("Enter a and b =");
	scanf("%lf %lf" , &a,&b);
	
	result = a+b;
	printf("Addition of %.2lf and %.2lf is %.2lf" , a,b , result);
	printf("\n");
	
	result = a-b;
	printf("Subtraction of %.2lf and %.2lf is %.2lf",a,b, result);
	printf("\n");
	
	result = a*b;
	printf("Multiplication of %.2lf and %.2lf is %.2lf", a,b, result);
	printf("\n");
	
	result = a/b;
	printf("Division of %.2lf and %.2lf is %.2lf ", a,b,result);// it gives quotent when divided 
	printf("\n");
	
	//result = a % b;
	//printf("Division of %.2lf and %.2lf gives the reminder %.2lf",a,b,result);// it gives the reminder but work on float and interger
}
