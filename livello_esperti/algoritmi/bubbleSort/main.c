#include "bubbleSort.h"

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i;
	int A[] = {23,1,56,12,9,1,45,101,45,12};
	bubblesort(A,10);
	for(i=0;i<10;i++) 
		printf("Valore n.%d: %d\n",i+1,*(A+i));
	return EXIT_SUCCESS;
}
