#include <stdio.h>
int main(void){
	int no= 0;
	int i = 0;
	int j = 0;
	scanf("%d", &no);
	for ( i = 0; i <no; i ++){
		for ( j=0 ; j<no; j++){
			printf("*");
		}printf("\n");
	}
}
