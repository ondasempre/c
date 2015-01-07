#include <stdlib.h>
#include <stdio.h>

#define MAX 100

int leggi_array(int x[]);
void stampa_array(int x[], int n);
void insertion_sort(int x[], int n);


int main(void) {
    int v[MAX], n;
    
    n = leggi_array(v);
    stampa_array(v, n);
    insertion_sort(v, n);
    stampa_array(v, n);
    return(1);
}

int leggi_array(int x[]) {
    int i, n;
    
    printf("Numero di elementi: ");
    scanf("%d", &n);
    printf("Inserisci %d elementi: ", n);
    for (i=0; i<n; i++)
        scanf("%d", &x[i]);
    return(n);
}

// Stampa array a video
void stampa_array(int x[], int n) {
    int i;
    for (i=0; i<n; i++)
        printf("%d ", x[i]);
    printf("\n");
    return;
}

/*
 * Funzione che implementa l'algoritmo Insertion sort.
 * Riceve come argomento l'array ed il numero di
 * elementi contenuti nell'array. Non restituisce alcun
 * valore, ma modifica il contenuto dell'array, ordinandolo.
 */

void insertion_sort(int x[], int n) {
    int i, j, app;
    for (i=1; i<n; i++) {
        app = x[i];
        j = i-1;
        while (j>=0 && x[j]>app) {
            x[j+1] = x[j];
            j--;
        }
        x[j+1] = app;
    }
    return;
}