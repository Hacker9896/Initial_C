/*
Your job is to find the length of the longest word in a text with no 
punctuation or special characters of any kind - only contains words. 
To do so, please write a C-program that takes as a input first the 
number of words in a text, followed by all of the words in the text. 
The output of your program should be the length of the longest word in the text.

To simplify your program, you can assume that the longest word will not exceed 
100 characters.
 
Examples

Input:
14
This is a simple example text
we have to find the largest word length

Output:
7

Input:
7
All cats are grey in the dark

Output:
4
*/

#include <stdio.h>
int main(){
	int i = 0;
	int j = 0;
	int l = 0;
	int t=0;
int nwords  = 0;
int length[101];
char word[101];
scanf("%d",&nwords);
for(i = 0; i<101; i++){
	length[i]= 0;
}

for(j=0;j<nwords;j++){
	scanf("%s",word);
	l = 0;
	
	while (word[l] != '\0'){
		l++;
	}
	length[l]= length[l]+1;
	
	if(t<l){
		t = l;
		
	}
	
}printf("%d",t);
return 0;

}
