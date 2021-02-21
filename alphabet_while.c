/* Alphabet using while loop
   Here we will use ASCII code for alphabets
   */
   
#include <stdio.h>
int main(){
	int ascii_code = 12;
	while (ascii_code<=120){
		printf("ASCII code = %d \t charachter = %c\n", ascii_code,ascii_code);
		ascii_code++;
	}
}
