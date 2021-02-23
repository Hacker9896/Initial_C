#include <stdio.h>
int main(){
	int array [10];
	int max_age = 0;
	int i ;
	for (i = 0; i <10; i ++){
		scanf("%d", &array[i]);
		if(array[i]>max_age){
			max_age = array[i];
		}
	}printf("Max age is = %d",max_age);
}
