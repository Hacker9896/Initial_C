//reading user input in array 
#include <stdio.h>
int main(){
	int array[3];
	int read_value = 0;
	int cell_value = 0;
	int i = 0;
	for ( i ; i<3 ; i ++){   // loop condition 
		printf("Enter the value = ");
		scanf("%d", &read_value);
		array[cell_value] = read_value;
		printf("the cell_number is %d and  cell value is %d\n", cell_value , array[cell_value]);
		cell_value = cell_value + 1;
		
	}
}
