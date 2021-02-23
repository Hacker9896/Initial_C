/* 
You decide to bet on the final match of the Tug of War National Championship. 
Prior to the match the names and weights of the players are presented, alternating
by team (team 1 player 1, team 2 player 1, team 1 player 2, and so on). There is the 
same number of players on each side. You record the player weights as they are presented 
and calculate a total weight for each time to inform your bet. You write a C program to assist with this.
Your program should first read an integer indicating the number of members per team.
Then, the program should read the player weights (integers representing kilograms) alternating by team. 
After calculating the total weight of each team, the program should display the text "Team X has an advantage" 
(replacing X with 1 or 2 depending on which team has a greater total weight).
You will then display the text "Total weight for team 1:" followed by the weight of team 1,
 then "Total weight for team 2:" followed by the weight of team 2 (see example below).
You are guaranteed that the two teams will not have the same total weight.

Example

Each team is composed of four players. Those of the first weigh 110, 113, 112, and 117kg, 
while those of the second weigh 106, 102, 121, and 111kg. Team 1 weighs a total of 452kg
whereas team 2 weighs a total of 440kg, giving team 1 an advantage.

Input
4
110
106
113
102
112
121
117
111
Output
Team 1 has an advantage
Total weight for team 1: 452
Total weight for team 2: 440
*/

#include <stdio.h>
int main(){
	int a ,c ,e,g;
	int b,d,f,h;
	int team,weight_team1,weight_team2,winner;
	scanf("%d",&team);
scanf("%d\n",&a);
scanf("%d\n",&b);
scanf("%d\n",&c);
scanf("%d\n",&d);
scanf("%d\n",&e);
scanf("%d\n",&f);
scanf("%d\n",&g);
scanf("%d",&h);

weight_team1 = a+c+e+g;
weight_team2 = b+d+f+h;

winner = weight_team1>weight_team2;

if(winner){
	printf("Team 1 has an advantage\n");
	printf("Total weight for team 1: %d\n",weight_team1);
	printf("Total weight for team 2: %d\n",weight_team2);
}else {
	printf("Team 2 has an advantage\n");
	printf("Total weight for team 1: %d\n",weight_team1);
	printf("Total weight for team 2: %d\n",weight_team2);
	
}
}