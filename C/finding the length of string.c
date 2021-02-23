#include <stdio.h>
int main(){
	char word[10];
	int i =0;
	printf("enter the word : ");
	scanf("%s",word);
	while( word[i] != '\0')
	
		i++;
	printf("the word %s has %d characters",word,i);

	
}
