#include <stdio.h>
int min(int num[30],int times);
int main()
{
    int num[30];
    int times;
    int i ;
   // printf("enter the times = ");
    scanf("%d",&times);
    
    for(i=0; i<times; i++){
    	scanf("%d",&num[i]);
	}
    
    min(num,times);
    
    return 0;
}

int min(int num[30], int times)
{
   int j;
   
   int smallest;
   smallest = num[0];
   for(j=0; j<times; j++){
   	if(num[j]<smallest){
   		smallest = num[j];
	   }
   }
   printf("%d",smallest);

}
