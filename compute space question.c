/*
A delivery company has hired you to manage their tracking services division. It is
 your job to store all of the currently used tracking codes in the company's database. 
 These codes consist of either all integers, all decimal numbers, or all characters. 
 The chief technology officer has warned you that the database is old and has limited 
 space, so you want to determine how much memory the tracking codes will occupy before 
 storing them. You decide to write a program to assist you in this process. 

Your program should first read an integer number indicating how many tracking codes you 
plan on entering. Next, for each successive tracking code your program should read in the 
integer length of code followed by a space and then the type of code ('i' for integer, 'd' 
for decimal, or 'c' for character). Finally your program should print the total amount of 
space required to store all of the tracking codes (in bytes). If the user enters an incorrect 
type for any tracking number, the program should print 'Invalid tracking code type' and exit.

Examples
Input:
3
10 i
7 c
12 d 
Output:
143 bytes
 

Input:
2
3 c
20 d
Output:
163 bytes
 
Input:
4
5 i
2 d
10 a
3 c
Output:
Invalid tracking code type 
*/

#include <stdio.h>
int main(){
	
	int n,i,j;
	int x = 0;
	int total =0;
	char m;
	printf("Enter the total number of data you want to enter:");
	scanf("%d",&n);
	for( i; i<n; i++)
	{
		printf("Enter the %d value: ",i+1);
		scanf("%d",&j);
		scanf(" %c",&m);
		if(m=='i'){
			total += j*(sizeof(int));
			
		}else if( m=='d'){
			total += j*(sizeof(double));
			
		}else if(m=='c'){
			total += j*(sizeof(char));
			
		}else{
			x = 1;
		}
		
	}
	if(x != 1){
		printf("%d bytes",total);
	}else {
		printf("Invalid tracking code type");
	}
}
