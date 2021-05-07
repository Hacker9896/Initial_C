// converting a string to a number

/*
int atoi(str) Stands for ASCII to integer. Converts str to the equivalent int value. 0 is returned if the first character is not a number or no numbers are encountered.
double atof(str) Stands for ASCII to float. Converts str to the equivalent double value. 0.0 is returned if the first character is not a number or no numbers are encountered.
long int atol(str) Stands for ASCII to long int. Converts str to the equivalent long integer value. 0 is returned if the first character is not a number or no numbers are encountered.
*/

#include <stdio.h>
int main(){
	char input[10];
	int num;
	
	printf("Enter a number: ");
	gets(input);
	num = atoi(input);
	
	return 0;
}
