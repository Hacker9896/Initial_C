#include <stdio.h>
#include <stdlib.h>
void main(){
	
	int a[10][10],b[10][10], mul[10][10], r,c,i,k,j;
	system("cls");
	printf("Enter the number of row =");
	scanf("%d",&r);
	printf("Enter the number of columns =");
	scanf("%d",&c);
	
	printf("-------Matrix A----------\n");
	for(i = 0; i<r; i++){
		for(j=0;j<c; j++){
			printf("Enter the value of %d column of %d row =",j,i);
			scanf("%d",&a[i][j]);
			
		}
	}
	printf("-------Matrix B----------\n");
	for(i = 0; i<r; i++){
		for(j=0;j<c; j++){
			printf("Enter the value of %d column of %d row =",j,i);
			scanf("%d",&b[i][j]);
			
		}
	}
	
	printf("multiply of the matrix =\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			mul[i][j]= 0;
			for(k=0;k<c;k++){
				mul[i][j]= a[i][k]*b[k][j];
			}
		}
	}
	
	//printing the result
	
	printf("\n The multiplication is =\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d\t",mul[i][j]);
		}
		printf("\n");
	}
}
