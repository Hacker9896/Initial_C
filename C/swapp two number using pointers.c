/* Swapping of two numbers using call by reference */

#include <stdio.h>
void swap_two_numbers(int*,int*);

void main(){
	int first, second;
	printf("Enter the first number =");
	scanf("%d",&first);
	printf("Enter the second number =");
	scanf("%d",&second);
	
	printf("---Before swapping the numbers are : first number is %d and second number is %d",first,second);
	swap_two_number(&first,&second);
	printf("\n After swapping the number are : first number is %d and second number is %d",first, second);}
	
	
	// code for call by reference function
	void swap_two_number(int*first, int*second){
		int temp;
		temp = *first;
		*first = *second;
		*second = temp;
	}
