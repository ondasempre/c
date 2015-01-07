#include <stdio.h>
#include <stdlib.h>

int max(int A[], int dim);
int min(int A[], int dim);


int main() {
	
	int A[10]={1,2,3,4,5,6,7,8,9,100};
	int minimo, massimo;
	
	massimo= max(A, 10);
	minimo= min(A, 10);
	
	printf("\n Il valore massimo è: %d \n", massimo);
	printf(" Il valore minimo è: %d \n", minimo);
	return EXIT_SUCCESS;
}


int max(int A[], int dim) {

	int max;
	int i;
	for(i=0; i<dim; i++) {
		if(max<A[i])    {
			max=A[i];
		}
	}
	return max;
}






int min(int A[], int dim) {

	int min;
	int i;
	for(i=0; i<dim; i++) {
		if(min>A[i])    {
			min=A[i];
		}
	}
	return min;
}







