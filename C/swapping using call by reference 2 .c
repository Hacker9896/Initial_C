// swapping of two numbers using call by reference

#include <stdio.h>
void swap_two_no(int* , int*);

void main(){
	
	
	int first,second;
	printf("Enter the first number =");
	scanf("%d",&first);
	printf("Enter the second number = ");
	scanf("%d", &second);
	
	printf("Before swapping the numbers are : first %d and second %d",first, second);
	
	swap_two_no(&first,&second);
	
	printf("\nAfter swapping the numbers are : first %d and second %d ", first,second);
	
}

void swap_two_no(int*first, int*second){
	int temp;
	temp = *first;
	*first = *second;
	*second = temp;
	
}
