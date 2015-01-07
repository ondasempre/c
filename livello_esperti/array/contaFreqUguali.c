 /**** Scrivere una funzione int eqfreq(int A[], int B[], int n) che presi in input due vettori A e B di eguale dimensione n ritorna il numero di valori distinti che hanno la stessa frequenza positiva sia in A che in B. Per frequenza di un valore si intende il numero di volte che il valore appare nel vettore. Ad esempio, se A = [3, 5, 3, 1, 2, 5, 5] e B = [4, 3, 5, 2, 3, 5, 4] allora la funzione ritorna 2 perché il valore 3 ha frequenza 2 in entrambi i vettori, il valore 2 ha frequenza 1 in entrambi i vettori e tutti gli altri valori hanno frequenze differenti nei due vettori. ****/
 
#include <stdio.h>
#include <stdlib.h>
 

int eqfreq(int A[], int B[], int n);


int main(void) {
	
	int A[7] = {3, 5, 3, 1, 2, 5, 5};
	int B[7] = {4, 3, 5, 2, 3, 5, 4};
	printf(" %d \n",eqfreq(A,B,7) );
	
	return EXIT_SUCCESS;
}
 

int eqfreq(int A[], int B[], int n) {
	int counted[n*2];
	int x,y,z,aux,k=0,flag=0,c_uno=0,c_due=0,ris=0;
	
	for(x=0;x<n;x++) {
		for(aux=0;aux<(n*2);aux++) {
			if (counted[aux]==A[x]) { 
				flag=1;
				break;
			}
		}
		if (!flag) {
			c_uno++;
			for(y=0;y<n;y++) {
				if (y!=x && A[y]==A[x]) {
					c_uno++;
				}
			}
			for(z=0;z<n;z++) {
				if(B[z]==A[x]) {
					c_due++;
				}
			}
			if (c_uno==c_due) ris++;
			c_uno=0;
			c_due=0;
			counted[k++]=A[x];
		}
		flag=0;
	}
	return ris;
}
			
	
	

