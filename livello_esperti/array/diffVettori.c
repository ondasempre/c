/** Il programma ritorna il numero di elementi differenti: in questo caso 2,
    cioè 10 (vettore A) e 5 (presente nel vettore B).
    
    error = Al momento la funzione main torna 8 !!!    ***/



#include <stdio.h>
#include <stdlib.h>


int diffvals(int A[], int B[], int n);
int isin(int X[], int n, int v);


int main() {
	
	int A[5]={15,22,12,11,10};   // primo array 
	int B[5]={1,2,3,4,10};	 // secondo array
	
	printf(" %d \n", diffvals(A, B, 5));
	return 0;
}

int isin(int X[], int n, int v) {	// controllo la presenza dell'elemento all'interno
                                    // del vettore.
	int i;
	for(i=0; i<n; i++)  {
		if(X[i]==v) return 1;
		return 0;
	}
} 

int diffvals(int A[], int B[], int n) {	 // verifica delle differenze tra A[] e B[].

	int i, diff=0;
	for(i=0; i<n; i++) {
		if(isin(A,n,A[i]) && isin(B, n, A[i]) ) diff++;
		if(isin(B,n,B[i]) && isin(A, n, B[i]) ) diff++;
	}
	return diff;
}
