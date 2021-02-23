// calculator by using call by reference

#include <stdio.h>

void sum (int*, int*, int*);
void difference (int*, int*, int*);
void multiply (int*, int*, int*);
void divide (int*, int*, int*);

void main(){
	
	int first, second, result, choice;
	
	printf("Enter the first number =");
	scanf("%d",&first);
	printf("Enter the second number =");
	scanf("%d",&second);
	
	printf("----Enter your choice--------\n  1. Addition \n 2. Subtraction \n 3. Multiply \n 4. Divide \n choice =");
	scanf("%d",&choice);
	
	switch(choice){
		case 1:
			sum (&first, &second, &result);
			break;
		case 2:
			difference(&first,&second,&result);
			break;
		case 3:
			multiply(&first,&second, &result);
			break;
		case 4:
			divide (&first,&second,&result);
			break;
		
		break;
		
		default:
			result = 0;
	}
 printf("The required result is %d",result);
}

void sum(int *first, int *second, int *result){
	
	*result = *first + *second;
}

void difference(int *first, int *second, int *result){
	
	*result = *first - *second;
}

void multiply(int *first, int *second, int *result){
	
	*result = *first * *second;
}

void divide(int *first, int *second, int *result){
	
	*result = *first / *second;
}
