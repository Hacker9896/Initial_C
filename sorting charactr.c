#include <stdio.h>
int main(){
	char word[51];
	int i , j, swap;
	
	printf("Enter the word = ");
	scanf("%s",word);
	
	while(word[i] != '\0'){
		i++;
		if(word[i] < word[i+1]){
			swap = word[i];
			word[i] = word[i+1];
			word[i+1] = swap;
		}
	}
	printf("The word after sorting is %s",word);
}
