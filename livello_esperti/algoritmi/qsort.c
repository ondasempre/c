#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Cento milioni.
#define ARRAY_SIZE 100000000 

int compare(const void *a, const void *b);

int main(void) {
	register int i;
	srand(time(NULL));
	//Cento milioni di interi. sizeof(int)*100.000.000 = 400.000.000 bytes = 400MB.
	int *array = (int*)malloc(sizeof(int)*ARRAY_SIZE);
	for(i=0;i<ARRAY_SIZE;i++) 
		*(array+i) = rand();
	qsort((void*)array,ARRAY_SIZE,sizeof(int),compare);
	free(array);
	array = NULL;
	return EXIT_SUCCESS;
}

int compare(const void *a, const void *b) {
	return ( *(int*)a - *(int*)b );
}	
	
	

