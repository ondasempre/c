#include <stdio.h>
#include <stdbool.h>  // libreria per la gestione della variabile bool


ricerca(int M[][], int r, int c, int x);


int main() {

	int M[][]={ 1,4,5,7,9,2,5,8,9,10,6,7,9,10,13,8,9,10,11,14,10,10,11,12,15 };
	int x=11; // valore di prova

	
	ricerca(M[][], 5, 5, x);   // da completare !!!

	return 0;
	
	

}

ricerca(int M[][], int r, int c, int x) {

	int i; //indice righe
	int j; //indice colonne
	int indice; // indice di scorrimento
	bool risultato;
	for(i=0; i<=r; i++) {
		if(i==x) risultato=1;
		else {	
			for(j=0; j<=c; j++) {

	
}
