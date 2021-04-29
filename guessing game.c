#include <stdio.h>

int main(){
	
	int secretNumber = 5;
	int guess;
	int guesscount = 0;
	int guesslimit = 3;
	int outofguesses = 0;
	
	while (guess != secretNumber && outofguesses == 0){
		if(guesscount < guesslimit){
			printf("Enter the number : ");
			scanf("%d", &guess);
			guesscount ++;
		} else {
			outofguesses = 1;
		}
	}
	if(outofguesses == 1){
		printf("Out of guesses");
	}else {
		printf("You Win !!!");
	}
}
