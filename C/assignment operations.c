/* Assignment operations 
   a += a + any_number_taken;
      ex:- int  any_number_taken = 10;
      any_number_taken += any_number_taken + 10;// the + and = should be written without any space "+="
   a -= a - any_number_taken;
   
*/

#include <stdio.h>
int main()
{
	int any_number , any_other_number;
	printf("Enter any number = ");
	scanf("%d", &any_number);
	printf("\n");
	
	printf("Enter any other number =");
	scanf("%d", &any_other_number);
	printf("\n");
	
	any_number += any_other_number;
	printf("So the desired result is = %d", any_number);
	printf("\n");
	

	printf("Enter any number = ");
	scanf("%d", &any_number);
	printf("\n");
	
	printf("Enter any other number =");
	scanf("%d", &any_other_number);
	printf("\n");
	
	any_number -= any_other_number;
	printf("So the desired result is = %d", any_number);
	
}
