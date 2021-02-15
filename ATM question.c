#include <stdio.h>
int main(){
	int withdraw;
	double result;
	double balance ;
	printf("Enter the amount = ");
	scanf("%d%lf",&withdraw,&balance);
	result = withdraw % 5;
	
	if(result == 0 && withdraw < balance){
		result = (double)withdraw;
		result = result + 0.50;
		printf("balance is %.2lf",balance - result);
	}
	else{
		printf("Insufficient Balance");
	}
	}
	
