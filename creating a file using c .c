// Location of this file created is in the path where your c code is stored
// You can create any type of file you want like .html or css file
#include <stdio.h>
#include <stdlib.h>

int main(){
	//FILE * fpointer = fopen("Test.txt","a")// this will allow you to input more data without overwriting or deleting the already existing data
	FILE * fpointer = fopen("Test.txt","w");// test is name of file and "w" : write ; "a" : allocation or adding to already written in file ; "r" : only read whats in the file
	fprintf(fpointer,"Shashank,Dangi");// how to write in the created file 
	
	fclose(fpointer);// you need to close a pointer 
}
