#include <stdio.h>
int main(){
	char word1[50];
	char word2[50];
	int  i = 0;
	
	printf("Enter the word :");
	scanf("%s",word1);
	
	printf("Add another word :");
	scanf("%s",word2);
	
	//first letter that differ from other word
	while(word1[i] != '\0'&& word2[i] != '\0' && word1[i] == word2[i])
		i++;
		
		if(word1[i] < word2[i])
		printf("%s come before %s in alphabet\n", word1,word2);
		else if(word1[i] > word2[i])
		printf("%s come after %s in alphabet\n",word1,word2);
		else
		printf("you written the same word twice %s",word1[i]);
	
	return 0;
}
