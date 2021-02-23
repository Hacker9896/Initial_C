#include <stdio.h>
int main(){
	int target;
	int i ;
	printf("Enter the target number :");
	scanf("%d", &target);
	if(target>=0){
		for( i = 0; i <target ; i ++){
			if(i%2){
				printf("%d ",i);
			}
		}
	}else {
		printf("Nothing to do !!");
	}
	
}
