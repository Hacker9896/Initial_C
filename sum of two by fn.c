#include <stdio.h>
int sum(int x, int y){
	int compute;
	printf("Starting the computation!\n");
	compute = x+y;
	printf("Finished Succesfully !!");
	return compute;
}
int main(){
	int a ,b;
	int result;
	printf("Please enter 2 numbers :");
	scanf("%d%d",&a,&b);
	result = sum(a,b);
	printf("Result is %d",result);
	
	return 0;
}

