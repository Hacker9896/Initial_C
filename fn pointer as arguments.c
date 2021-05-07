//function pointers as arguments

// format: void qsort(void *base, size_t num, size_t width, int(*compare)(const void *, const void*))
/*
void*base: a void pointer to the array
size_t num: the number of elements in the array
size_t width: the size of an element
int(*compare(const void*,const void*) : a fn pointer which has two arguments and returns 0 when the arguments have the same value


*/

#include <stdio.h>
#include <stdlib.h>

int compare (const void*, const void*);

int main(){
	int arr[5] = {52,23,56,19,4};
	int num, width , i;
	
	num = sizeof(arr)/sizeof(arr[0]);
	width = sizeof(arr[0]);
	qsort((void*)arr, num,width,compare);
	for(i =0; i<5; i++){
		printf("%d", arr[i]);
		
		
	}
}

int compare (const void*elem1,const void*elem2){
	if((*(int*)elem1) == (*(int*)elem2))
	return 0;
	else if((*(int*)elem1)<(*(int *)elem2))
	return -1;
	else
	return 1;
	
}
