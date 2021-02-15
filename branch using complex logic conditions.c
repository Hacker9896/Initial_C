// branching in logic statements !! reducing multiple steps !!
#include <stdio.h>
int main(){
	int age;
	printf("Enter your age = ");
	scanf("%d", &age);
	if(  age >= 15  && !(age>=65 )){
		printf("You are in Labour force");
		
	}else {
		printf("You are not in Labour force");
	}
	
}
