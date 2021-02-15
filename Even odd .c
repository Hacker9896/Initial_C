#include <stdio.h>
int main(){
	int number , reminder;
	printf("Enter the number = ");
	scanf("%d", &number);
 
 reminder = number % 2;
 
 if (reminder == 0){
 	printf("the number is even");
 	
 }else{
 	printf("the number is odd");
 }
}
