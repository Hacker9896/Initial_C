// code to demonstrate character and strings 

#include <stdio.h>
void main(){
	char firstn= 's';
	char name[]= "shashank";
	char name1[20] ="Mr. Shashank";
	char yname[20];
	
	printf("First name is %c\n",firstn);
	printf("Name = %s\n",name);
	printf("Full name = %s\n",name1);
	printf("\n Please enter your name =");
	gets(yname); // for input string
	printf("Your name is %s \n",yname);
	printf("%s",strcat(name1,yname));
	printf("\n now my name is %s",name1);
}
