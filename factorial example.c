#include <stdio.h>
int main(){
	int n , facto , i;
	
	printf("Enter the number = ");
	scanf("%d",&n);
	
	facto = 1;
	for(i=1; i<= n; i++){
		facto = i * facto;
	}
	if(n<0){
		printf("Negative !!!");
	}else{
		printf("%d ! = %d",n,facto);
	}
}
