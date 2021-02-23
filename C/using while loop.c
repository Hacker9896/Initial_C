#include <stdio.h>
int main(){
	int dicevalue = 0;
	int notsix = 0;
	notsix = dicevalue != 6;
	scanf("%d", &dicevalue);
	while (notsix){
		scanf("%d", &dicevalue);
		notsix = dicevalue != 6;
		
		
	}printf(" the dice value is %d",dicevalue);
}
