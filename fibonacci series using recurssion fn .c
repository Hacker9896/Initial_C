#include <stdio.h>
int fibonacci(int n);
int main(){
	int fab , n ;
	printf("Which fibonacci number you want to know = ");
	scanf("%d",&n);
	if(n<=0){
		printf("Aborting !! ");
	}else {
		fab = fibonacci(n);
		printf("The number %d is %d", n , fab);
	}
	return 0;
}

int fibonacci(int n){
	if(n==1){
		return 0;
	}else if(n==2){
		return 1;
	}else {
		return (fibonacci(n-1)+fibonacci(n-2));
	}
}
