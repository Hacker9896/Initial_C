#include <stdio.h>                                  
int main(void) {     
char word[51];     
int reused = 0;    
int i = 0;      
int j = 0;        
int length = 0;       
int swap = 0;       
printf("Write the Word.\n");        
scanf("%s",word);    
while(word[i] != '\0'){     
length++;      
i++;        
}         
for (j=0; j<n-1;j++) {
 for (i=0; i< n-1; i++){
 if (word[i] > word[i+1]{            
swap = word[i];           
word[i] = word[i+1];          
word[i+1] = swap;         
}       
}            
    }           
 printf("Sorted list: %s\n",word);        
i = 0;             
while(!reused && i if(word[i] == word[i+1]){           
reused++;              
}else{             
i = i+1;            
}          
}   
printf("%d\n",reused);          
return 0;             
}          
