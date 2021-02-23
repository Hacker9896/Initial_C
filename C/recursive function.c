//recursive function 

#include <stdio.h>
void print_name(int);


void main(){
	int number;
	printf("enter the number of times you want to display this message =");
    scanf("%d",&number);
    print_name(number);
    printf("\n---------now the message is done------");
}

void print_name(int number){
	if(number > 0){
		print_name(number - 1);
		printf("\nThis is the message that i am the number %d",number);
	}
}
