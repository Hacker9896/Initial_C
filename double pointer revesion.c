// Double pointer 

#include <stdio.h>
int main(){
	int a = 10;
	int *pt1, **pt2;
	pt1 = &a;
	pt2 = &pt1;
	
	printf("The value at a = %d\n",a);
	printf("The value at a = %d\n",*pt1);
	printf("The value at a = %d\n",**pt2);
	printf("----------------------------\n");
	printf("The value at a = %u\n",&a);
	printf("The value at pt1 = %u\n",&pt1);
	printf("The value at pt2 = %u\n",&pt2);
	printf("-----------------------------\n");
	printf("The value at a = %d\n",a);
	printf("The value at pt1 = %d\n",pt1);
	printf("The value at pt2 = %d\n",pt2);
}
