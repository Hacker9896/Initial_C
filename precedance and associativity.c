#include <stdio.h>
int main(void){
	int a , b,c , result;
	printf("Enter a , b and c =");
	scanf("%d %d %d", &a,&b,&c);
	printf("\n");
	
	result= a + 2*b+ a*c -a/b + c%a;
	printf("desired output is %d", result);
	
	
}
