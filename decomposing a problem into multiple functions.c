#include <stdio.h>
void printline(int ncols, char pattern);
void printTriangle(int nLines, char pattern);
void printRectangle(int nlines, int ncols , char pattern);
int main(){
	int ncols;
	int nlines;
	
	printf("How many columns would you like ?");
	scanf("%d", &ncols);
	printline(ncols, 'X');
	
	printf("How many line would you like?");
	scanf("%d", &nlines);
	printTriangle(nlines,'*');
	printf("\n");
	printRectangle(nlines, ncols,'#');

}

void printline(int ncols, char pattern){
	int i;
	for(i=0; i<ncols; i++){
		printf("%c",pattern);
		
	}
	printf("\n");
}	

void printTriangle(int nlines, char pattern){
	int line, cols;
	for(line = 0; line<nlines; line++){
		cols = line +1;
		printline(cols,pattern);
	}
	
}

void printRectangle(int nlines, int ncols, char pattern){
	int i ;
	for(i =0; i<nlines; i++){
		printline(ncols,pattern);
	}
}	
