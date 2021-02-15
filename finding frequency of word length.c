#include <stdio.h>
int main(){
	int i = 0 ;
	int j = 0;
	int l = 0;
	int nwords = 0;//how many words are going to be in the sentence
	int length[10];//there will be max 10 letters in one word
	char word[11];//there would be max 10 words and one /0 terminator
	for (i=0;i<10;i++){
		length[i]=0;
	}
	scanf("%d",&nwords);
	for(j = 0;j<nwords;j++){
			scanf("%s", word);
			l=0;
		while(word[l] != '\0'){
			l++;
		}
		length[l]=length[l]+1;
		printf("%s %d\n",word, l);
	}
	
			
	
		for(j=0;j<10;j++){
			printf("there are %d words with %d letters\n",length[j],j);
		}
	}

