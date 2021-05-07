// building a string from other data types

#include <stdio.h>

int main(){
	char info[100];
	int emp = 75;
	char dept[] = "HR";
	
	sprintf(info,"The %s dept had %d employees.",dept,emp);
	printf("%s\n",info);
	
	return 0;
	
}
