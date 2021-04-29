// Scanf alternative

// fgets is used to get a string of charachters i.e sentences  

#include <stdio.h>
#include <stdlib.h>

int main(){
	char name[20];
	printf("Enter Your Name = ");
	fgets(name,20,stdin); // name : variable , 20 : no of characters your string is limited to , stdin : standard input 
	printf("Your Name is %s", name);
	
	return 0;
}
