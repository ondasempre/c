#include <stdio.h>
#include <stdlib.h>

void bubblesort(int array[], int n );


int main(void) {
	int i;
	int A[] = {1000,1,56,12,9,1,45,101,45,12};
	bubblesort(A,10);
	
	
	
	
	
	
	
	for(i=0;i<10;i++) 
		printf("Valore n.%d: %d\n",i+1,*(A+i));
	return EXIT_SUCCESS;
}



void bubblesort(int array[], int n ) {
	
	int j, k, tmp;
	for(j=0; j<n; j++)    // j<n-1
		for(k=0;k<n; k++) {
			if(array[j]<array[k]) {
				tmp=array[k];
				array[k]=array[j];
				array[j]=tmp;
			}
		}
}
