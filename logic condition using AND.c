#include <stdio.h>
int main(){
	int sunny  ;
	int vacation ;
	printf("Type 1 for Yes and 0 for No .\n");
	printf("Is it sunny today ? =");
	scanf("%d", &sunny);
	printf("Is it your vacation today ? =");
	scanf("%d", &vacation);
	printf("\n");
	int sunnyandvacation = sunny && vacation;
	if(sunnyandvacation){
		printf("Yeah!");
	}else{
		printf("Oh No !");
	}
	
	
	
}
