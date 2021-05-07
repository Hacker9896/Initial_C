#include <stdio.h>
// static varibale value doesn't change after returning
#include <stdlib.h>


void say_hello();

int main(){
	int i;
	
	for(i=0; i<5; i++){
		say_hello();
	}
	
	return 0;
}

void say_hello(){
	static int num_calls = 1;
	
	printf("Hello Number %d\n", num_calls);
	num_calls++;
	
}
