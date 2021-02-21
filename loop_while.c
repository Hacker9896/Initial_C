//Code for while loop

#include <stdio.h>
int main(){
	int n;
	printf("Enter the number value =");
	scanf("%d",&n);
	while(n>0){
		printf("This is the code for while loop.\n");
		--n; // n = n-1;
	}
}
