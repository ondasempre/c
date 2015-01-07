#include <stdio.h>
#include <stdlib.h>
#define R 5
#define C 5

int main(void) {
	int somma;
	int i, j; 		// indici di scorrimento
	int A[5][5]={ {1,2,3,4,5},
		      {2,3,4,5,6},
		      {3,4,5,6,7},
		      {4,5,6,7,8},
		      {5,6,7,8,9} };
		      printf("La matrice è: \n");
	for(i=0; i<R; i++) {
		for(j=0; j<C; j++) {
			printf("%d", A[i][j]);
			somma += A[i][j];
		}
		printf("\n");
	}
	
	printf("La somma della matrice è: %d", somma);
	
	
	
	
	
	
	
	printf("\n");		      
	return EXIT_SUCCESS;
	
}
