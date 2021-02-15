#include <stdio.h>
int main(){
	int a, b, result ;
	printf("Enter a and b =");
	scanf("%d %d", &a,&b);
	
	result = a+b ;
	printf("Addition of %d and %d is %d ", a,b, result);
	printf("\n");
	
	result = a-b;
	printf("Substration of %d and %d is %d" , a , b, result);
	printf("\n");
	
	result = a*b;
	printf("Multiplication of %d and %d is %d ", a,b,result);
	printf("\n");
	
	result = a/b;
	printf("Division of %d and %d is %d", b,a,result );
	printf("\n");
}
