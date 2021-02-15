#include <stdio.h>
int main(){
	int a[2][3], b[2][3],sum[2][3];
	int row, column;
	printf("------------Matrix A ------------\n");
	for (row = 0; row <2; row ++){
		for (column = 0 ; column <3; column ++ ){
			printf("Enter the value of %d column of %d row = ",column +1,row +1);
			scanf("%d",&a[row][column]);
		}
	}
	
	printf("------------Matrix B ------------\n");
		for (row = 0; row <2; row ++){
		for (column = 0 ; column <3; column ++ ){
			printf("Enter the value of %d column of %d row = ",column +1,row +1);
			scanf("%d",&b[row][column]);
		}
	}
	
	for(row = 0; row<2;row ++){
		for(column = 0; column<3;column++){
			sum[row][column]= a[row][column] + b[row][column];
		}
	}
	printf("----------sum of both matrix--------\n");
	for(row = 0; row<2; row ++){
		for(column = 0; column <3;column++){
			printf("\t%d",sum[row][column]);
		}printf("\n");
	}
}
