#include <stdio.h>
int main(){
	char c;
	int i;
	double d;
	char listchar[3];
	int listint[3];
	double listdouble[3];
	
	printf("%zu\n", sizeof(listchar));
	printf("%zu\n",sizeof(listint));
	printf("%zu\n",sizeof(listdouble));
	return(0);
}
