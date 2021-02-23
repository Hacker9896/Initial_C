#include <stdio.h>
int main(){
	int list[] = {-10,-3,2,5,8,14,77,106,759,900};//shorted list
	int n = 10;
	int item;
	int bottom , top , mid, found;
	
	printf("Which number are you looking for ?? =");
	scanf("%d",&item);
	
	bottom = 0;// first number is 0 
	top = n -1;// last number is n-1 because the 10 place is for '\0'
	found = 0;
	
	while(!found && bottom<top){
		mid = (bottom + top)/2; // middle term 
		if(item == list[mid]){
			found = 1;
		}else if(item < list[mid]){
			top = mid -1;
		}else{
			bottom = mid +1;
		}}
	if(!found){
		printf("The number %d is not found in the list",item);
	}else{
		printf("The number %d is found in the index %d",item , mid);
	}
	return 0;
}
