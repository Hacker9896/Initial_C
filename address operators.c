/* code for address operator : pointers
      1. &  adress operators 
      2. * value operators
      3. ** value operators 
*/

#include <stdio.h>
int main(){
	int number;
	int *number_address;
	
	printf("Enter the number =");
	scanf("%d",&number);
	number_address = &number;
	
	printf("Entered number is %d\n",number);
	printf("Address of the number is %d", number_address);
	printf("\nEntered number is %d",*number_address);
}
