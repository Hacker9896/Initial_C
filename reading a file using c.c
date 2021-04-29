// how to read information from a file in c 
// we can only read the data line by line i.e one line at a time
#include <stdio.h>
#include <stdlib.h>

int main(){
	char line[255];// you need to create a variable to store the data the code fetch from the file 
	FILE * fpointer = fopen("Test.txt","r");
	
	fgets(line,255, fpointer);// first enter the variable used to store , then the capacity given and then pointer
	
	// in order to print the successive  line write again
	// fgets(line,255,fpointer) // but this time you will not get the first line ; you will get the second line  
	printf("%s",line);
}
