#include <stdio.h>
int main()
{
	int a = 3, b=2 , c;
	
	printf("Before swipping : a is %d , b is %d", a,b);
	printf("]\n");
	c= a;
	a = b;
	b = c;
	printf("after swipping : a is %d and b is %d ",a,b);
	
}
