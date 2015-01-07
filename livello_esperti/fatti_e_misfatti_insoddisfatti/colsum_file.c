/***

Scrivere una funzione void colsum(const char *fMatrix, const char *fCols) che, prese in input due stringhe fMatrix e fCols, crea un file di nome fCols e vi scrive le somme degli elementi delle colonne della matrice di interi memorizzata nel file di nome fMatrix.

Entrambi i file sono di tipo testo. La matrice è memorizzata nel file fMatrix come una sequenza di interi separati da spazi bianchi e/o caratteri '\n': i primi due interi rappresentano il numero di righe e il numero di colonne della matrice, mentre gli altri sono gli elementi della matrice disposti per righe.

Ad esempio, se il contenuto del file fMatrix è

2 3 25 -2 13 -9 105 77

allora la matrice ha 2 righe, 3 colonne, la prima riga è 25 -2 13 e la seconda riga è -9 105 77.

La funzione deve creare un file fCols contenente

16 103 90



***/

// n=2
// m=3

#include <stdio.h>
#include <stdlib.h>

void colsum(const char *fMatrix, const char *fCols);

int main(void) {
    
}

void colsum(const char *fMatrix, const char *fCols) {
    FILE *f1 = fopen(fMatrix, "r");
    if(f1==NULL) return;
    File *f2 = fopen(fCols, "w");
    if(f2==NULL) {
        fclose(f1);
        return;
    }
    int i, j; // Indici di scorrimento matrice
    /** atoi() devo trasformare il file di testo in binario ***/
    
    for(j=0;j<m; j++) {
        int somma =0;
        for(i=0; i<n; i++) {
            somma += array[j];
        }
        printf("%d ", somma); // questi valori vanno inseriti nel secondo file !!
    }
    
    fclose(f1);
    fclose(f2);
    f1=NULL;
    f2=NULL;
    
}