/*
You are conducting a linguistic study and are interested in finding words that contain the 
letter 't' or 'T' in the first half of the word (including the middle letter if there is one). 
Specifically, if the first half of the word does contain a 't' or a 'T', your program should 
output a 1. If the first half does not contain the letter 't' or 'T', but the second half does, 
then your program should output a 2. Otherwise, if there is no 't' or 'T' in the word at all, 
your program's output should be -1. You may assume that the word entered does not have more than 
50 letters.

Examples
Input:
apple
Output:
-1
 
Input:
raincoat
Output:
2
 
Input:
enter
Output:
1

Input:
Taylor
Output:
1
*/

#include <stdio.h>
int main(){
	char word[51];
	scanf("%s",word);
	int i , index;
	int found;
	found = 0;
	i = 0;
	while(word[i] != '\0'){
		i++;
	}index = i;
	i = 0;
	while(word[i]!= '\0'&&!found){
		
		if(word[i] == 't'){
			found = 1;
		}else{
			if(word[i] == 'T'){
				found = 1;
				
			}else {
				i++;
			}
		}
	}

if(found){
	if(i <= index/2){
	printf("1");
}else{
	if(i >= index/2){
		printf("2");
	}
	
}
}else{
	printf("-1");
}
}
