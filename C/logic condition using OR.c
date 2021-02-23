// logical condition usin OR
#include <stdio.h>
int main(){
	int sunny;
	int vacation;
	printf("Type 1 for yes and 0 for No\n");
	printf("Is it sunny today ? =");
	scanf("%d",&sunny);
	printf("\n");
	printf("Is it your vacation today ? =");
	scanf("%d", &vacation);
	int sunORvacation = sunny || vacation;
	if(sunORvacation){
		printf("Yeah !! either it is sunny or it is my vacation or its both");
	} else {
		printf("Oh No !! its nither sunny nor my vacation");
		
	}
	
}
