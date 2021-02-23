#include <stdio.h>
int sum_two(int,int);

int main(){
	int first_no = 20, second_no = 10;
	int sum;
	sum = sum_two(first_no,second_no);
	printf("sum of %d and %d is %d",first_no,second_no,sum);
}

int sum_two(int first,int second){
	return(first + second);
}
