// Micro with ASCII code 

#include <stdio.h>
#include <string.h>
#define ISDIGIT(y) (y>47 && y<58)

int main(){
    char ch;
    printf("Enter any digit =");
    //scanf("%c",&ch);
    ch = getch();// take only one char
    if(ISDIGIT (ch)){
    	printf("You entered a digit\n");
	}else{
		printf("Illegal input\n");
	}
}
