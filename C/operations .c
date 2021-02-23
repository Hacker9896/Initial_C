/* few of the operators 
1. Equal to( == )
2. Not Equal to( != ) 
3. Greater than( > )
4. Less than( < )
5. Greater than and equal to( >= )
6. Less than and equal to ( <= )
7. either this OR that ( a||b )
8. both A and B condition ( a&&b )
9. True every number except 0 ; false (0) ; ie they are called boolen values;to use bool you have to include <stdbool.h> library
*/

#include <stdio.h>
#include <stdbool.h>// to use bool ;
int main(){
	int a , b;
	bool result;
	a = 12;
	b = 3;
	result = a>b;
	printf("the result is %d",result);
        
}
