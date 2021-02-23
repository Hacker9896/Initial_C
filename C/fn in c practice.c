#include <stdio.h>
void print_my_name(char);

void main(){
	char name = 'M';
	print_my_name(name);
	
}

void print_my_name(char name){
	printf("Hello %c",name);
}
