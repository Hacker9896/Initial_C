#include <stdio.h>
int main(){
	char word1[10];
	char word2[10];
	printf("Enter the word :");
	scanf("%s %s", word1,word2);//you don't need to write &word1 and &word2 with %s you can just write it without & because of its format specifier
	printf("The word is %s %s\n",word1, word2);
	word1[3]='\0';
	word2[2]='\0';
	printf("The word is %s %s",word1, word2);
}
