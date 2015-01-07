  /** Scrivere una funzione List insarray(List L, int k, int A[], int n) che modifica la lista di interi L inserendo, immediatamente prima del k-esimo elemento di L, n nuovi elementi con valori dati dall'array A e ritorna la lista modificata. La numerazione degli elementi della lista inizia da zero, se la lista non ha il k-esimo elemento, i nuovi elementi sono aggiunti in coda. Ad esempio, se L  10 -> 11-> 12 -> 13 e A = {1, 2} (quindi n = 2), ecco come  modificata la lista per diversi valori di k: 
   k = 0     1 -> 2 -> 10 -> 11-> 12 -> 13
   k = 2     10 -> 11-> 1 -> 2 -> 12 -> 13
   k = 6     10 -> 11-> 12 -> 13 -> 1 -> 2

   
   ***/
   
   


#include <stdio.h>
#include <stdlib.h>

typedef struct Elem{
    int value;
    struct Elem *next;
}Elem, *List;

List insarray(List L, int k, int A[], int n);

int main(void) {
    
}


List insarray(List L, int k, int A[], int n) {
    if(!L) return L;
    Elem **p = &L;      // Per mantenere il puntatore alla locazione
                        // in cui mettere il puntatore al primo dei
                        // nuovi elementi.
    while(k>0 && *p!=NULL) {  // Scorre la lista fino al k-esimo
        p = &((*p)->next);
        k--;
    }
    Elem *next = *p;           // Salva il puntatore al k-esimo elem
    int i;
    for(i=0; i<n; i++) {        // Inserisci i nuovi elementi
        *p = malloc(sizeof(Elem));
        (*p)->value = A[i];
        p = &((*p)->next);
        
    }
    *p = next;                  // Aggancia l'ultimo dei nuovi elem al k-esimo elem
    return L;
}


