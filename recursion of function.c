//recursion of functions

#include <stdio.h>
void number_one(int);

void main(){
	int number;
	printf("Enter the number = ");
	scanf("%d",&number);
	number_one(number);
	printf("Done");
	
}

void number(int number ){
	if(number >0){
		number_one(number - 1);
		printf("the number is %d",number);
	}
}
