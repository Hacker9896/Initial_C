#include <stdio.h>
int main(){
	int throws = 0;
	int dice =0;
	scanf("%d", &dice);
	while(dice != 6){
		scanf("%d",&dice);
		dice != 6;
		throws = throws + 1;
	}printf("We need %d throws to get a 6 " , throws + 1);
}
