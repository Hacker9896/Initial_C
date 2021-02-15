// if else special comparision programme 
// comparision operations :-
//                           == , != , < , > , <= , => .

#include <stdio.h>
int main(){
	
	int a, b , result;
	printf("Enter the value of a =");
	scanf("%d", &a);
	printf("\n");
	printf("Enter the value of b =");
	scanf("%d",&b);
	printf("\n");
	
	// == comparision example
	result = a==b;
	if (result){
		printf("Yes ! a is equal to b ");
	} else {
		printf("No ! a is not equal to b");
	}
	printf("\n");
	
	// < comparision example
	result = a<b;
	if (result){
		printf("Yes !! a is less than b");
	} else {
		printf("No !! a is not less than b");
	}
	printf("\n");
	
	// > comparision example
	result = a>b;
	if (result){
		printf("Yes!! a is greater than b");
		
	} else {
		printf("No !! a is not greater than b");
	}
    printf("\n");
	
	// != (not equal to ) comparision example	
	result = a!=b;
	if (result){
		printf("Yes !! a is not equal to b");
	} else{
		
	 printf("No !! a is equal to b");
}
	printf("\n");
	
	
}
