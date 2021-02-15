/*  nesting if-else  or if-else ladder
:Code for exam grading system:
if marks >= 75 %:
    first division with honrs
if marks >=60  and < 75:
    first division only
if marks >= 45 %  and < 60%:
    second division
if marks >= 33% and < 45%:
    pass third divion
if marks < 33%:
    fail in the exam
*/

#include<stdio.h>
void main(){
	int marks;
	printf("Enter your percentage = ");
	scanf("%d",&marks);
	
	if(marks >= 75){
		printf("first division with honors");
	}else{
		if (marks >= 60 && marks < 75){
			printf("first division only");
			
		}else{
			if(marks >= 45 && marks <60){
				printf("second division");
			}else{
				if (marks >= 33 && marks <45){
					printf("pass third division");
				}else{
					printf("fail in the exam");
				}
			}
		}
	}
}
