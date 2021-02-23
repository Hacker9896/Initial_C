#include<stdio.h>
void print_name(int);

void main(){
	int number;
	printf("enter the number");
	scanf("%d",&number);
	print_name(number);
	printf("\n-------------------done----");
}

void print_name(int number){
	
	if(number > 0){
		print_number(number - 1);
		printf("\n this is the number %d",number);
	}
}
