#include <stdio.h>
#include <stdlib.h>

struct student
{
	char name;
	char major;
	int age;
	double gpa;
};


int main(){
	
	struct student  student1;
	student1.age = 22;
	student1.gpa = 3.2;
	strcpy(student1.name,"Harry");
	strcpy(student1.major,"CS");
	
	
	printf("%s", student1.name);
	
}
