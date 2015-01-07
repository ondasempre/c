/*    calcolo del MassimoComunDivisore(MCD) 
      Passiamo alla funzione mcd due valori per volta
      fino ad ottenere il nostro MCD di tutti i numeri.
      Ci serviremo di un vettore dinamico per salvare
      i dati inseriti da testiera.
  ***/

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
 

int mcd(int a, int b);


int main() {

	int n, k=0, j=0;
	int *numeri=NULL, *risultati=NULL; //  
	printf("Quanti numeri: ");
	scanf("%d", &n);
	
	if (!n) return EXIT_SUCCESS;
		
	numeri = (int*)malloc(n*sizeof(int));
	assert(numeri);
	
	if (n>1) {
		//Caso n>1
		risultati = (int*)malloc((n-1)*sizeof(int));
		assert(risultati);
		
		while(j<n) {
			printf("Inserisci il valore n.%d:  ",j+1);
			scanf("%d",numeri+j);
			j++;
		}
	
		j=0;
		
		//Passo 1 MCD
		
		*(risultati+k) = mcd(*(numeri+j),*(numeri+j+1));
		j+=2;
						
		while(j<n) {
			*(risultati+k+1) = mcd(*(risultati+k), *(numeri+j));
			k++;
			j++;
		} 
		printf(" risultato: %d\n\n", *(risultati+k));
		free(numeri);
		free(risultati);
		
		return EXIT_SUCCESS;		
		
	} else {
		//Caso n==1
		printf("Inserisci il valore: ");
		scanf("%d",numeri);
		printf("MCD: %d.", *(numeri));
		free(numeri);
		return EXIT_SUCCESS;
	}	
		
	
	
//	printf("%d \n", mcd(84, 18));   
	
	return 0;
	
}


int mcd(int a, int b) {

	while(a!=b) {
		if(a>b) a=a-b;
		else b=b-a;
	} 

	return a;

}
































