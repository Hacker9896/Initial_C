#include <stdio.h>
int main(){
	int number , factorial = 1 , i;
	printf("Enter the number ");
	scanf("%d",&number);
	
	if (number >= 0){
		if(number == 0){
			factorial = 1;
		}else{
			i = 1;
			do{
				factorial = factorial * i;
				printf("factorial of %d is %d\n",i,factorial);
				i = i +1;
			}while(i<= number);
		}
	}else{
		factorial = 0 ;
		printf("the factorial of %d is %d",number,factorial);
	}
	printf("the factorial of %d is %d",number , factorial);
}
