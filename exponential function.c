/* exponential Function 

1. input -> base number
2. power -> power number
3.loop with repetation = power;
 

*/

#include <stdio.h>


int main(){
     int base, power,result,i;
     printf("Enter the Base = ");
     scanf("%d",&base);
     printf("Enter the power = ");
     scanf("%d" , &power);
     result = 1;
    
     
     for( i = 0; i < power;i++){
     	result = base * result;
    
	 }
	 
	 printf("Exponention of %d^%d is %d",base,power,result);
	
}
