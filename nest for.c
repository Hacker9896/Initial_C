/*
1. scan value of no of throws;
2. scan value of no of dice used ;
3. scan the value of each throw .
4. should print the value of the no of throw and the value of dice per throw;
5. stop
*/


#include <stdio.h>
int main(){
	int throwgiven = 0;

	int dice = 0;
	int highest = 0;
	int dicevalue = 0;
	
	int throws =0;
    scanf("%d %d", &throwgiven , &dice);
      for ( throws = 0; throws< throwgiven; throws++){
      	for(dicevalue = 0; dicevalue<dice; dicevalue++){
      		scanf("%d",&dicevalue);
      		
      		
      		printf("value of dice on %d throw is %d\n", throws,dicevalue);
      		
		  }
	  } 
    
}
