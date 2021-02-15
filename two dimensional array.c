//for two dimensional array 

#include <stdio.h>
int main(){
	int array[2][3]; // here the array have 2 rows and 3 columns mxn or 2x3;
	int row , column;
	printf("------Enter the value of matrix------\n");
	for (row = 0; row <2; row ++){
		for (column = 0 ; column <3; column ++ ){
			printf("Enter the value of %d column of %d row = ",column +1,row +1);
			scanf("%d",&array[row][column]);
		}
	}
	printf("-------the matrix of the given value is -------\n");
	
	
	for(row = 0; row<2; row++){
		for(column = 0; column < 3; column ++){
			printf("\t%d",array[row][column]);
		}printf("\n");
	}
}
