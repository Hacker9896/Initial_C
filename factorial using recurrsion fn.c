#include <stdio.h>
int factorial( int n);
int main(){
	int facto , n;
	printf("Enter the number = ");
	scanf("%d",&n);
	if(n<0){
		printf("Aborting");
	}else {
		facto = factorial(n);
		printf("%d! = %d\n",n,facto);
	}
	
}

int factorial ( int n){
	int result ;
	if (n==0){
		result = 1;
	}else {
		result = n * factorial(n-1);
	}
	return result;
}
