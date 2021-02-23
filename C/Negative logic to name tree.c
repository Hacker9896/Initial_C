/*
As you cross a forest you can't help but admire the nature around
you including the many species of trees. Despite your interest, 
you are a very unskilled botanist and have a lot of trouble identifying 
different trees. A friend gives you some guidance and you decide to write 
a program that will give you the name of the tree based on its characteristics.

There are 4 types of trees:

the "Tinuviel" is 5 meters high or less and its leaves are composed of 8 or more leaflets

the "Calaelen" is 10 meters high or more and its leaves are composed of 10 or more leaflets

the "Falarion" is 8 meters high or less and its leaves are composed of 5 or fewer leaflets

the "Dorthonion" is 12 meters tall or more and its leaves are composed of 7 or fewer leaflets

Your program should read the height and the number of leaflets of a given tree (both integers), 
and should be able to determine and display the name of the corresponding tree.  If the height 
and number of leaflets does not match any of the tree type descriptions, your program should 
display "Uncertain".

Example 1
Input
12
12
Output
Calaelen

Example 2
Input
4
9
Output
Tinuviel

Example 3
Input
4
6
Output
Uncertain
*/

#include <stdio.h>
int main(){
	int height;
	int leaf;
	int Tinuviel ,Calaelen, Falarion,Dorthonion;
	scanf("%d",&height);
	scanf("%d",&leaf);
	Tinuviel = (height<=5) & leaf >=8;
	Calaelen = (height >= 10 )& leaf >= 10;
	Falarion = (height >= 8) & leaf <= 5;
	Dorthonion = (height >= 12 )& leaf <= 7;
	if (Tinuviel){
		printf("Tinuviel");
		
	}else{
		if(Calaelen){
			printf("Calaelen");
		}else{
			if(Falarion){
				printf("Falarion");
			}else{
				if(Dorthonion){
					printf("Dorthonion");
				}else {
					printf("Uncertain");
				}
			}
		}
	}
}
