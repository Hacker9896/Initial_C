// code & * pointer and ** double pointer

#include <stdio.h>
int main(){
	int number,*first,**second;
	printf("Enter the number = ");
	scanf("%d",&number);
	
	first = &number;
	second =&first;    // unsigned integer %u
	
	printf("Value at number = %d \n value at first = %u \n Value at second = %u",number, first,second);
	printf("\nYou have entered %d",number);
	printf("\nYou have entered %d",*first);
    printf("\nYou have entered %d",**second);
    printf("\nYou have entered %d",*(&number));
    printf("\nYour entered value is stored at %u memory location", &number);
}

