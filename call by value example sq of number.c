#include <stdio.h>

void fn1();
void fn2(int);
int square_of_number(int);

void main(){
	 
	 int number, sqnumber;
	 fn1();
	 scanf("%d",&number);
	 sqnumber = square_of_number(number);
	 fn2(number);
	 printf("\nIts sqare is %d",sqnumber);
}

void fn1(){
	printf("enter the number =");
}

void fn2(int number){
	printf("\n You have entered the number = %d",number);
	}
	
	int square_of_number(int number)
	{
		return number*number;
	}
