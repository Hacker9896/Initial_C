
#include <stdio.h>

int main(){
	
	char grade = 'A';
	
	switch(grade){
		case 'A'  :
			printf("You did amazing !!");
			break;
		case 'B'  :
			printf("You did good !! keep it up :)");
			break;			
		case 'C'  :	
			printf("You can do better !! Keep it up ");
			break;	
		case 'D'  :	
			printf("Do Better Next Time !! ");
			break;					
		case 'F'  :
			printf("You Failed Bro !!");
			break;
	}
	return 0;
}
