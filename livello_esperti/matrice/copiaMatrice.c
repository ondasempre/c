#include <stdio.h>
#define SIZE 4

void sommamatrice(const int n, int A[n][n], int B[n][n] );
void printmatrice(const int nr, int nc, int M[nr][nc] );


int main() {

	int A[SIZE][SIZE]={ {2,3,4,2},{1,2,3,2},{3,4,5,2},{1,1,1,1}  };
	int B[SIZE][SIZE]={{1,1,1,1},{1,1,1,1},{1,1,1,1}, {1,1,1,1}};

	printf("Matrice A: \n"); printmatrice(SIZE,SIZE, A);
	printf("Matrice B: \n"); printmatrice(SIZE,SIZE, B);
	sommamatrice(SIZE, A, B);
	printf("\n\n Nuova matrice: \n");
	printmatrice(SIZE,SIZE, A);	
	return 0;
}


void sommamatrice(const int n, int A[n][n], int B[n][n] ) {

	int a, b;
	for(a=0; a<n; a++) {
		for(b=0; b<n; b++) {
			A[a][b] += B[a][b];
		        }
		}
	}
	
void printmatrice(const int nr, int nc, int M[nr][nc] ) {

	int i, j;
	for(i=0; i<nr; i++) {
		for(j=0; j<nr; j++) {
			printf("%7d", M[i][j]);
			}
			printf("\n");
			}
}
