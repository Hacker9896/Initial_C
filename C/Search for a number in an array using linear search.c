#include <stdio.h>
int main(){
	int list[] = {6, -2, 5, 12, 7, 3, 8, 18, -10, 1};//defining the value of every item in the list
	int n = 10;//no of items in the list
	int item, i , found;
	
	printf("Enter the item you want to find :");
	scanf("%d",&item);//enter the item you want to find in the list
	
	i = 0;
	found = 0;
	while(!found && i<n){
		if(item == list[i]){
			found = 1 ;
		}else {
			i++;
		}
	} 
	if(found){
		printf("I found %d in %d index",item,i);
	}else{
		printf("the given word is not in the index");
	}
	
	
	
	
}
