/*
You are still conducting linguistic research! This time, you'd like to write a program 
to find out how many letters occur multiple times in a given word. Your program should 
read a word from the input and then sort the letters of the word alphabetically (by their 
ASCII codes). Next, your program should iterate through the letters of the word and compare
 each letter with the one following it. If these equal each other, you increase a counter by 
 1, making sure to then skip ahead far enough so that letters that occur more than twice are 
 not counted again. You may assume that the word you read from the input has no more than 50 
 letters, and that the word is all lowercase.

Examples
Input:
apple
Output:
1
 
Input:
keeper
Output:
1
 
Input:
erroneousnesses
Output:
5

Input:
taylor
Output:
0
*/

#include <stdio.h>
int main(){
	char name[50];
	int i, count;
	int swap;
	
	printf("Enter the name = ");
	scanf("%s",name);
	count = 0;
	while (name != '\0'){
		if(name[i] == name[i+1]){
			count += 1;
		}else if( name[i]<name[i+1]){
			 swap = name[i];
			 name[i] = name[i+1];
			 name[i+1] = swap;
		}
		i++;
			}
	printf("the count is %d",count);
	
}
