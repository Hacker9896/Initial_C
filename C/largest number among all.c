#include <stdio.h>
int main(){
	int first , second , third,largest;
	printf("enter first number =");
scanf("%d",&first);
	printf("enter the second number =");
	scanf("%d",&second);
	printf("Enter the third number =");
	scanf("%d", &third);
	
	if (first>second){
		if(first>third){
			largest = first;
		}else{
			largest = third;
		}
	}else{
		if(second>third){
			largest = second;
		}else{
			if(third>second){
			
			largest = third;
		}else{
			printf("all numbers are equal\n");
			largest = first;
		}}
	}printf("The largest number is %d",largest);
	}

