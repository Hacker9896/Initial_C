/* Loops in C: We have three types of loop in C
 1. do - while loop
 2. while
 3. for 
 
 code for do-while loop
 do{
 statemnt1;
 statement2;
 
}
while(condition for loop);

*/

#include <stdio.h>
int main(){
	int n,i;
	printf("Enter the number value = ");
	scanf("%d",&n);
	
	do{
		printf("this code is for do-while loop\n");
		n--;
		printf("%d",n);
	}while(n>0);
}
