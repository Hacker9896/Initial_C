// logical condition using NOT (!)
#include <stdio.h>
int main(){
	int sunny  ;
	int vacation ;
	printf("Use 1 for yes and 0 for no\n");
	printf("Is it sunny today ? =");
	scanf("%d",&sunny);
	printf("\n");
	printf("Is it your vacation today ? =");
	scanf("%d", &vacation);
	int NOTsunnyANDNOTvacation = !sunny && !vacation;
	if (NOTsunnyANDNOTvacation){
		printf("Oh no ! it's cloudy and even its not my vacation");
	}else {
		printf("Yeah");
	}
}
