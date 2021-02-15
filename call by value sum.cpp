#include <stdio.h>
int sum_of_two(int,int);

void main(){
	
	int first = 10;
	int second = 20;
	int sum;
	sum = first+second;
	printf("sum of %d and %d is %d",first,second,sum);
}

int sum_of_two(int first, int second){
	return (first+second);
}
