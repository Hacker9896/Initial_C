/*
You want to determine the number of cities in a given region that have a 
population strictly greater than 10,000. To do this, you write a program 
that first reads the number of cities in a region as an integer, and then 
the populations for each city one by one (also integers).

Example

Input
6
1000
5000
15000
4780
0
23590

Output
2
*/

#include <stdio.h>
int main()
   {
	int cities;
	int total = 0;
	int i;
	int population;
	
	scanf("%d" , &cities);
	
	for( i = 0; i<cities; i ++)
	{
		scanf("%d", &population);
		if(population>10000)
		{
			total = total + 1;
		}
	}
	printf("%d" , total);
}
