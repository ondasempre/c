#include <stdio.h>
#include <stdlib.h>

int **alloctrimatrix(int n, int val);

int main(void) {
	int i, j;
	int **tm= alloctrimatrix(5,2 );
	for(i=0; i<5; i++) {
		for(j=0; j<5-i; j++) {
			printf(" %d ", tm[i][j]);
		}
		printf("\n");
	}	
	for(i=0; i<5; i++) {
		free(tm[i]);
	}
	free(tm);
	return 0;
}

int **alloctrimatrix(int n, int val) {
	int **trimatrix;
	int i, j;
	
	trimatrix = malloc(sizeof(int*)*n);
	for(i=0; i<n; i++) {
		trimatrix[i] = (int*)malloc(sizeof(int)*(n-i));
		for(j=0; j<n-i; j++) {
			trimatrix[i][j] = val;
		}
	}
	return trimatrix;
	
	
}

